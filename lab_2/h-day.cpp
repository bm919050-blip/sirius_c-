#include <iostream>
#include <string>
using namespace std;

int main() {

    string name;
    int year;
    int age;

    cout << "Введите имя: ";
    cin >> name;

    cout << "Введите год рождения: ";
    cin >> year;

    age = 2026 - year;

    cout << "Здравствуйте, " << name << "!" << endl;
    cout << "Ваш возраст: " << age << endl;

    return 0;
}
