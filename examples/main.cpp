#include <iostream>
#include <list>

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

// Window type enum
enum WindowType { Widget, Dialog, Notification, Panel };

// Window class
class Window: public Object, public Surface {
public:
	Window() {
		cout << "Window constructor called" << endl;
	}

	virtual ~Window() {
		cout << "Window destructor called" << endl;
	}

	void testWindow() {
		cout << "In window" << endl;
	}
};



// Program main
int main()
{
	Window* win = new Window();
	Object* object = win;

	object->testObject();
	delete object;

	string arr[5] = { "Steve", "Bob"};
	Array<string> a(arr, 5);
	a.print();

	win->testObject();
	win->testSurface();
	win->testWindow();

	getchar();
	return 0;
}