//
// Created by Cowabunga on 15.10.2026.
//

#include "Math.h"

#include <complex>
#include <iostream>

long long Math::factorial(long long x)
{
    long long result = 1;

    for (x; x > 1; x--)
    {
        result *= x;
    }

    return result;
}

double Math::power(double x, int pow)
{
    double result = 1;

    for (int i = 0; i < pow; i++)
    {
        result *= x;
    }

    return result;
}

double Math::sin(double x)
{
    const double PI = 3.14159265358979323846;
    const double TWO_PI = PI * 2.0;
    const int ACCURACY = 17;

    x = mod(x, TWO_PI);
    double result = 0;
    double term;

    for (int n = 0; n < ACCURACY; n++)
    {
        term = (power(-1, n) * power(x, 2 * n + 1)) / factorial(2 * n + 1);
        std::cout << term << std::endl;
        result += term;
    }

    return result;
}

double Math::cos(double x)
{
}

double Math::mod(double x, double y)
{
    return x - static_cast<int>(x / y) * y;
}

double Math::abs(double x)
{
    return (x > 0) ? x : -x;
}

double Math::max(double x, double y)
{
    return (x > y) ? x : y;
}

double Math::min(double x, double y)
{
    return (x < y) ? x : y;
}
