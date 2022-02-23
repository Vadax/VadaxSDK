#include "vxabstractbutton.h"

VxAbstractButton::VxAbstractButton() {
	std::cout << "VxAbstractButton constructor called" << std::endl;
}

//
bool VxAbstractButton::autoExclusive() {
	std::cout << "Not implamented yet." << std::endl;
	return false;
}

//
bool VxAbstractButton::autoRepeat() {
	std::cout << "Not implamented yet." << std::endl;
	return false;
}

// 
int VxAbstractButton::autoRepeatDelay() {
	std::cout << "Not implamented yet." << std::endl;
	return 0;
}

//
int VxAbstractButton::autoRepeatInterval() {
	std::cout << "Not implamented yet." << std::endl;
	return 0;
}

// VxButtonGroup* group();
// VxIcon icon();
// VxSize iconSize();

// 
bool VxAbstractButton::isCheckable() {
	std::cout << "Not implamented yet." << std::endl;
	return false;
}

// 
bool VxAbstractButton::isChecked() {
	std::cout << "Not implamented yet." << std::endl;
	return false;
}

//
bool VxAbstractButton::isDown() {
	std::cout << "Not implamented yet." << std::endl;
	return false;
}

//
void VxAbstractButton::setAutoExclusive(bool) {
	std::cout << "Not implamented yet." << std::endl;
}

//
void VxAbstractButton::setAutoRepeat(bool) {
	std::cout << "Not implamented yet." << std::endl;
}

// 
void VxAbstractButton::setAutoRepeatDelay(int) {
	std::cout << "Not implamented yet." << std::endl;
}

// 
void VxAbstractButton::setCheckable(bool) {
	std::cout << "Not implamented yet." << std::endl;
}

//
void VxAbstractButton::setDown(bool) {
	std::cout << "Not implamented yet." << std::endl;
}

//void setIcon(const VxIcon& icon);
//void setShortcut(const VxKeySequence& key);
//void setText(const VxString &text);
//VxKeySequence shortcut();
//VxString text(); 