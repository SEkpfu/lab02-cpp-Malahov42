#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double x;
	cout << "x="; cin >> x;
	if (x > -10 && x <= 0) {
		cout << "p=" << sqrt(abs(10 - x * x)) << endl;
	}
	if (x > 0) {
		cout<<"p="<<cos(M_PI * (x + 1))<<endl;
	}
	if (x <= -10) {
		cout<<"p="<< 12.0 * 5.0 / 7.0
	}
	return 0;
}