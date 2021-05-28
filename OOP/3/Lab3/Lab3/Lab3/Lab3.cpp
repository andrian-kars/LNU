#include <iostream>
#include "Dyhotomia.h"
using namespace std;

int main() {
	double x;
	Dyhotomia* dyh = new Dyhotomia();

	dyh -> setVolumes(1, 2);
	dyh -> setTolerance(1E-6);

	int err = dyh -> count(x);

	!err ? cout << "x: " << x << endl : cout << "Error...";

	delete dyh;
	return 0;
}