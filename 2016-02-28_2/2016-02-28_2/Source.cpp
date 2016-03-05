#include <iostream>
using namespace std;

class B {
protected:
	int i, j;
public:
	void set(int a, int b) {
		i = a;
		j = b;
	}
	void show() {
		cout << i << " " << j << endl;
	}
};

class D :public B {
	int k;
public:
	void setk() {
		k = i*j;
	}
	void showk() {
		cout << k << endl;
	}
};

int main() {
	D ob;
	ob.set(2, 3);
	ob.show();
	ob.setk();
	ob.showk();
	return 0;
}