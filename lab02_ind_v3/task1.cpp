#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	int m;
	cout << "Введите номер месяца:";
	cin >> m;
	switch (m) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			cout << "В месяце 31 день"<<endl; break;
		case 4:
		case 6:
		case 9:
		case 11:
			cout << "В месяце 30 день" << endl; break;
		case 2:
			cout << "В месяце 28 дней" << endl; break;
		default:
			cout << "Такого месяца нет :(";
	}
	return 0;

}