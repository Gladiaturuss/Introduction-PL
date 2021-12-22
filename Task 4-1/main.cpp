#include <iostream>
#include <random>
/**
* \brief Функция возвращает целочисленное число, введённое пользователем
*\return Возвращает число, введённое пользователем
*/
int InputInt();
/**
*\brief Функция заполняет массив случайными числами
*\param array массив
*\param n размер Массива
*/
void RandomArray(int* array, const size_t n);
/**
*\brief Функция выводит массив в консоль
*\param array массив
*\param n размер Массива
*/
void PrintArray(int* array, const size_t n);
/**
*\brief Функция позврляет заполнить массив вручную
*\param array массив
*\param n размер Массива
*/
void ManualArray(int* array, const size_t n);
/**
*\brief Функция меняет второй элемент массива на максимальный отрицательный в массиве
*\param array массив
*\param n размер Массива
*/
void MaxNegative(int* array, const size_t n);
/**
*\brief Функция считает количество положительных элементов и элементов, по модулю больших заданного числа
*\param array массив
*\param n размер Массива
*\return Возвращает количество положительных элементов и элементов, по модулю больших заданного числа
*/
int FindNumberOf(int* array, const size_t n);
/**
*\brief Функция ищет индексы первой пары чисел в массиве, сумма которых меньше заданного числа
*\param array массив
*\param n размер Массива
*\return Возвращает индекс первого элемента пары в случае успеха
*/
int FirstPair(int* array, const size_t n);
/**
*\brief Класс констант метода ввода
*/
enum class Input
{
	random,
	manual
};
/**
*\brief Точка входа в программу
*\return 0 в случае успеха
*/
int main(int argc, char* argv[])
{
	size_t n = InputInt();
	std::cout << static_cast<int>(Input::random) << " — random\n"
		<< static_cast<int>(Input::manual) << " — manual\n";

	int* array = new int[n];
	int choose = InputInt();
	auto chose = static_cast<Input>(choose);
	switch (chose)
	{
	case Input::random:
	{
		RandomArray(array, n);
		PrintArray(array, n);
		break;
	}
	case Input::manual:
	{
		ManualArray(array, n);
		PrintArray(array, n);
		break;
	}
	default:
	{
		return 1;
	}
	}

	std::cout << "Number of elements, which positive of abs < some number\n" << FindNumberOf(array, n) << " — nuber of elements\n";
	std::cout << "Numbers of first pair, which sum < some number\n";
	int temp = FirstPair(array, n);
	std::cout << "Numbers of first pair — " << temp << ", " << temp + 1 << std::endl;
	std::cout << "Replace 2nd element in array by maximum negative\n";
	MaxNegative(array, n);
	return 0;
}
void PrintArray(int* array, const size_t n)
{
	std::cout << "Array: ";
	for (int i = 0; i < n; i++)
	{
		std::cout << array[i] << " ";
	}
	std::cout << std::endl;
}

void RandomArray(int* array, const size_t n)
{
	std::random_device rnd;
	std::mt19937 gen(rnd());
	std::uniform_int_distribution<> Uniform_int_distribution(-10, 10);
	for (int i = 0; i < n; i++)
	{
		array[i] = Uniform_int_distribution(gen);
	}
}

void ManualArray(int* array, const size_t n)
{
	for (int i = 0; i < n; i++)
	{
		std::cin >> array[i];
	}
}

void MaxNegative(int* array, const size_t n) {
	int maximumNegative = 0;
	for (int i = 0; i < n; i++) {
		if (array[i] < maximumNegative) {
			maximumNegative = array[i];
		}
	}
	if (maximumNegative != 0) {
		array[1] = maximumNegative;
	}
	PrintArray(array, n);
}

int FindNumberOf(int* array, const size_t n) {
	std::cout << "Enter number A\n";
	int someNumber = InputInt();
	int count = 0;
	for (int i = 0; i < n; i++) {
		if (array[i] < 0) {
			if (abs(array[i]) < someNumber) {
				count++;
			}
		}
		else {
			count++;
		}
	}
	return count;
}

int FirstPair(int* array, const size_t n) {
	std::cout << "Enter number A\n";
	int someNumber = InputInt();
	int finish = 0; //номер первого элемента пары
	for (int i = 0; i < n - 1; i++) {
		if (array[i] + array[i + 1] < someNumber) {
			finish = i;
			break;
		}
	}
	return finish;
}

int InputInt()
{
	int input = 0;
	std::cin >> input;
	return input;
}