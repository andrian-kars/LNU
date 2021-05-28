#include "Dyhotomia.h"
#include <cmath>

double Dyhotomia::f(double x) {
	return 0.1 * x * x - 5 * x * log(x) - 1;
}

void Dyhotomia::setVolumes(double vol_a, double vol_b) {
	a = vol_a;
	b = vol_b;
}

void Dyhotomia::setTolerance(double vol_eps) {
	eps = vol_eps;
}

int Dyhotomia::count(double &x) {
	if (abs(f(a)) < eps) {
		x = a;
		return 0;
	}
	if (abs(f(b)) < eps) {
		x = b;
		return 0;
	}

	if (f(a) * f(x) > 0 || f(b) * f(x) > 0) {
		return 1;
	}

	double c = 0;
	while ((b - a) / 2 > eps) {
		c = (a + b) / 2;
		if ((f(a) * f(c)) > 0) a = c;
		else b = c;
	}

	x = c;
	return 0;
}