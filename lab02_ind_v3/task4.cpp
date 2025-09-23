#include <iostream>
using namespace std;
int main() {
    int s;
    cout << "Введите количество кораблей: ";
    cin >> s;
    string ending;
    if (s % 10 == 1 && s % 100 != 11) {
        ending = "ь";
    }
    else if ((s % 10 >= 2 && s % 10 <= 4) && (s % 100 < 12 || s % 100 > 14)) {
        ending = "я";
    }
    else {
        ending = "ей";
    }
    cout << "Джек утопил " << s << " корабл" << ending << endl;
    return 0;
}