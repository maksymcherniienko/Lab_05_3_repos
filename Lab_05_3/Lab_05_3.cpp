#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
double s(const double x);
int main()
{
	double tp, tk, z;
	int n;
	
	cout << "gp = "; cin >> tp;
	cout << "gk = "; cin >> tk;
	cout << "n = "; cin >> n;
	
	double dg = (tk - tp) / n;
	double t = tp;
	
	while (t <= tk)
	{
		z = s(2 * t + 1) + 2 * s(t * t) + sqrt(s(1));
		cout << setw(6) << t << setw(14) << z << endl;
		t += dg;
	}
	
	return 0;
}
double s(const double x)
{
	if (abs(x) >= 1 || x == 0)
		return ((pow(cos(x), 2)) + 1) / (exp(x));
	else
	{
		double Sum = 0;
		int k = 0;
		double a = 1;
		double S;
		Sum = a;
		do
		{
			k++;
			double R = (2*x)/(x*k+1);
			a *= R;
			Sum += a;
			S = Sum / sin(2 * x);
	
		} while (k < 4);
		return S;
	}
}