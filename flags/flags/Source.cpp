#include <iostream>
#include <fstream>
using namespace std;

int main() {
	char ch;
	int i;
	float f;
	char str[80];
	ifstream in("test");
	if (!in) {
		cout << "Don't open file.\n";
		return 1;
	}
	in >> i;
	in >> f;
	in >> ch;
	in >> str;
	cout << i << " " << f << " " << ch << "\n";
	cout << str;
	in.close();
	

	/*ofstream out("test");

	if (!out) {
		cout << "Don't open file.\n";
		return 1;
	}
	out << 10 << " " << 123.23 << "\n";
	out << "This is short text file.";
	out.close();*/



	return 0;
}