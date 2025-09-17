/* a)
#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	double x;
	cout << "Введите действительное число:"; 
	cin >> x;
	if (x > -2 ) {
		if (x <= -10) {
			cout << "f(x)=" << x * x + 4 * x + 5 << endl;
		}
		else {
			cout << "f(x) = 0"<< endl;
		}

	}
	else {
		cout << "f(x)=" << 1 / (x * x + 4 * x - 5)<<endl;
	}
	return 0;

}
*/

/* b)
#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;
int main() {
	setlocale(0, "");
	double x;
	cout << "Введите действительное число:";
	cin >> x;
	double f = 1 / (x * x + 4 * x - 5);
	if (x <= -2) {
		cout << "f(x)=" << 0;
	}
	else {
		if (x > 0) {
			if (isnap(f) || isin(f)) {
				cout << "Не числовой результат";
			}
			else
			{
				cout << "f(x)=" << 1 / (x * x + 4 * x - 5);
			}
		}
		else
		{
			cout << "f(x)=" << x * x + 4 * x + 5;
		}
	}
}
*/