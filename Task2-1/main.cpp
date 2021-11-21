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
double Perimetr(double x1, double x2, double x3, double y1, double y2, double y3) {
    double a, b, c;
    a = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
    b = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
    c = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));
    return (a + b + c);
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
double Ploshad(double x1, double x2, double x3, double y1, double y2, double y3) {
    double a, b, c, p;
    a = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
    b = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
    c = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));
    p = 0.5 * (a + b + c);
    return (sqrt(p * (p - a) * (p - b) * (p - c)));
};


/**
 * \brief Точка входа в программу
 * \return 0 в случае успеха
 */
int main()
{
    setlocale(LC_ALL, "Russian");
    double a, b, c, x1, y1, x2, y2, x3, y3, p, s;
    cout << "\nВведите координаты вершин треугольника a(x1, y1), b(x2, y2), c(x3,y3)";
    cout << "\nВведите координаты вершины a, x1="; cin >> x1; cout << " y1="; cin >> y1;
    cout << "\nВведите координаты вершины b, x2="; cin >> x2; cout << " y2="; cin >> y2;
    cout << "\nВведите координаты вершины c, x3="; cin >> x3; cout << " y3="; cin >> y3;
    p = Perimetr(x1, x2, x3, y1, y2, y3); s = Ploshad(x1, x2, x3, y1, y2, y3);
    cout << "\n Периметр треуголника с заданными координатам=" << p << endl;
    cout << "\n Площадь треуголника с заданными координатам=" << s << endl;

    return 0;
}