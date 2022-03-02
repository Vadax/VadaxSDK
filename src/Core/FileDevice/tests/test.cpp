#include <iostream>
#include "../FileDevice.h"

int main()
{
    Vtk::FileDevice* filedev = new Vtk::FileDevice();
    delete filedev;
    
    return 0;
}
