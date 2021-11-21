#define _USE_MATH_DEFINES // for C++
#include <cmath>
#include <iostream>
using namespace std;

/**
* \brief эта функция выполняет вычисление при x > a
* \param const a - константа
* \param x- число, вводимое пользователем
* \return возвращает значение функции
**/
double getG(const double a, const double x);

/**
* \brief эта функция выполняет вычисление при x < a
* \param const a - константа
* \param x- число, вводимое пользователем
* \return возвращает значение функции
**/
double getG2(const double a, const double x);

/**
* brief Точка входа в программу
*  \return возвращает 0 в случае успешного выполнения
**/

int main()
{
	setlocale(LC_ALL, "Russian");
	const double a = 1.6;
	cout << "введите значение x: \n";
	double x;
	cin >> x;
	double y;

	if (x > a)
	{
		y = getG(a, x);
		cout << "y=" << y << "\n";
	}
	else
	{
		y = getG2(a, x);
		cout << "y=" << y;
	}

	return 0;
}

double getG(const double a, const double x)
{
	return (exp(a * x) - 2.5);
}

double getG2(const double a, const double x)
{
	return (a/x + sin(x));
}