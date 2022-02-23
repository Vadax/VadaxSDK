#ifndef VXABSTRACTBUTTON_H
#define VXABSTRACTBUTTON_H

#include "vxwidget.h"
#include <iostream>
#include <string>

using namespace std;

class VxAbstractButton: public VxWidget {
public:
	VxAbstractButton();
	virtual ~VxAbstractButton() {
		std::cout << "VxAbstractButton destructor called" << std::endl;
	}
	bool autoExclusive();
	bool autoRepeat();
	int autoRepeatDelay();
	int autoRepeatInterval();
	// VxButtonGroup* group();
	// VxIcon icon();
	// VxSize iconSize();
	bool isCheckable();
	bool isChecked();
	bool isDown();
	void setAutoExclusive(bool);
	void setAutoRepeat(bool);
	void setAutoRepeatDelay(int);
	void setCheckable(bool);
	void setDown(bool);
	//void setIcon(const VxIcon& icon);
	//void setShortcut(const VxKeySequence& key);
	//void setText(const VxString &text);
	//VxKeySequence shortcut();
	//VxString text(); 
};

#endif
