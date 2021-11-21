#include <iostream>
#include <cmath>

using namespace std;
/**
 * \brief алгоритм расчета размера заготовки
 * \param R ускорение свободного падения
 * \param a и b размеры первой пластины
 * \param c и d размеры второй пластины
 * \return можно или нельзя
 */
int main() {
	setlocale(0, "");
    int R, a, b, c, d, max_a = 0, max_b = 0;
    cout << "Введите значения: R, a, b, c, d" << endl;
    cin >> R >> a >> b >> c >> d;
    if (max_a < a) {
        max_a = a;
        if (max_a < b) {
            max_a = b;
        }
    }
    if (max_b < c) {
        max_b = c;
        if (max_b < d) {
            max_b = d;
        }
    }
    if (sqrt(max_a * max_a + max_b * max_b) <= 2 * R) {
        cout << "Можно" << endl;
    }
    else {
        cout << "Нельзя" << endl;
    }

    return 0;
}