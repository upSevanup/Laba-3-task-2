﻿#include <iostream>
#include <clocale>

using namespace std;

/*лабораторная работа 3. Поливцев Михаил, ИВТ-31. Задание 2. индивидуальный вариант 16.
* если числа упорядочены по возрастанию, то удвоить значения каждого числа, иначе заменить числа на противоположные
*/

int main() {
	setlocale(LC_ALL, "ru");

	cout << "Введите три числа >> ";
	double a, b, c;

	cin >> a >> b >> c;

	if (a < b && b < c)
		cout << a * 2 << " " << b * 2 << " " << c * 2 << endl;
	else
		cout << a * (-1) << " " << b * (-1) << " " << c * (-1) << endl;
}

