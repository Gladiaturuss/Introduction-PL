#define _USE_MATH_DEFINES // for C++
#include <cmath>
#include <iostream>
using namespace std;

/**
* \brief ��� ������� ��������� ���������� ��� x > a
* \param const a - ���������
* \param x- �����, �������� �������������
* \return ���������� �������� �������
**/
double getG(const double a, const double x);

/**
* \brief ��� ������� ��������� ���������� ��� x < a
* \param const a - ���������
* \param x- �����, �������� �������������
* \return ���������� �������� �������
**/
double getG2(const double a, const double x);

/**
* brief ����� ����� � ���������
*  \return ���������� 0 � ������ ��������� ����������
**/

int main()
{
	setlocale(LC_ALL, "Russian");
	const double a = 1.6;
	cout << "������� �������� x: \n";
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