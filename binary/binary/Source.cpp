//using function get()

#include <iostream>
#include <fstream>

using namespace std;

int main() {
	char str[80];
	cout << "Enter name: ";
	cin.get(str, 79);
	cout << str << '\n';
	return 0;
}