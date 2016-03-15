//exeception

#include <iostream>

using namespace std;

int main() {
	cout << "Start\n";
	try {
		cout << "In try-block\n";
		throw 99;
		cout << "This is instruction will not execute.";
	}
	catch (int i) {
		cout << "Interception of exeception. This value equal: ";
		cout << i << "\n";
	}
	cout << "END";
	return 0;
}