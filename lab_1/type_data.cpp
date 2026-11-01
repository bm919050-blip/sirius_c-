
#include <iostream>
using namespace std;

int main() {

    // 1. Размеры типов данных
    cout << "Размеры типов данных:" << endl;

    cout << "int: " << sizeof(int) << endl;
    cout << "short: " << sizeof(short) << endl;
    cout << "long: " << sizeof(long) << endl;
    cout << "long long: " << sizeof(long long) << endl;
    cout << "float: " << sizeof(float) << endl;
    cout << "double: " << sizeof(double) << endl;
    cout << "char: " << sizeof(char) << endl;
    cout << "bool: " << sizeof(bool) << endl;


    // 2. Переполнение
    cout << "\nПереполнение:" << endl;

    unsigned int a = 4294967295;
    cout << "a = " << a << endl;
    cout << "a + 1 = " << a + 1 << endl;


    // 3. Сравнение float и double
    cout << "\nТочность чисел:" << endl;

    float x = 0.1f + 0.2f;
    double y = 0.1 + 0.2;

    cout << "float: " << x << endl;
    cout << "double: " << y << endl;


    // 4. Использование auto
    cout << "\nИспользование auto:" << endl;

    auto b = 10;
    auto c = 5.5;
    auto d = 'A';

    cout << b << endl;
    cout << c << endl;
    cout << d << endl;

    return 0;
}
