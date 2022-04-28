#include <iostream>
using namespace std;

void main()
{

	const double pi = 3.14;
	setlocale(LC_ALL, "ru");
	double a, b, z, t;
	cout << "введите a: ";
	cin >> a;
	cout << "введите b: ";
	cin >> b;
	if (a < b) {
		z = sqrt(abs(pow(a, 2) - pow(b, 2)));
	}
	else {
		z = 1 - 2 * cos(a) * sin(b);
	}

	if (z < b) {
		t = pow((z + a * a * b), (1 / 3));
	}
	else if (z == b and z > 0) {
		t = 1 - log(z) + cos(a * a * b);

	}
	else {
		for (int n = -10000; n < 10000; n++) {
			if (pi * 0.5 + pi * n == z * a)
				cout << "error";
			else {
				t = 1 / (cos(z * a));
			}
		}
	}
	cout << a << endl << b << endl << z << endl << t;

}