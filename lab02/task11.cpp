#include <iostream>
using namespace std;

int main() {
    setlocale(0, "");
    int bD, bM, bY;
    cout << "Введите день вашего рождения: ";
    cin >> bD;
    cout << "Введите номер месяца вашего рождения: ";
    cin >> bM;
    cout << "Введите год вашего рождения: ";
    cin >> bY;

    int cD, cM, cY;
    cout << "Введите текущий день: ";
    cin >> cD;
    cout << "Введите текущий номер месяца: ";
    cin >> cM;
    cout << "Введите текущий год: ";
    cin >> cY;
    int age = cY - bY;
    if ((bM > cM) || (cM == bM && cD > bD)) {
        age = age - 1;
    }
    string y;
    if (age % 10 == 1 && age % 100 != 11) {
        y = "год";
    }
    else if (age % 10 >= 2 && age % 10 <= 4 && (age % 100 < 10 || age % 100 >= 20)) {
        y = "года";
    }
    else {
        y = "лет";
    }
    cout << "Вам " << age << " " << y << endl;
    return 0;
}