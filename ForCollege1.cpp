#include <iostream>
using namespace std;

float calcSq(float side) {
	return side * side;
}
float calcRec(float side1, float side2) {
	return side1 * side2;
}
float calcCir(float diametr) {
	const float pi = 3.14;
	return pi * (diametr / 2) * (diametr / 2);
}

int main()
{
	system("chcp 1251");

	string f1, f2;
	float a, b, d, r, S1 = 0, S2 = 0;
	const float pi = 3.14;


	cout << "Введите изначальную форму: ";
	cin >> f1;

	if (f1 == "квадратная" || f1 == "квадрат") {
		cout << "Введите длину стороны изначальной формы: ";
		cin >> a;
		S1 = calcSq(a);
	}
	else if (f1 == "прямоугольная" || f1 == "прямоугольник") {
		cout << "Введите длину стороны изначальной формы: ";
		cin >> a;
		cout << "Введите ширину стороны изначальной формы: ";
		cin >> b;
		S1 = calcRec(a, b);
	} 
	else if (f1 == "круглая" || f1 == "круг") {
		cout << "Введите диаметр окружности изначальной формы: ";
		cin >> d;
		S1 = calcCir(d);
	}
	else {
		cout << "ошибочка";
	}

	cout << "\n";
	cout << "Введите конечную форму: ";
	cin >> f2;

	if (f2 == "квадратная" || f2 == "квадрат") {
		cout << "Введите длину стороны конечной формы: ";
		cin >> a;
		S2 = calcSq(a);
	}
	else if (f2 == "прямоугольная" || f2 == "прямоугольник") {
		cout << "Введите длину стороны конечно формы: ";
		cin >> a;
		cout << "Введите ширину стороны конечной формы: ";
		cin >> b;
		S2 = calcRec(a, b);
	}
	else if (f2 == "круглая" || f2 == "круг") {
		cout << "Введите диаметр окружности конечной формы: ";
		cin >> d;
		S2 = calcCir(d);;
	}
	else {
		cout << "Ошибочка";
	}


	cout << "\n";
	cout << "Пропорция равна: " << S2 / S1;

}
