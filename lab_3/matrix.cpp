
#include <iostream>
#include <chrono>
using namespace std;

int a[10000][10000];

int main() {

    // Заполняем матрицу
    for (int i = 0; i < 10000; i++) {
        for (int j = 0; j < 10000; j++) {
            a[i][j] = 1;
        }
    }

    int sum1 = 0;
    int sum2 = 0;

    // Считаем по строкам
    auto start = chrono::high_resolution_clock::now();

    for (int i = 0; i < 10000; i++) {
        for (int j = 0; j < 10000; j++) {
            sum1 = sum1 + a[i][j];
        }
    }

    auto end = chrono::high_resolution_clock::now();

    cout << "Сумма по строкам: " << sum1 << endl;
    cout << "Время: "
         << chrono::duration_cast<chrono::milliseconds>(end - start).count()
         << " мс" << endl;


    // Считаем по столбцам
    start = chrono::high_resolution_clock::now();

    for (int j = 0; j < 10000; j++) {
        for (int i = 0; i < 10000; i++) {
            sum2 = sum2 + a[i][j];
        }
    }

    end = chrono::high_resolution_clock::now();

    cout << "Сумма по столбцам: " << sum2 << endl;
    cout << "Время: "
         << chrono::duration_cast<chrono::milliseconds>(end - start).count()
         << " мс" << endl;

    return 0;
}
