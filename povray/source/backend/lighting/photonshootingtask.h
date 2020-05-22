//******************************************************************************
///
/// @file backend/lighting/photonshootingtask.h
///
/// @todo   What's in here?
///
/// @copyright
/// @parblock
///
/// Persistence of Vision Ray Tracer ('POV-Ray') version 3.8.
/// Copyright 1991-2019 Persistence of Vision Raytracer Pty. Ltd.
///
/// POV-Ray is free software: you can redistribute it and/or modify
/// it under the terms of the GNU Affero General Public License as
/// published by the Free Software Foundation, either version 3 of the
/// License, or (at your option) any later version.
///
/// POV-Ray is distributed in the hope that it will be useful,
/// but WITHOUT ANY WARRANTY; without even the implied warranty of
/// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
/// GNU Affero General Public License for more details.
///
/// You should have received a copy of the GNU Affero General Public License
/// along with this program.  If not, see <http://www.gnu.org/licenses/>.
///
/// ----------------------------------------------------------------------------
///
/// POV-Ray is based on the popular DKB raytracer version 2.12.
/// DKBTrace was originally written by David K. Buck.
/// DKBTrace Ver 2.0-2.12 were written by David K. Buck & Aaron A. Collins.
///
/// @endparblock
///
//******************************************************************************

#ifndef POVRAY_BACKEND_PHOTONSHOOTINGTASK_H
#define POVRAY_BACKEND_PHOTONSHOOTINGTASK_H

// Module config header file must be the first file included within POV-Ray unit header files
#include "backend/configbackend.h"

// C++ variants of C standard header files
// C++ standard header files
//  (none at the moment)

// POV-Ray header files (base module)
//  (none at the moment)

// POV-Ray header files (core module)
#include "core/core_fwd.h"
#include "core/lighting/photons.h"
#include "core/render/trace.h"

// POV-Ray header files (backend module)
#include "backend/lighting/photonshootingstrategy_fwd.h"
#include "backend/render/rendertask.h"

namespace pov
{

class PhotonShootingTask final : public RenderTask
{
    public:
        PhotonTrace trace;

        PhotonShootingStrategy* strategy;

        Timer timer;
        RandomDoubleSequence rands;
        RandomDoubleSequence::Generator randgen;

        PhotonShootingTask(ViewData *vd, PhotonShootingStrategy* strategy, size_t seed);
        virtual ~PhotonShootingTask() override;

        virtual void Run() override;
        virtual void Stopped() override;
        virtual void Finish() override;

        void SendProgress();

        void ShootPhotonsAtObject(LightTargetCombo& combo);
        DBL computeAttenuation(const LightSource* Light, const Ray& ray, DBL dist_of_initial_from_center);

        PhotonMap* getMediaPhotonMap();
        PhotonMap* getSurfacePhotonMap();
    private:
        class CooperateFunction final : public Trace::CooperateFunctor
        {
            public:
                CooperateFunction(Task& t) : task(t) { }
                virtual void operator()() override { task.Cooperate(); }
            private:
                Task& task;
        };

        CooperateFunction cooperate;

        unsigned int maxTraceLevel;
        DBL adcBailout;
};

}
// end of namespace pov

#endif // POVRAY_BACKEND_PHOTONSHOOTINGTASK_H