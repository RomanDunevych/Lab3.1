#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

int main()
{
	double x;
	double y;
	double a;
	double b;

	cout << "x ="; cin >> x;
	a = tan(x) + 1;

	// 1 - спосіб розгалуження в скороченій формі
	if (x <= -5) {
		b = pow(exp(1), x / (1 - x));
	}
	if (x < -5 && x >= 3) {
		b = 3.2 + log(1.8 * pow(x, 2));
	}
	if (x > 3) {
		b = abs(sqrt(x));
	}
	y = a + b;
	cout << endl;
	cout << "1) y = " << y << endl;

	// 2 - спосіб розгалуження у повній формі
	if (x <= -5) {
		b = pow(exp(1), x / (1 - x));
	}
	else if (x > 3) {
		b = abs(sqrt(x));
	}
	else {
		b = 3.2 + log(1.8 * pow(x, 2));
	}
	y = a + b;
	cout << endl;
	cout << "2) y = " << y << endl;

	return 0;
}