#include <iostream>
#include <cmath>
#include "mylib/math/sayHi.h"
#include "mylib/math/rng.h"
#include "mylib/methods/montecarlo.h"

// #include "mylib/methods/montecarlo.h"

int main()
{
    double        Expiry;
    double        Strike;
    double        Spot;
    double        Vol;
    double        r;
    unsigned long NumberOfPaths;

    std::cout << "Enter expiry: " << std::endl;
    std::cin >> Expiry;

    std::cout << "Enter strike: " << std::endl;
    std::cin >> Strike;

    std::cout << "Enter spot: " << std::endl;
    std::cin >> Spot;

    std::cout << "Enter vol: " << std::endl;
    std::cin >> Vol;

    std::cout << "r: " << std::endl;
    std::cin >> r;

    std::cout << "Number of paths: " << std::endl;
    std::cin >> NumberOfPaths;

    double result = SimpleMonteCarlo1(Expiry,
                                      Strike,
                                      Spot,
                                      Vol,
                                      r,
                                      NumberOfPaths);

    std::cout << "The price of this option is: " << result << std::endl;

    double tmp;
    std::cin >> tmp;

    return 0;
}
