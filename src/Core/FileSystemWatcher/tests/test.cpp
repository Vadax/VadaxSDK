#include <iostream>
#include "../FileSystemWatcher.h"

int main()
{
    Vtk::FileSystemWatcher* filewatch = new Vtk::FileSystemWatcher();
    delete filewatch;
    
    return 0;
}
