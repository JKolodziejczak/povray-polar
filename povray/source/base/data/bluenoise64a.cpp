//******************************************************************************
///
/// @file base/data/bluenoise64a.cpp
///
/// Blue noise pattern data
/// Auto-generated using metagen-bluenoise.py.
///
/// @copyright
/// @parblock
///
/// Persistence of Vision Ray Tracer ('POV-Ray') version 3.8.
/// Copyright 1991-2018 Persistence of Vision Raytracer Pty. Ltd.
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

/// @file
/// @attention
///     **DO NOT EDIT THIS FILE!**
///     Instead, if this file needs fixing, modify metagen-bluenoise.py
///     or its invocation in `tools/meta-make/Makefile` accordingly,
///     and re-generate this file as described in @ref tools-metamake (`tools/meta-make/readme.md`).

namespace pov_base {

/// 64x64 blue noise pattern data.
/// Generated using `make-bluenoise.py -i0.1 -s1.5 -r4711`.
extern const unsigned short kBlueNoise64a[4096] = {
   654,3898,1137,1753,3811,1459,3503, 344,3083, 922,2108, 719,3676,1953,  87,3726,
  2596, 270, 948,2403,3763,3375,1777,3090,1566,3363,1925,1334,3282, 493,3858,1076,
  3696,1732, 818, 190,1272,1781, 734,2105,1329,4032,2240,3226,1463,1069,2384,4054,
  1276,2162,3697,1490,2381, 576,4083, 352,2019, 634,2677, 142,2170,2562, 992,3207,
  2458,1507,3424,2623, 259,2374,2036,1147,2438,  67,3218,2702, 489,2934, 879,2277,
  3346,1580,3588,1890, 429,1242, 632,2585,  94, 841,2789, 201,1023,2580,1508,2773,
   412,2959,3443,2337,3585,2601,3194, 172,2906,1047, 250,1710,3690,2705,1969, 383,
  2781,1666,3243, 283,1183,2692,1554,3108,1144,3909,1758,3506,3093,1892,4007, 162,
  3001, 883,2057, 559,3288, 848,4053,2857,3597,1487,3963,1784,1202,2408,4060,1345,
   635,2097,2936, 770,2788,2249,3867,1386,3614,2131,4048,1693,3525,2251, 807,3295,
  2144,1203,1562, 336,2002, 926,3954,1628,3553,2615,1952,3038, 659,   4,3126, 942,
  3609, 553,2555, 804,3780,2056,3483,   3,2333,2837, 846,1336, 384, 782,1607,2152,
  3573, 362,3742,2932,1328,1836, 138,1622, 582,1031,2319, 308,3545,3184, 375,1832,
  3107, 134,1145,4026,1486,3250, 369,1991,2946,1155,2469, 477,3011,3785, 152,1789,
  4087, 680,2644,3821,3070,1454, 415,2310, 860, 518,3828,1200,2262,3927,1592,3376,
  2029,1210,3918,1838,3158, 486, 961,1724,3720, 457,3278,2272,3822,2811,3379,1117,
  1842,2709,1633,1012,2487,3649,3122,2575,2066,3350,2982, 825,1595,2127,1072,2767,
  3703,2520,3407,2183, 253,2533,1044,3468, 697, 280,3270,1446, 713,2006,1371,2900,
   316,3554,1874,1086, 615,2744,3390,1928,2941,1397,2463,3408, 876,2604,1292, 251,
  2439,2987,  85,2294,1365,2814,2440,3025,1402,2063,1073,2652,1509, 206,2372, 563,
  4086,  61,2293,3910, 298,2151, 756,1229,3920, 173,1871,3817,2666,   5,3891, 741,
  1398, 490,1717, 703,3037,1821,3941,1539,2672,1882,3852,2174,2765,1118,3470,2461,
   959,2188,3142, 199,2362,3671,1236,  50,3750,3203, 223,1664, 371,1900,2834,3771,
   745,1649,3348,1016,3570, 205,3979, 682,3414, 136,4045, 590,1954,3717,1273,3212,
   791,1420,3385, 630,3022,1524,3410, 473,2762,1414,2368, 546,1332,3434,2392,1958,
  3308,2287,3838,1287,3658, 899,  40,2300,3152,1253, 858,3516,  78,3950, 451,3223,
  1627,2719,1315,3948,1605,2024, 816,2531,1759,1071,2089,4069,3047,3623, 514,2221,
  1135,4043,2614, 531,1608,2208,1893,1157,2724,2406,1773,3035,3425, 947,2928,2095,
  2648,3112,1175,1897,2620, 987,3801,1787,3183, 869,3681,2844, 991,3082,1639, 246,
  2898, 984, 109,2563,2058,2775,3388, 585,3774, 220,2992,1526,2442,1763,2284, 777,
  3864,   7, 723,3413,2831, 262,3306,3868, 505,2823, 760,2336,1432,1042,3296,1744,
  2911, 303,1999,3128,3787, 757,3289, 402,1576,3595, 837,1343, 388,2429, 133,1570,
   442,2256,3832, 208,3555,2110,  35,2530,2198, 354,3402,1815,2165, 439,3651,1240,
  3994,1798,3120,3539, 381,1493,1085,2168,1703,2573,1990, 387,3344,1048,3003,1375,
  2090,3524,1841,2485, 925,1437,2962,2227,1577,3279,3679, 120,2745, 665,2501,  64,
  3582,1505, 891,2449,1244,2849,2347,3887,2938, 233,2225,3912,2768,1700,3845,3482,
  1857,1000,2840,1653, 829,2979,1449,1054,3965,1660,1248, 105,4091,2512, 884,2690,
   591,2345,1443, 862,1902,3224,4090,2860, 827,3552,1167,4016,2656, 544,3747, 327,
  2856,1098,3067, 453,2163,4030, 619,1149, 307,2480,1255,1803,3497,2040,3978,1281,
  2180,3215,3729, 376,1848,  42,1458, 976,1978,1216,3117, 568,2012,3256,1193, 733,
  3645,3181, 373,2427,4035, 506,3258,2697, 674,3042,2576,3195, 720,1549,3479,2102,
  3287, 329,2865,3900, 621,2424, 140,1349, 463,3118,2318, 740,1482,1946,3236,1585,
  2522, 629,3650,1297,3239,1720,2606,3620,1987,3916, 898,2897, 452,1569,3148, 819,
  2730, 475,1121,2671,4011,3024,3562, 494,3381,2649,3692,1548, 985, 293,2231,2735,
   188,2120,1399,3421,1146,2285,1687,3490, 313,2076, 957,3699,1907,2861, 288,1350,
  1713,3778,1156,2126,2721,1616,3474,2075,3792,1537,  52,2832,3472, 915,2266, 145,
  4089,1768,2322, 112,3758, 335, 977,3077,1412, 171,3180,2149,3783,1106, 257,2953,
  1686,1972,3333,2202, 743,1617,2506,2114, 775,1755,  90,2475,3536,2967,3990,1521,
  1061,3808, 589,2722,1975, 117,3728,1279,2404,3878,1445, 492,2359,1132,3892,3058,
   689,2471,  24,3522, 946, 306,3010,1043,2590,1822,3664,2128, 396,3901,2738,1232,
  3341, 855,2780,1462,2053,2912,2360, 539,3386,2685,1671, 655,2569,3298,2331,3705,
   646,3923,1337, 310,3445,1084, 198,3665,3063,1179,4061, 735,2107,1359, 605,2505,
  2994,1647,3238, 895,3882,2955, 802,1937,3099, 139,1794,2944,3340,  71,2257, 920,
  3594,1983,3225,1325,2913,1863,3972, 602,3214, 787,1142,3023,1381,1807, 532,3040,
  1981, 408,3804,3166, 705,1190,3544,1791,2195, 831,4040,1322,  28,1917,1465,1001,
  2629,  81,2405,3106,1805,3818,2855,1394,2329, 401,1905,2884,3276, 149,1866,3432,
  2210,  65,2484,1796, 311,1525,2470, 533,1090,3465,2640, 847,3644,1536,2782,1840,
   403,2633,1572, 507,3737,2466,1433,2211, 163,3881,2477, 274,3365,2584,1015,3528,
  1501,2426,1063,1746,2595,3999,  58,1342,3691, 358,2378,3463,2883,3872, 438,3389,
  2027,3619,1600, 873,2653, 556,2004, 861,3859,3419,2521,1511,1008,3895,2760, 857,
   526,4085,1079,3513,2177,3114,3596,2776,4055,2137, 414,1270,2010, 612,4044,1316,
  3145,1038,3985,2288, 842, 351,3325,1176,2871,1955,3505,1662, 673,3806,2346,  14,
  3942,2852, 241,3394, 487,1993,3263,2787,1004,3008,1963,1081,1734, 835,2212,2981,
  1211, 716,2805,4075,1246,2302,3320,1682,  33,1299, 649,3730, 360,2364,1282,3575,
  1930,2910,1434,2634, 661,1300, 911, 240,1408,1674,3138,3775,2564,3044, 304,2421,
  3674, 130,2801,1908,3444,1646,2641,3713, 515,1477, 924,2255,2956,1223,1891, 808,
  2078,1251,3655,2199, 969,1512,2417, 622,1631,3813, 143,3248, 572,2720,3592, 278,
  1775,3213, 423,2071, 132,3672, 455,2559,2902,3208,2176,2696,1696,3159, 248,1541,
  3303, 788,3735, 411,3220,3958,1853,2344,3312, 672,2385, 263, 971,1621,3338, 747,
  2129,1506, 595,1233,3021,  88, 951,1765,2376,3100,3969,  97,3318, 426,2774,3446,
  3071, 636,1644,2684,3819,2990, 267,3476,2118,2612,1274,2434,4003,1444,1014,2534,
  3940,2369,1347,3372,2927,1573,1119,3964,1970, 936, 433,3383,1150,2074,3810,2627,
  2194, 150,2366,1676,2026,  13,2689,3638,1066,2917,3896,1812,3557,2273,1140,1864,
  3449,2975,3888,2515,3603,2142,4067,3217, 225, 779,2736,1373,2092,1707,4050,1439,
   343,2380,3253, 114, 742,1305,1827,4082, 806, 434,3543,1830, 322,2083,3124,1601,
   116, 953,3764,1829, 833,2474,3119, 666,1468,3635,1814,4029, 784,2893, 597,1049,
  3988,1348,2838,3496,1101,3018,1491, 523,2166, 164,1340, 761,2833,   6,3944,2594,
   275, 940,1716, 389,1096, 626,2791,1324,2041,3535,1088,2456,3715, 724,1035,2535,
  1859,3877,1138,1995,3423,2540,3125,1107,2750,1531,3052, 928,2799,3741, 503,3428,
  2007,3032, 584,2687, 333,3493,2161, 151,2432,2802, 353,1417,2532,  53,3234,1783,
   379,3364, 902, 536,3879,2422, 859,3827,1745,3511,2525,1986,3267,1452, 603,2919,
  1296,3762,2274,3316,1977,1559,2460, 328,3793,1665, 521,3435, 244,2694,3169,  74,
  3533, 880,2741,1552,3951, 499,2187,  45,3371,2309,3915, 166,2218,1358, 817,2592,
  1171,3633,2283,1441,4005,1051,1747,3833,3219,1161,2214,3113,1951,3500,1519,2459,
  3095,1883,2578,1594,2125, 319,3357,2793,1154,3081, 428,4006, 990,2358,3732,1685,
  2119, 687,2660,  57,2873,3719,3401, 901,3002,2268,2825,1429,1843,2236,3781,1335,
  2153, 538,3186, 204,2301, 972,1709,3710,1341, 522,1738,1168,3351,2939,1839,3830,
   374,1657,2877,  18,1982,2942, 472,1393, 799,3485, 195,3794, 865,1205,3694, 728,
  1083,3917, 174,3537,3155,1263,1935, 102,2308, 732,1540,2699, 349,1895,3087, 156,
  3567,3173,1470,3991, 772,1256, 482,1885,1206,  22,3886, 828,3074,1128, 574,1699,
  3039,2455,3709,1314,2940,3510,2676, 696,2035,3257,2622,3608, 647,2445,  69,3177,
  2209, 718,3499, 909,3307,2382,3593,2727,2093,1715, 650,2915,2340, 338,2783,2112,
  2961,1406,2259,1011, 599,2625,4093,1612,3586,3244,2064,3698,1277,3461, 776,1189,
  2481, 436,1074,1846,2391,3132,2167,4025,3232,2599,2015,3349, 305,3986,2772,3480,
   269,1022,1767, 678,1945, 364,1214,4001,2885, 939, 242,1961,1534,4034, 986,1376,
  2733,3966,1222,2537,1604, 651,1195, 128,3085,3874,2626,1362,1835,4049,1578, 107,
  3751, 541,2755,3662,1774,2998, 821, 398,2558,1007, 527,2984, 177,2430,2820,1642,
  3904,2039,2991,3498, 229,1619,2734, 281,1496,1017, 537,1565,2473,1898, 908,2084,
  1410,4063,3322,2607,3866,3216,2339, 127,1618,2393,3829,2976, 440,2172,3416,1730,
   289,1904,3249, 227,3718,1881,4095,2328,1476, 407,1068,3581,3162, 578,3384,2524,
   830,3292,1956, 393,1451,2330,3714,2042,1331,3885,1809,2289,1478,4051,1967, 321,
  3259, 903,2710, 592,3857, 966,3634, 715,2315,3814,3457,2916,1275,3661,  86,2418,
  2845, 483,2246,  10,1457, 793,1778,3060,3478,1369, 676,1109,3227,2668, 765,3752,
  3054, 606,2276,1383,2966, 361,3149, 943,3429,2011,2415,  11, 904,2206,1185,1865,
  1533,2411,1221,3939,3409, 181,1162,3105,2743,  23,3484, 795,3189, 581,1027,3504,
  1436, 103,1669,2143,2568,1391,1971,3324,2822,1779, 126,2106, 700,3079,1609,3824,
   789,3129,1635,1093,2914,2132,3767,1032, 488,2786,2192,3622,1431, 125,2003,1280,
  2523,1070,3897,2698, 785,2082,2608,1689, 691,2901,3975,1742,2609,3027,3889, 332,
  3618,3088,  44,2835, 759,2579,1858, 577,3355,1543,2447,1177,2715,3724,2157,2899,
  2492,3744,3146,1207,3366,  47,3056, 464,1241, 823,2542,3591,1104,2611, 551,3370,
  1260,1957,3518,3805, 548,3284, 218,2603,1966,4066, 191,1770,2510,3930,2890, 365,
  3546,2060,  75,1663,3412,1087,3856,  95,3653,1294, 479,3266,1495, 217,2033,2737,
   607,2103, 933,2220,1650,3206,4019, 954,2226, 366,3967,1899, 157,1691, 377,1269,
   693,1903, 458,4070, 749,2377,1694,3765,2160,3955,1466,3193, 279,4028,1833,2232,
   159,2631, 370,2286,2729,1683,1231,3571,1545, 889,2949,3395, 706,1037,1712,3290,
  1538, 832,3104,3648, 448,2478,1428,3221,1933,2701,2264,1124,3711, 812,3415,1065,
  4084,1718,3378,3797,1278, 427,2059,1357,3578,2874, 653,3055,3540,2597,3241,3981,
  2252,3013,1097,2769,2008,3613,1024,2598, 176,2964, 580,1735,2321,1338,3229, 930,
  3748,3026,1009,1418, 780,3914,2416, 613,3168,2281,1258, 331,2086,3111,2304, 611,
  4057,2804,2353,1239,1994,3030, 639,2314, 921, 264,3551, 669,2808,1786,2443,1423,
  2904, 491,2488, 238,2706,3670,3009, 141,2548,1737,1080,2130,1346, 722,1013,1568,
   146,3404,1750, 210,1352,2989, 604,1544,3487,1136,2022,3643, 834,2908, 470,2529,
  1500,1797,3977,3331,1926, 325,2954,2050,  56,3860,2628,3565,1528,3738,  15,2593,
  1166, 236,1817, 677,3953, 202,3514,1726,4020,2985,1636,2052,3943, 437,3191, 123,
  1973,1198,3179,1558,1041, 712,2312,1589, 844,3770,3200, 430,3919,2431,1948,3616,
  2717, 867,3893,2536,3501, 350,3971,2282,3187, 395,2842,2476,  16,3816,1949,3447,
   243, 686,2395,  79,2777,3617,1108,3368,1415, 758,1847, 465,2792, 800,1351,3488,
  2030,3178,3745,2544,1598,2821,1178,2661, 368,1310,3405,  60,2557,1165,2193,3766,
  2658, 815,3906,2038,3515,1844,3313,3908,2819, 254,2361,1535,2779,  38,3045, 557,
  2350,1442,2147, 623,1629,2100,2713, 838,1845,1401,4010,1005,3326,1483,1060,2815,
  2219,3663,2935,1191,1560,2215, 863,1751,3680,2335,3062,1082,2182,3922,1795,2997,
   885,1479, 330, 982,3403,2135, 767,3740,2021,2389, 988,3157,1510,3492, 570,1591,
  3076, 165,2388, 573,2829,  32,1304, 529,1164,1867,3343, 874,3657,1740,3448,1257,
  3757, 256,3286,2867, 980,3237,1228, 168,3721,2386, 681,1698,2164,2714, 593,4088,
  1354, 850,2014,3274, 617,4033,2669, 454,2826, 299,4012,1634,3188, 185,2399, 413,
  3862,2204,3532,2965,1377,  39,3211,1620, 586,2887,3846, 729,1901,2824, 932,3626,
  1268,1799,3265,1379,3809,2577,3139,2099,2541,3572, 567,2203,1194, 385,2122, 843,
  2790,1922,1173,3577,  21,3759,1906,2957,3377, 334,2797,3161, 224,3556,1854, 296,
  3233,1704, 394,3563,2482, 170,3141,1992,1226,3314, 941,2566, 664,3430,1181,2817,
   727,2621,1752, 530,2420,4094,2600,1078,3549, 167,1411,2527, 265,3993,2292, 315,
  2554,4038, 989,2158, 339, 905,1530,4092, 207,2988,1419,2862,3980,2511,3293,1502,
  4047, 525,2587,1757,2263, 663,2553,1522,1036,2104,1283,3685, 918,2496,1266,2996,
  2338,3844,2650, 974,1819,1364, 778,3803,1574,2248, 135,1950,1384,3707,2091,1571,
  3321,  89,1192,3659, 912,1869, 450,2081,3121,1739,2229,3466,3046,1312,1711,3360,
  2094, 683,2847,3700,1725,3393,2316, 684,1741, 923,3784,  92,1690, 711,2983, 178,
  2247,3175, 809,3850,1407,3096,4068, 469,2462,3870,1820, 550,1582,3928,2085, 670,
  1125,  55,1499,3084,3902,2139,3442,2436, 566,3576,2971,3839,2723, 481,3072, 952,
  4015,1927,2880,2223,3285,1481,3786,2813, 781,3974,1120, 616,2018, 836,2739, 498,
  3589,1515, 113,2401, 555,2950,1115,3632,3156,2379,1989,2647,1094,3471,1909,1025,
  3628,1637, 302,2895,1100, 226,1785, 919,3462,  99,3078,2667,3418, 131,3150,2582,
  3693,3334,2254, 657, 359,2763,1089,  25,2695,1163,1695, 397,1045,2351,1808, 213,
  2433,1396,3782, 300, 737,3017, 148,1306,2367, 290,2726,3683,  12,3163,3840,1131,
  3012,1918,3242,1295,3559,2016,  73,2700, 417,1250,3367, 337,3686,2305, 519,2746,
  1321,2539,2047,3441,2326,3636,2659,2138,2843,1438, 803,2317,1143,1911, 866,1471,
   460,1714,2848,1245,3606,1624,3268,1941,4081, 714,3436,2123,3251,3949, 753,3167,
  3568, 575,1057,2686,1708,2490,3426,1924,3624,1584,3199,1825,2489,1460,2239, 219,
  2503, 955,3924, 746,2618,1610,3899,1382,1880,4008, 645,1632,2881,1361,3854,3196,
    66,3959, 978, 501,1602, 752,3247,1267, 540,3612,2017,4023, 444,2809,3863,3387,
  2055, 801,4024,1913,2486, 273, 894,3005,1405,2363,2846,1313, 144,1513,2638,1188,
  2140,2930,3361,2043,4000,1213, 554, 934,2655, 420,1224, 690,4021, 962,3450,1680,
  3673, 431,2196,2970, 291, 983,2234,3300, 852,2444,3051,2116, 907, 245,1702,2178,
   774,1824,2665,3109,3826,1965,  54,3970,1721,3153, 249,1611,3086,1293,2370, 222,
  2662,3136, 106,1019,2958,3894,2241,3460, 447,1856, 295,3756,3015,1920,3667, 461,
  1722, 258,1523, 856,  26,3526,2155,3143,3956,2245,3398,2892,2045, 445,2816, 704,
  1235,2732,1450,1816,3788,3197, 596,2866,3598, 378,1201,3749,3311,2514,2973,1148,
  3604,3339,1455, 192,1172,2479,2951,1059,2190,2617, 906,2441,3716, 644,1728, 958,
  3802,1311,2413,3534, 608,1372,1749, 771,2602,3861,1010,2502, 658, 965,3315,2365,
  4074,2565,3706,3057,2390,2841,1597, 184,1327, 783,1780, 101,3566,1302,2173,3115,
  1943,3997,  34,3508,1158,2465,1754, 137,2044,1599,2708,  30,1818, 707,4072, 345,
  2423, 562,2096,2876,3475,1542, 600,3382, 340,3796,1366,3400,  59,2169,3521,3006,
  1889, 545,1615,3255,1996,2757, 169,3599,1220,2929,1588,3547,2068,2752,  68,1425,
   762,1141,1979, 638,1409,1002,3769,1877,2968,2509,3825, 999,2643,1651,3795, 189,
  2451,3262, 878,2324, 356,2785,1333,3883, 997,3245,3968,2275,1064,3464,1529,1939,
  2803,1254,3983, 424, 896,2280,3849,2742,1625, 709,2926,1896,1127,2872,1430, 301,
  2528,3600,2185, 268,1180,3789,2299,3205,2020,  84,2260, 363,1374,3933,1782,3165,
  2859,3509, 214,3202,3945, 405,2267, 695,3637, 284,1448,3073,2235, 348,3337,1034,
   610,1668,3019,2031,3323, 797,3530,2186,2549, 692,1390, 513,3103,2642, 180,3656,
   935,3277,1638,2552,3687,1862, 237,1111,2013,3294,2323, 466,4077,2491, 738,3903,
  1091,3091, 887,4058,2907, 380, 944,1564, 625,4037,3328,3031, 583,3431,1056,2222,
   516,1826,2681,2181,1623,2574,3362,2748,1113,3246,1998, 561,4078, 810,2909,1498,
  2703,3733, 485,1380,4079,1658, 508,3049, 221,1697,2886,3669,2037,1247,2352,2986,
   633,2261,  36,3075,1326, 662,3176,2493,3938, 100,1262,3602, 931,1788,3309,2046,
  1581,   8,2670,1480,1834,2500,3089,3682,2718,1092,1802, 868,2635,2349, 286,3702,
  1492,3869,1264, 913,3625,  77,1317,2034, 478,1656,2467,3358,1290,1870,2303,3890,
   400,1878, 981,2556, 118,2863,1934,1238,3746,3380,1915, 111, 864,3934, 462,1467,
  3873,1800,3491,1053,2028,2818,3550,1440, 853,2978,1692,2610,3140, 186, 558,2798,
  3689,2279,3417, 699,3621, 471,1339,1964, 216,2428,1473,3768,1929,1249,3053, 854,
  2545, 110,3297, 542,2800,1769, 813,3989,2882,3779, 914, 175,2766,3627,  63,1151,
  2115,3352,2952,3610,2243,1067,3853,2313, 748,2632,1062,2402,3254,1672,3439,2070,
  1129,2728, 441,2446,4064, 187,1733, 502,2148,3458, 390,2073,1469,3851,2355,1289,
   824, 410,1938,1259,3192,2216,3937, 736,2977,3560, 459,2836,  29,3976,1688,3517,
  2001,2980,2343,4052,2061,3080,3456,2306, 231,1344,3486,2156, 652,1593,3092,3512,
  2651, 235,1261, 694,1575,3299, 252,3135,1555, 409,4014,1360,2850, 601,2678, 161,
  3101,3754, 822,1586,3151, 975,2357,3776,2753,1126,4002, 717,2878,1050,1884,3473,
  3007,3926,2538,2889, 247,1029,1723,3342,1218,2077, 820,3272,2175, 701,2740, 425,
  1187, 675,1563,1028, 277,1400, 565,1075,1873,2591,2999,1727,3952,2517, 927,1422,
  3998,1652,2397,3884,1968, 547,2526, 963,3574,2145,3028, 266,1944,3772,1052,2398,
   399,1356,2217,3611, 571,2680,1303,3281, 129,1860,2452,3353,  49,3736,2583, 314,
  1547,1018,1679, 624,3837,2400,2810,  91,2560,3995,1748,1152,3615,1550,3174,2271,
  3800,3269,1931,3523,2472,3807,2704,3204,3640, 750, 419,1105,3201, 260,2242, 552,
  3050, 875,3171,   1,2778,3502,1389,1872,2691, 656,1736,3629, 840,2233,1489,4042,
  3335,1940,2931,  70,1811,3907,2054, 754,1553,3134, 960,1404,2197,1684, 637,3261,
  2228,  83,3538,2080,3291,1435, 679,3678,1546, 391,3123,2645, 194,2499, 937, 276,
  1456,2613, 153,2851, 786,1705,2146,   2,1497,2407,3841,2000,1388,3548,2875,1849,
   342,2072,3639,1134,2290, 796,4036,2969,  82,3834,1139,2508,3133,   0,2828,1776,
   500, 996,2572,3459,1197,3004, 346,3569,2619,3848, 285,3020,3579, 890,2853,1298,
  4013,2683,2993,1217, 182,1886,3098,2121,1077,2375, 640,3842,1387,2005,4046,3481,
  1806, 618,3962,1323,3137, 347,1196,4031,2830, 964,3391, 104,2639, 668,1026,3688,
  1252,2636, 614,1504,3271,1760, 309,1225,2332,3332,1532, 372,3467,1301,3607, 744,
  3066,3731,1527, 641,2311, 917,1677,2224,1208, 628,2341,1959, 406,2396,3777,1985,
   524,1766, 814,3727,2495, 916,4080, 324,3427,2974,1852,1003,3304, 456,2796,1237,
  3068,2325, 970,2065,3695,2356,3489,1921, 579,2258,1587,3043,2184,4041,1516,2468,
  3154,3911,1910,2905, 421,3723,2113,3160, 764,1916,2869, 929,1810,2654,2154,1160,
  2454, 326,2117,3992,2707,3198,3799, 209,3452,2894,1626,4065,1182,3190, 115,1030,
  3519,2419,1472, 382,3369,2879,1320,2588,1643,  46,3668,2265,2921,1654, 768,2133,
    43,3433,2664, 435,1484, 725,2960,1058,3230, 294,3654,1199, 367,1801,3397, 122,
  1661, 938, 200,3454,2464, 998,2751,1461,3605, 484,3996,2412,3743, 642, 272,3932,
  1855,3283,1288, 154,1831, 480,1392,2497,1912, 973,3327, 512,2794,1837,1447,2657,
  3069, 203,3843,2141,1675, 467,2253, 731,3558,2712,1355, 805, 179,3704,2637,3880,
  1110,1614,3798,1861,3347,2716, 147,1670,3865,2624,1876, 643,3264,2771, 849,2269,
  2870,3561,2334,1234,1645, 627,3855, 211,2581,1099,2101, 108,1385,3014,3336,1579,
  2749, 773,2945,3437, 870,3641,2922, 708,3957,  17,1403,2516, 798,3815,3422, 588,
  2088,1243,3182,2761,1020,3921,3102,1914,1116, 497,3961,1988,3374,2354,1416, 509,
  3147, 702,2963, 215, 950,4004,2023,2437,1363, 888,2948,3790,2425,1291,3647, 535,
  1378,1976, 726,4071,2947,3319,1894,2320,3235,1567,2924,3411, 851,1919,2348,1006,
   196,3831,2200,1603,2605,1974,1095,2171,3116,2674,1792,3675,2159, 234,2371,1681,
  4039, 871,1850, 660,3477,1424, 212,3734,2450,3231,1706,3016,1130, 320,1851,3527,
  2414,1960,1309,2238,2547,1227,3130, 620,3396,  51,2136,1046,1648, 197,2048,3973,
    48,3280,2688, 392,2067,  93,1318, 949, 418,3812, 631,1762,2679,4076, 476,3630,
  1426,2518, 422,1170,4059,  96,3302,1556, 474,1133,3392, 357,3059,1308, 956,2920,
   282,3564,2630,   9,2435,2062,2864, 826,1561, 155,2297, 587,2589,4073, 886,2839,
   160,3936,3275, 495,3739,1772, 292,3652,1590,2570,4062, 404,3494,3094,2673, 995,
  2453,1756,1102,3708,1518,2586,3925,3455,2756,2191,1212,3677, 228,1112,2087,2972,
  3273,1771,3531, 667,3034,2327, 386,3725,2383,3871,2069, 872,1667,3947,3310,2546,
  1427,2201,3260,1613,3684, 517,1169,3373,2675,3875, 968,3660,1520,2150,3097,1230,
  1659, 766,2693,1551,3453, 839,2764,2244, 792,3048,1215,1823,2298, 609,1474,3420,
  3836, 564,3170,2270, 811,3029, 534,1606,1936,  19,3041,2394,3228,1655,2571, 755,
    62,1039,2858,2111,1284,3584,1813,1021,2795, 648,1368,2854,2498, 121,1875, 698,
  3722, 416, 910,1265,3000,1793,4056,2179, 432,1962,1367,2747,  41,3301, 520,2009,
  3666,2307,1103,  20,2079,3061,1174,3913,1942, 496,3587,2807, 900,3755,1923, 323,
  2124,1583,2806, 239,3542,1204,2387,3172, 739,4022,1453, 881, 543,3601,1319,3905,
  1879,2410,3753, 232,1640,2663, 751,3131,1947,  76,3580,3252, 560,3646,2278,1114,
  2943,2032,2711,3835, 688,2543, 255,1464,3209, 710,3033,3495,1804, 845,3847,2784,
   312,3345,2923,4017,2513, 528,1503, 119,3440,2448,1413, 317,3210,2494,1153,2937,
  3330,1285, 893,4018,1673,2025, 158,3701,1055,2230,3356,1828,2868,2134, 297,2725,
  3469,1421, 790,3240,3931, 504,3451,1475,4027,2561,1701,2189,1209,1557,3064, 341,
  3935,1678,3399, 124,2237,3529, 897,2812,3820,2342,1122, 318,2507,1286,2250,1488,
   994,1790, 594,1307,1719,3760,3305,2616,1729,1033,3984,2109,1630,  80,3960, 763,
   355,3642,2551,2213, 510,3406,2918,1353,2550, 446,2770, 183,3946, 979,3317, 671,
  2207, 449,2759,1984,1123,2483,2098, 287,1184,2995, 945, 271,3982, 769,3438,2646,
  1370, 569,1040,1980,1494,3144,1159,1888,  72,1596,3590,1997,3929,2925, 193,3507,
  2519,3823,2051,3164, 230, 967,2205, 730,3185, 261,2933, 794,3354,2758,1761,2291,
  2827,1932,  31,3110, 993,2682, 685,1887,3876,1641,3520,1271,2457,1485,3065,1731,
  1186,3987,3127,1514,  27,2896, 892,3791,2295, 549,3712,2409,2888,1764,2049,  37,
  2296,3222,2567,4009,2891, 443,3773,2504,3329, 598,2731, 882, 468,3359,1743, 721,
  3036,  98, 877,2754,3541,1868,2903,1330,3631,2373,1517,3761,1219, 511,3583,1395,
  };

}
