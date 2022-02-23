#ifndef VXCOMBOBOX_H
#define VXCOMBOBOX_H

#include "vxwidget.h"
#include <iostream>
#include <string>

using namespace std;

class VxComboBox: public VxWidget {
public:
	VxComboBox();
	virtual ~VxComboBox() {
		std::cout << "VxComboBox destructor called" << std::endl;
	}
};

#endif
