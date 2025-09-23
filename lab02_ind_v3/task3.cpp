#include <iostream>
using namespace std;
int main() {
	double x, y;
	cout << "Enter coordinates" << endl;
	cin >> x >> y;
	bool p1 = ((x * x + y * y <= 16) && (y >= 0) && (x <= 0));
	bool p2 = ((y <= -2 * x + 4) && (y >= 0) && (x >= 0));
	bool p3 = ((y >= -x - 4) && (y <= 0) && (x <= 0));
	bool p4 = (x <= 2 && x >= 0 && y >= -4 && y <= 0);
	if (p1 || p2 || p3 || p4) {
		cout << "The point was hit";
	}
	else {
		cout << "The pont missed";
	}
	return 0;
}