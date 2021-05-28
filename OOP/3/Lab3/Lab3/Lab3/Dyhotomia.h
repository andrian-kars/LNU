#pragma once
class Dyhotomia {
	private:
		double a;
		double b;
		double eps;
		double f(double x);
	public:
		void setVolumes(double vol_a, double vol_b);
		void setTolerance(double vol_eps);
		int count(double &x);
};