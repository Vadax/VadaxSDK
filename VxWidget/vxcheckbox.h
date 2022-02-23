#ifndef VXCHECKBOX_H
#define VXCHECKBOX_H

#include "vxabstractbutton.h"
#include <iostream>
#include <string>

using namespace std;

class VxCheckBox: public VxAbstractButton {
public:
	VxCheckBox();
	virtual ~VxCheckBox() {
		std::cout << "VxCheckBox destructor called" << std::endl;
	}
};

#endif
