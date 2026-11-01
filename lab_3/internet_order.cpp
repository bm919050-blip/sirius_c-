#include <iostream>
using namespace std;

int main() {
    int age;
    double sum;
    bool promo, blocked, marked;
    int stock;

    cout << "Возраст: ";
    cin >> age;

    cout << "Сумма заказа: ";
    cin >> sum;

    cout << "Есть промокод (1 - да, 0 - нет): ";
    cin >> promo;

    cout << "Аккаунт заблокирован (1 - да, 0 - нет): ";
    cin >> blocked;

    cout << "Есть маркированные товары (1 - да, 0 - нет): ";
    cin >> marked;

    cout << "Остаток на складе: ";
    cin >> stock;

    if (blocked == true) {
        cout << "Заказ отклонен";
    }
    else if (age < 18 && marked == true) {
        cout << "Заказ отклонен: возраст";
    }
    else if (stock <= 0) {
        cout << "Товара нет";
    }
    else {
        double discount = 0;

        if (sum >= 10000) {
            discount = 15;
        }
        else if (sum >= 5000 && promo == true) {
            discount = 10;
        }

        cout << "Заказ оформлен" << endl;
        cout << "Скидка: " << discount << "%" << endl;
        cout << "К оплате: " << sum - sum * discount / 100;
    }

    return 0;
}
