#ifndef VXPUSHBUTTON_H
#define VXPUSHBUTTON_H

#include <iostream>
#include "vxwidget.h"

class VxPushButton: public VxWidget {
public:
	VxPushButton();
	virtual ~VxPushButton() {
		std::cout << "VxPushButton destructor called" << std::endl;
	}

	void testPushButton();
};


#endif