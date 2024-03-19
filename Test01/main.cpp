#include <iostream>
#include <string>

using namespace std;

class Plane {
public:
	string name;
	double price;
	int passenger;

	string get_info() {
		string s = "";
		s += "Plane name: " + name;
		s += "; price = " + to_string(price);
		s += "; number os passangers = " + to_string(passenger);

		return s;
	}
};

string get_best_plane(Plane pl1, Plane pl2) {
	double pr1 = pl1.price / pl1.passenger;
	double pr2 = pl2.price / pl2.passenger;
	return pr1 < pr2 ? pl1.name : pl2.name;
}

int main() {
	Plane plane1;
	Plane plane2;

	plane1.name = "Airbus";
	plane1.passenger = 300;
	plane1.price = 20000000;

	plane2.name = "Boeing";
	plane2.passenger = 280;
	plane2.price = 21000000;

	cout << plane1.get_info() << endl;
	cout << plane2.get_info() << endl;

	cout << "Best plane: " << get_best_plane(plane1, plane2);

	return 0;
}