#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	double x, y;
	cout << "Координата x:"; cin >> x;
	cout << "Координата y:"; cin >> y;
	if ((x >= -2 && x <= 2) && (y >= -2 && y <= 2)) {
		cout << "10 очков";
	}
	if (((x >= -4 && x < -2)&& (y >= -4 && x < -2))||  ((x > 2 && x <= 4)  || (y > 2 && y <= 4))) {
		cout << "5 очков";
	}
	if (((x < -4) && (y < -4)) || ((x > 4) && (y > 4))) {
		cout << "0 очков";
	}
	return 0;
}
