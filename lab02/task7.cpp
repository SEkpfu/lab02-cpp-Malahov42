#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	double a, b;
	char z;
	cout << "Введите первое число:";
	cin >> a;
	cout << "Введите второе число:";
	cin >> b;
	cout << "Введите арифметическую операцию";
	cin >> z;
	switch (z) {
	case '+': cout << "Результат:" << a + b << endl; break;
	case '-': cout << "Результат:" << a - b << endl; break;
	case '*': cout << "Результат:" << a * b << endl; break;
	default: cout << "Ошибка";
	}
}