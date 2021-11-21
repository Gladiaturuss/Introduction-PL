#define USE_MATH_DEFINES
#include <iostream>
#include <cmath>


using namespace std;
/**
 * \brief функция расчета давления на дно цистерны
 * \param g ускорение свободного падения
 * \param p плотность воды
 * \param h высота столба воды
 * \return давление на дно
 */
double pressure(const double p, const double g, const double h);

double InputValue_h();

int main() {
	const double g = 10;
	const double p = 1000;
	const double h = InputValue_h();
	const double D = pressure(p, g, h);

	cout << "p = " << p << ", g = " << g <<", h = " << h << '\n';
	cout << "D = " << D << '\n';

	system("pause");
	return 0;
}

double InputValue_h() {
	double value;
	cout << "Введите значение: ";
	cin >> value;
	return value;
}

double pressure(const double p, const double g, const double h)
{
	return g*p*h;
}
