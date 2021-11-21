#define _USE_MATH_DEFINES // for C++
#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

/**
 * \brief Рассчитывает периметр треугольника
 * \param x1 первая координата точки
 * \param y1 вторая координата точки
 * \param x2 первая координата точки
 * \param y2 вторая координата точки
 * \param x3 первая координата точки
 * \param y3 вторая координата точки
 * \param Perimetr периметр треугольника
 * \return периметр
 */
double Perimetr(double x1, double x2, double x3, double y1, double y2, double y3){
double A, B, C;
A = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
B = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
C = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));
return (A + B + C);
};
/**
 * \brief Вычисляет площадь треугольника
 * \param x1 первая координата точки
 * \param y1 вторая координата точки
 * \param x2 первая координата точки
 * \param y2 вторая координата точки
 * \param x3 первая координата точки
 * \param y3 вторая координата точки
 * \param Ploshad площадь треугольника
 * \return Ploshad площадь треугольника
 */
double Ploshad(double x1, double x2, double x3, double y1, double y2, double y3){
double A, B, C, P;
A = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
B = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
C = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));
P = 0.5 * (A + B + C);
return (sqrt(P * (P - A) * (P - B) * (P - C)));
};


/**
 * \brief Точка входа в программу
 * \return 0 в случае успеха
 */
int main()
{
    setlocale(LC_ALL, "Russian");
    double a, b, c,x1, y1, x2, y2, x3, y3, P, S;
    cout << "\nВведите координаты вершин треугольника A(x1, y1), B(x2, y2), C(x3,y3)";
    cout << "\nВведите координаты вершины А, x1="; cin >> x1; cout << " y1="; cin >> y1;
    cout << "\nВведите координаты вершины B, x2="; cin >> x2; cout << " y2="; cin >> y2;
    cout << "\nВведите координаты вершины C, x3="; cin >> x3; cout << " y3="; cin >> y3;
    P = Perimetr(x1, x2, x3, y1, y2, y3); S = Ploshad(x1, x2, x3, y1, y2, y3);
    cout << "\n Периметр треуголника с заданными координатам=" << P << endl;
    cout << "\n Площадь треуголника с заданными координатам=" << S << endl;

    return 0;
}