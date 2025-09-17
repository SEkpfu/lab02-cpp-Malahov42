/* a)
#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	double x, y;
	cout << "Координата x:"; cin >> x;
	cout << "Координата y:"; cin >> y;
	if ((x >= -2 && x <= 0) && (y >= 0 && y <= 1)) {
		cout << "Точка принадлежит";
	}
	else {
		cout << "Не принадлежит";
	}
	return 0;
}
*/

/* b)
#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	double x, y;
	cout << "Координата x:"; cin >> x;
	cout << "Координата y:"; cin >> y;
	if ((x*x+y*y<=25) && (y>=0)){
		cout<<"Точка принадлежит";
	}
	else {
		cout << "Не принадлежит";
	}
	return 0;
}
*/

/* c)
#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	double x, y;
	cout << "Координата x:"; cin >> x;
	cout << "Координата y:"; cin >> y;
	bool p1 = (x * x + y * y <= 36);
	bool p2 = (x * x + y * y > 9);
	bool p3 = (x >= 0);
	if (p1 && p2 && p3){
		cout << "Точка принадлежит";
	}
	else {
		cout << "Не принадлежит";
	}
	return 0;
}
*/

#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	double x, y;
	cout << "Координата x:"; cin >> x;
	cout << "Координата y:"; cin >> y;
	if ((y<=-2*x+2) && (x>=0 && x<=1)&&(y>=0 && y<=2){
		cout << "Точка принадлежит";
	}
	else {
		cout << "Не принадлежит";
	}
	return 0;
}