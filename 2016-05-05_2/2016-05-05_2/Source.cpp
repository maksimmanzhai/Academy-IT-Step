#include <iostream>
using namespace  std;

class B {
public:
	virtual void who() {
		cout << "Base class.\n";
	}
};

class D1 : public B {
public:
	void who() {
		cout << "First derived class.\n";
	}
};

class D2 :public B {
public:
	/*void who() {
		cout << "Second derived class.\n";
	}*/
};

int main() {
	B base_obj;
	B *p;
	D1 D1_obj;
	D2 D2_obj;
	p = &base_obj;
	p->who();
	p = &D1_obj;
	p->who();
	p = &D2_obj;
	p->who();
	return 0;
}