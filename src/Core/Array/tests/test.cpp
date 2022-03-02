#include <iostream>
#include "../Array.h"

int main()
{
    double a = 7.4;
    int b = 99;

    Vtk::Array* arr = new Vtk::Array();

    std::cout << "a + b = " <<
        arr->add(a, b) << std::endl;
    std::cout << "a - b = " <<
        arr->subtract(a, b) << std::endl;
    std::cout << "a * b = " <<
        arr->multiply(a, b) << std::endl;
    std::cout << "a / b = " <<
        arr->divide(a, b) << std::endl;

    delete arr;
    
    return 0;
}
