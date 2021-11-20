#define _USE_MATH_DEFINES // for C++
#include <iostream>

using namespace std;

/**
 * \brief Это функция выполняет вычисление по заданной формуле
 * \length - это длина окружности
 * \area - это площадь круга
 * \return значение функции
 */
 /**
 * \brief Точка входа в программу
 * \return 0  в случае успеха
 */
int main() {
	cout << "length = ";
	double length;
	cin >> length;
	cout << "area: " << length * length / (4 * M_PI) << endl;
	return 0;
}