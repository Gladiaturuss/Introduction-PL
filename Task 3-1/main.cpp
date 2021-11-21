#include <iostream>
#include <iomanip>

/**
 * \brief ������������ �������� ������� � �������� ����� \a x.
 * \param x �������� �����.
 * \return �������� ������� � �������� ����� \a x.
 */
double myFunc(double x);

/**
 * \brief ������, ���������� �� ������� � �������� ����� \a x.
 * \param x �������� �����.
 * \return true, ���� �������� ������� � �������� ����� \a x ����������.
 */
bool isCalculated(double x);

/**
 * \brief ����� ����� � ���������.
 * \return � ������� ������ ��� 0.
 */
int main()
{
    setlocale(LC_ALL, "Russian");
    const double X_START = 0.0;
    const double X_FINISH = 3;
    const double STEP = 0.2;
    double x = X_START;
    while (x <= X_FINISH)
    {
        if (isCalculated(x))
        {
            const double y = myFunc(x);
            std::cout << "x = " << std::setw(5) << std::left << std::setprecision(5) << x << " y = " << y << "\n";
        }
        else
        {
            std::cout << "x = " << x << " y = �� ����������" << "\n";
        }

        x += STEP;
    }
    return 0;
}

double myFunc(const double x)
{
    return 3 * x -14 + exp(x) - exp(- x);
}

bool isCalculated(const double x)
{
    return x >= 1;
}