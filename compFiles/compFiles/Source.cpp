#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char *argv[]) {
	register int i;
	int numread;
	unsigned char buf1[1024], buf2[1024];
	if (argc != 3) {
		cout << "Using: compfiles <file1> <file2>\n";
		return 1;
	}
	ifstream f1(argv[1], ios::in | ios::binary);
	if (!f1) {
		cout << "Do not open first file.\n";
		return 1;
	}
	ifstream f2(argv[1], ios::in | ios::binary);
	if (!f2) {
		cout << "Do not open second file.\n";
		return 1;
	}
	cout << "Comparison of files...\n";
	do {
		f1.read((char *)buf1, sizeof buf1);
		f2.read((char *)buf2, sizeof buf2);
		if (f1.gcount() != f2.gcount()) {
			cout << "Files are different size.\n";
			f1.close();
			f2.close();
			return 0;
		}
		for (i = 0; i < f1.gcount();++i)
			if (buf1[i] != buf2[i]) {
				cout << "Files are different.\n";
				f1.close();
				f2.close();
				return 0;
			}
	} while (!f1.eof() && !f2.eof());
	cout << "Files is identical.\n";
	f1.close();
	f2.close();
	return 0;
}