#include <iostream> 
using namespace std;
int main() {
	setlocale(0, "");
	int x;
	cout << "Введите число:"; cin >> x;
	if (x > 0) {
		cout << "Положительное"<<endl;
	}
	if (x<0) {
		cout << "Отрицательное" << endl;
	}
	if (x == 0) {
		cout << "Нуль" << endl;
	}
	if (x % 2 == 0) {
		cout << "Чётное" << endl;
	}
	else {
		cout << "Нечётно";
	}
	return 0;
}