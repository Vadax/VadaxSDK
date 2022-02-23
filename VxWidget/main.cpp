#include <stdio.h>
#include "vxwidget.h"
#include "vxpushbutton.h"
#include "vxabstractbutton.h"
#include "vxcheckbox.h"

int main() {


    std::cout << "In program 1" << std::endl;

    VxWidget* win = new VxWidget();
    win->acceptsDrops();
    win->accessibleDescription();
    win->accessibleName();

    VxPushButton* pushbtn = new VxPushButton();
    pushbtn->testPushButton();

    VxAbstractButton* ab = new VxAbstractButton();
    delete ab;

    VxCheckBox* cb = new VxCheckBox();
    std::cout << cb->acceptsDrops() << std::endl;
    delete cb;

    delete pushbtn;
    delete win;

    return 0;
}