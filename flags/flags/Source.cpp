#include <iostream>
using namespace std;

int main() {
	ios::fmtflags f;

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
		cout << "Flag showpos is fall for stream cout.\n";
	return 0;
}