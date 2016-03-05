#include <iostream>
#include <cstring>

using namespace std;

class TwoDShape {
	double width;
	double height;
public:
	TwoDShape() {
		width = height = 0;
	}
	TwoDShape(double w, double h) {
		width = w;
		height = h;
	}
	TwoDShape(double x) {
		width = height = x;
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
};

class Triangle :public TwoDShape {
	char style[20];
public:
	Triangle() {
		strcpy(style, "unknown");
	}
	Triangle(char *str, double w, double h):TwoDShape(w,h) {
		strcpy(style, str);
	}
	Triangle(double x) :TwoDShape(x) {
		strcpy(style, "isosceles");
	}
	double area() {
		return getWidth()*getHeight() / 2;
	}
	void showStyle() {
		cout << "This triangle is " << style << "." << endl;
	}
};

int main() {
	Triangle t1; 
	Triangle t2("right-angled", 8.0, 12.0);
	Triangle t3("isosceles", 4.0, 4.0);
	cout << "Information about triangle t1: " << endl;
	t1.showStyle();
	t1.showDim();
	cout << "Square is equal " << t1.area() << "\n";
	cout << "Information about triangle t2: " << endl;
	t2.showStyle();
	t2.showDim();
	cout << "Square is equal " << t2.area() << endl;
	cout << "Information about triangle t3: " << endl;
	t3.showStyle();
	t3.showDim();
	cout << "Square is equal " << t3.area() << endl;

	return 0;
}