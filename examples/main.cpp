#include <iostream>
#include <list>
#include <vector>

using namespace std;

// Array
template <typename T>
class Array {
private:
	T* ptr;
	int size;
public:
	Array(T arr[], int s);
	void print();
};

template <typename T>
Array<T>::Array(T arr[], int s) {
	ptr = new T[s];
	size = s;
	for (int i = 0; i < size; i++)
		ptr[i] = arr[i];
}

template <typename T>
void Array<T>::print() {
	for (int i = 0; i < size; i++)
		cout << "" << *(ptr + i);
	cout << endl;
}


// Object class
class Object {
public:
	Object() {
		cout << "Object constructor called" << endl;
	}
	virtual ~Object() {
		cout << "Object destructor called" << endl;
	}

	void testObject() {
		cout << "In object" << endl;
	}
};

// Surface class
class Surface {
public:
	Surface() {
		cout << "Surface constructor called" << endl;
	}
	virtual ~Surface() {
		cout << "Surface destructor called" << endl;
	}

	void testSurface() {
		cout << "In surface" << endl;
	}
};

// Widget type enum
enum WidgetType {ZxWidget, ZxDialog, ZxNotification, ZxPanel } WidgetFlags;

// Widget class
class Widget : public Object, public Surface {
public:
	Widget(Widget *parent = nullptr, WidgetType f = WidgetFlags) {
		cout << "Widget constructor called" << endl;
		m_Children.push_back(parent);
	}

	virtual ~Widget() {
		cout << "Widget destructor called" << endl;
	}

	void testWidget() {
		cout << m_Children.size() << endl;
	}

	vector<Widget*> m_Children;
};



// Program main
int main()
{
	Widget* win = new Widget();
	Object* object = win;

	object->testObject();
	delete object;

	string arr[5] = { "Steve", "Bob" };
	Array<string> a(arr, 5);
	a.print();

	win->testObject();
	win->testSurface();
	win->testWidget();


	Widget* btn = new Widget(win);
	Widget* btn2 = new Widget(win);
	btn->testWidget();
	win->testWidget();

	getchar();
	return 0;
}
