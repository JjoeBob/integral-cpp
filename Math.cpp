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
    const double EPSILON = 1e-6;

    x = mod(x, TWO_PI);
    double term = x;
    double result = x;
    double xSquared = x * x;

    for (int n = 1; abs(term) > EPSILON; n++)
    {
        term *= -xSquared / (n * 2 * (n * 2 + 1));
        result += term;
        std::cout << term << '\t' << result << std::endl;
    }

    return result;
}

double Math::cos(double x)
{
    const double PI = 3.14159265358979323846;
    const double TWO_PI = PI * 2.0;
    const double EPSILON = 1e-10;

    x = mod(x, TWO_PI);
    double term = 1;
    double result = 1;
    double xSquared = x * x;

    for (int n = 1; abs(term) > EPSILON; n++)
    {
        term *= -xSquared / (n * 2 * (n * 2 - 1));
        result += term;
        std::cout << term << '\t' << result << std::endl;
    }

    return result;
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
