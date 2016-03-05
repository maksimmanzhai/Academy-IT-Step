#include <iostream>
using namespace  std;

class B {
public:
	B() {
		cout << "Building of base part object.\n";
	}
	~B() {
		cout << "Destroying of base part object.\n";
	}
};

class D : public B {
public:
	D() {
		cout << "Building of derive part object.\n";
	}
	~D() {
		cout << "Destroying of derive part object.\n";
	}
};

int main() {
	D ob;
	return 0;
}