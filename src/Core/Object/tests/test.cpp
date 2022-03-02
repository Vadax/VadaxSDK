#include <iostream>
#include "../Object.h"

int main()
{
    Vtk::Object* test = new Vtk::Object();
    delete test;
    
    return 0;
}
