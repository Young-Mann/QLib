#ifndef __MYLIB_MONTECARLO__
#define __MYLIB_MONTECARLO__

#include "mylib\math\rng.h"

double SimpleMonteCarlo1(double        Expiry,
                         double        Strike,
                         double        Spot,
                         double        Vol,
                         double        r,
                         unsigned long NumberOfPaths);

#endif