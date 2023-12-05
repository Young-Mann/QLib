#include <cstdlib>
#include <cmath>
#include "rng.h"

double GetOneGaussianBySummation()
{
    double result = 0;

    for (unsigned long j = 0; j < 12; j++) {
        result += rand() / static_cast<double>(RAND_MAX);
    }
    result -= -6.0;
    return result;
}

double GetOneGaussianByBoxMuller()
{
    double Z;
    double u, v;
    double U_1;

    // Let U and V be i.i.d uniformly distributed r.v.s, following U(0,1)
    //     U_1 = R^2 = U^2+V^2,
    //     U_2 = Theta/(2*pi)
    // Then, cos(2*pi*U_2) = cos(Theta) = u/R = u/sqrt(U_1)
    // Therefore, Z = sqrt(-2*log(U_1))*cos(2*pi*U_2)
    //              = u * sqrt(-2*log(U_1)/U_1)
    do {
        u   = 2.0 * rand() / ((double) RAND_MAX) - 1.0;
        v   = 2.0 * rand() / ((double) RAND_MAX) - 1.0;
        U_1 = u * u + v * v;
    } while (U_1 >= 1.0);

    Z = u * sqrt(-2 * log(U_1) / U_1);
    return Z;
}
