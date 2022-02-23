#include "vxwidget.h"

VxWidget::VxWidget() {
	std::cout << "VxWidget constructor called" << std::endl;
}

bool VxWidget::acceptsDrops()
{
	std::cout << "acceptsDrops" << std::endl;
	return true;
}

string VxWidget::accessibleDescription()
{
	string s = "this is a string";
	std::cout << "accessibleDescription" << std::endl;
	return s;
}

string VxWidget::accessibleName()
{
	string s = "this is a string";
	std::cout << "accessibleName" << std::endl;
	return s;
}

void VxWidget::activeWindow()
{
	std::cout << "activeWindow" << std::endl;
}
