#include <iostream>
#include <cstring>

using namespace std;

class TwoDShape {
	double width;
	double height;
public:
	TwoDShape() {
		width = height = 0.0;
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

class ColorTriangle :public Triangle {
	char color[20];
public:
	ColorTriangle(char *clr, char*style, double w, double h) :Triangle(style, w, h) {
		strcpy(color, clr);
	}
	void showColor() {
		cout << "Color " << color << "\n";
	}
};

int main() {
	ColorTriangle t1("blue", "right-angle", 8.0, 12.0);
	ColorTriangle t2("red", "isolesses", 2.0, 2.0);
	cout << "Information about triangle t1:\n";
	t1.showStyle();
	t1.showDim();
	t1.showColor();
	cout << "Square equal " << t1.area() << "\n";
	cout << "\n";

	cout << "Information about triangle t2:\n";
	t2.showStyle();
	t2.showDim();
	t2.showColor();
	cout << "Square equal " << t2.area() << "\n";
	cout << "\n";
	return 0;
}