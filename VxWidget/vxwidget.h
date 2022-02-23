#ifndef VXWIDGET_H
#define VXWIDGET_H

#include <iostream>
#include <string>

using namespace std;

class VxWidget {
public:
	VxWidget();
	virtual ~VxWidget() {
		std::cout << "VxWidget destructor called" << std::endl;
	}
	bool acceptsDrops();
	string accessibleDescription();
	string accessibleName();
	// List<Action *> actions()
	void activeWindow();
};

#endif
