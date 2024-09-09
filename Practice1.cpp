#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    float d1, d2, r1, r2, S1, S2, coeff;
    const float pi = 3.14;

    cout << "Введите диаметр окружности из рецепта: ";
    cin >> d1;
    cout << "Введите диаметр формы для перерасчёта: ";
    cin >> d2;

    r1 = d1 / 2;
    r2 = d2 / 2;

    S1 = pi * (r1 * r1);
    S2 = pi * (r2 * r2);

    coeff = S2 / S1;

    cout << "Коэффицент для перерасчёта ингридиентов равен " << coeff;
}