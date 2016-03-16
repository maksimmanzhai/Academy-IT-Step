//exeception

#include <iostream>

using namespace std;

void Xtest(int test) {
	cout << "In function Xtes(), value tes is equal: " << test << "\n";
	if (test)
		throw test;
}

int main() {
	cout << "Start\n";
	try {
		cout << "In try-block\n";
		Xtest(0);
		Xtest(1);
		Xtest(2);
	}
	catch (int i) {
		cout << "Interception of exeception. This value equal: ";
		cout << i << "\n";
	}
	cout << "END";
	return 0;
}