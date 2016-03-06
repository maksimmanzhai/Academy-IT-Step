#include <iostream>
using namespace std;

class ThreeD {
public:
	int x, y, z;
	ThreeD(int a, int b, int c) {
		x = a;
		y = b;
		z = c;
	}
	friend ostream &operator<<(ostream &stream, ThreeD obj);
};

ostream &operator<<(ostream &stream, ThreeD obj) {
	stream << obj.x << " ";
	stream << obj.y << " ";
	stream << obj.z << "\n";
	return stream;
}

int main() {
	ThreeD a(1, 2, 3), b(3, 4, 5), c(5, 6, 7);
	cout << a << b << c;
	return 0;
}