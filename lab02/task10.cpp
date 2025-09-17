#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	double x, y, z;
	cout << "Первая сторона:"; cin >> x;
	cout << "Вторая сторона:"; cin >> y;
	cout << "Третья сторона:"; cin >> z;
	if (x + y > z && y + z > x && x + z > y) {
		cout << "Треугольник существует"<<endl;
		if (x == y == z) {
			cout << "Треугольник равносторонний"<<endl;

		}
		if (x == z || z == y || x == y) {
			cout << "Треугольник равнобедренный"<<endl;
		}
		if (x * x + y * y == z * z || y * y + z * z == x * x || x * x + z * z == y * y) {
			cout << "Треугольник прямоугольный" << endl;
		}
	}
	else {
		cout << "Треугольник не существует";
	return 0;
}