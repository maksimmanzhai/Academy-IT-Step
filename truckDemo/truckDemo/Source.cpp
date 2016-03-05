#include <iostream>
using namespace std;

class Vehicle {
	int passengers;
	int fuelcap;
	int mpg;
public:
	Vehicle(int p, int f, int m) {
		passengers = p;
		fuelcap = f;
		mpg = m;
	}
	int range() {
		return mpg*fuelcap;
	}
	int get_passengeres() {
		return passengers;
	}
	int get_fuelcap() {
		return fuelcap;
	}
	int get_mpg(){
		return mpg;
	}
};
class Truck :public Vehicle {
	int cargocap;
public:
	Truck(int p, int f, int m, int c) :Vehicle(p, f, m) {
		cargocap = c;
	}
	int get_cargocap() {
		return cargocap;
	}
};

int main() {
	Truck semi(2, 200, 7, 44000);
	Truck pickup(3, 28, 15, 2000);
	int dist = 252;
	cout << "Semi will transfer " << semi.get_cargocap() << " funts of cargo.\n";
	cout << "After charging it will drive maximum " << semi.range() << " kilometrs.\n";
	cout << "Because will " << dist << " kilometrs, semi will have " << dist / semi.get_mpg() << " litres of fuel.\n\n";

	cout << "Pickup will transfer " << pickup.get_cargocap() << " funts of cargo.\n";
	cout << "After charging it will drive maximum " << pickup.range() << " kilometrs.\n";
	cout << "Because will " << dist << " kilometrs, pickup will have " << dist / pickup.get_mpg() << " litres of fuel.\n\n";
	return 0;
}