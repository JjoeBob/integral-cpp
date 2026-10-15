#include <iostream>
#include <ostream>
#include "Math.h"

double f(double x)
{
    return x;
}

int main()
{
    double a = -10;
    double b = 10;
    const int recCount = 100000;

    double distance = Math::max(a, b) - Math::min(a, b);
    double width = distance / recCount;
    double length, square, result = 0;

    double firstCoordinate = Math::min(a, b);
    double curX = (firstCoordinate + width) / 2.0;

    for (int i = 0; i < recCount; i++)
    {
        length = f(curX);
        square = length * width;
        result += square;
        curX += width;
    }

    std::cout << Math::sin(3.1415 / 6) / Math::cos(3.1415 / 6) << std::endl;
}
