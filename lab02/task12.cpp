#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	int a, b, c;
	int k = 0;
	cout << "Введите первое число:"; cin >> a;
	cout << "Введите второе число:"; cin >> b;
	cout << "Введите третье число:"; cin >> c;
	if (a + b > 10) {
		cout << "Сумма чисел больше 10:" << a + b<<endl;
	}
	if (a + c > 10) {
		cout << "Сумма чисел больше 10:" << a + c<<endl;
	}
	if (b + c > 10) {
		cout << "Сумма чисел больше 10:" << b + c<<endl;
	}

	if (a % 2 == 0){
		k++;
	}
	if (b % 2 == 0){
		k++;
	}
	if (c % 2 == 0) {
		k++;
	}
	cout << "Количество четных чисел: " << k << endl;

	int maxN= max(max(a, b), c);
	int minN= min(min(a, b), c);
	int sr = (a + b + c) - maxN - minN;
	cout << "Среднее число:" << sr << endl;
	if (minN == a) {
		cout << "Номер наименьшего: 1";
	}
	if (minN == b) {
		cout << "Номер наименьшего: 2";
	}
	if (minN == c) {
		cout << "Номер наименьшего: 3";
	}
}