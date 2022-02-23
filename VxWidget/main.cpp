#include <stdio.h>
#include "vxwidget.h"
#include "vxpushbutton.h"

int main() {


    std::cout << "In program 1" << std::endl;

    VxWidget* win = new VxWidget();
    win->acceptsDrops();
    win->accessibleDescription();
    win->accessibleName();

    VxPushButton* pushbtn = new VxPushButton();
    pushbtn->testPushButton();

    delete pushbtn;
    delete win;

    return 0;
}