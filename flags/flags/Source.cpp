#include <iostream>
#include <iomanip>
using namespace std;

istream &promt(istream &stream) {
	cin >> hex;
	cout << "Enter your number in HEX-format: ";
	return stream;
}

int main() {
	int i;
	cin >> promt >> i;
	cout << i;
	
	
	/*cout << setprecision(2) << 1000.243 << endl;
	cout << setw(20) << "Hi, all!" << endl;
	cout << setw(20) << setiosflags(ios::showpos) << setiosflags(ios::scientific) << 123 << " " << 123.23 << endl;
	char s[80];*/

	/*ios::fmtflags f;

	f = cout.flags();

	if (f & ios::showpos)
		cout << "Flag showpos is set for stream cout.\n";
	else
		cout << "Flag showpos is fall for stream cout.\n";

	cout << "\nSetting flag showpos for stream cout.\n";
	cout.setf(ios::showpos);

	f = cout.flags();

	if (f & ios::showpos)
		cout << "Flag showpos is set for stream cout.\n";
	else
		cout << "Flag showpos is fall for stream cout.\n";

	cout << "\nFall flag showpos for stream cout.\n";
	cout.unsetf(ios::showpos);

	f = cout.flags();

	if (f & ios::showpos)
		cout << "Flag showpos is set for stream cout.\n";
	else
		cout << "Flag showpos is fall for stream cout.\n";*/
	return 0;
}