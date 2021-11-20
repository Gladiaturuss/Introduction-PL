#define _USE_MATH_DEFINES // for C++
#include <iostream>

using namespace std;

/**
 * \brief вычисляет площадь круга
 * \length - это длина окружности
 * \area - это площадь
 * \return площадь круга
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