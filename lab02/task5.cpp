#include <iostream>
using namespace std;

int main() {
    setlocale(0, "");
    double r, a, b, z, c;
    cout << "Введите радиус торта (r): ";
    cin >> r;
    cout << "Введите размеры коробки (a и b): ";
    cin >> a >> b;
    cout << "Введите высоту торта (z): ";
    cin >> z;
    cout << "Введите высоту коробки (c): ";
    cin >> c;
    if (z <= c) {
        cout << "Торт уместится в коробку по высоте." << endl;
    }
    else {
        cout << "Торт не уместится в коробку по высоте." << endl;
    }
    double d = 2 * r;
    if (d <= min(a, b)) {
        cout << "Торт уместится в коробку по основанию." << endl;
    }
    else {
        cout << "Торт не уместится в коробку по основанию." << endl;
    }
    return 0;
}