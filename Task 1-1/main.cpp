#define _USE_MATH_DEFINES // for C++
#include <cmath>
#include <iomanip>
#include <iostream>

//using namespace std;

/**
 * \brief ��� ������� ��������� ���������� �� �������� �������
 * \param x �������� �
 * \param y �������� y
 * \return �������� �������
 */
double getA(const double x, const double y, const double z);
/**
 * \brief ��� ������� ��������� ���������� �� �������� �������
 * \param x �������� �
 * \param y �������� y
 * \param z �������� z
 * \return 0  �������� �������
 */
double getB(const double x, const double y, const double z);

/**
 * \brief ����� ����� � ���������
 * \return 0  � ������ ������
 */
int main()
{
    const double x = 1.4;
    const double y = 3.1;
    const double z = 0.5;

    const double a = getA(x, y, z);
    const double b = getB(x, y, z);


    std::cout << std::setprecision(9) << "x = " << x << " y = " << y << " z = " << z
        << " a = " << a << " b = " << b << std::endl;
    return 0;
}



double getA(const double x, const double y, const double z)
{
    return sqrt(z*x*sin(2*x)+exp(-2*x)*(x+y));
}

double getB(const double x, const double y, const double z)
{
    return exp(2 * x) * log(z + x) - pow(y, 3*x) * log(y - x);
}