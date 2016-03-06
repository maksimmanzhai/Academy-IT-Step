#include <iostream>
#include <cstring>

using namespace std;

class TwoDShape {
	double width;
	double height;
	char name[20];
public:
	TwoDShape() {
		width = height = 0.0;
		strcpy(name, "unknown");
	}
	TwoDShape(double w, double h, char *n) {
		width = w;
		height = h;
		strcpy(name, n);
	}
	TwoDShape(double x, char *n) {
		width = height = x;
		strcpy(name, n);
	}
	void showDim() {
		cout << "Width and height equal " << width << " and " << height << endl;
	}
	double getWidth() {
		return width;
	}
	double getHeight() {
		return height;
	}
	void setWidth(double w) {
		width = w;
	}
	void setHeight(double h) {
		height = h;
	}
	char *getName() {
		return name;
	}
	virtual double area() = 0;
};

class Triangle :public TwoDShape {
	char style[20];
public:
	Triangle() {
		strcpy(style, "unknown");
	}
	Triangle(char *str, double w, double h) :TwoDShape(w, h, "triangle") {
		strcpy(style, str);
	}
	Triangle(double x) :TwoDShape(x, "triangle") {
		strcpy(style, "isosceles");
	}
	double area() {
		return getWidth()*getHeight() / 2;
	}
	void showStyle() {
		cout << "This triangle is " << style << "." << endl;
	}
};

class Rectangle :public TwoDShape {
public:
	Rectangle(double w, double h) : TwoDShape(w, h, "rectangle") {
	}
	Rectangle(double x) :TwoDShape(x, "rectangle") {
	}
	bool isSquare() {
		if (getWidth() == getHeight()) {
			return true;
		}
		return false;
	}
	double area() {
		return getWidth()*getHeight();
	}
};

int main() {
	TwoDShape *shapes[4];
	shapes[0] = &Triangle("right-angle", 8.0, 12.0);
	shapes[1] = &Rectangle(10);
	shapes[2] = &Rectangle(10, 4);
	shapes[3] = &Triangle(7.0);
	for (int i = 0; i < 4; ++i) {
		cout << "This object " << shapes[i]->getName() << ". ";
		cout << "Square equal " << shapes[i]->area() << "\n";
	}
	return 0;
}