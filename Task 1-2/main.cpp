#define _USE_MATH_DEFINES // for C++
#include <iostream>

using namespace std;

/**
 * \brief ��� ������� ��������� ���������� �� �������� �������
 * \length - ��� ����� ����������
 * \area - ��� ������� �����
 * \return �������� �������
 */
 /**
 * \brief ����� ����� � ���������
 * \return 0  � ������ ������
 */
int main() {
	cout << "length = ";
	double length;
	cin >> length;
	cout << "area: " << length * length / (4 * M_PI) << endl;
	return 0;
}