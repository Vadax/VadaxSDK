#ifndef VXDIALOG_H
#define VXDIALOG_H

#include "vxwidget.h"
#include <iostream>
#include <string>

using namespace std;

class VxDialog: public VxWidget {
public:
	VxDialog();
	virtual ~VxDialog() {
		std::cout << "VxDialog destructor called" << std::endl;
	}
};

#endif
