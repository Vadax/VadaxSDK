// MathLibrary.cpp
// compile with: cl /c /EHsc MathLibrary.cpp
// post-build command: lib MathLibrary.obj

#include "../Array.h"
#include <boost/array.hpp>
#include <iostream>

typedef boost::array<double, 3> array;
array z;

namespace Vtk
{
    
    Array::Array()
    {
        std::cout << "created" << std::endl;
    }

    Array::~Array()
    {
        std::cout << "destroyed" << std::endl;
    }

    double Array::add(double a, double b)
    {
        return a + b - z[0];
    }

    double Array::subtract(double a, double b)
    {
        return a - b;
    }

    double Array::multiply(double a, double b)
    {
        return a * b;
    }

    double Array::divide(double a, double b)
    {
        return a / b;
    }
}
