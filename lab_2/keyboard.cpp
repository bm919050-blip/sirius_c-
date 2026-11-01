
#include <iostream>
using namespace std;

int main() {

    double a, b;

    cout << "Введите первое значение в сантиметрах: ";
    cin >> a;

    cout << "Введите второе значение в сантиметрах: ";
    cin >> b;

    if (a > b) {
        cout << "Первое значение больше." << endl;
    }
    else if (a < b) {
        cout << "Второе значение больше." << endl;
    }
    else {
        cout << "Значения равны." << endl;
    }

    return 0;
}
