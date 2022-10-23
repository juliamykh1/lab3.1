// Lab_03_1.cpp
// Михайлович Юлія>
// Лабораторна робота № 3.1
// Розгалуження, задане формулою: функція однієї змінної.
// Варіант 13
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // вхідний параметр
	double y; // результат обчислення виразу
	double A; // проміжний результат - функціонально стала частина виразу
	double B; // проміжний результат - функціонально змінна частина виразу
	cout << "x = "; cin >> x;

	A = 2*abs(x-5);
	if (x < -1)
		B = sin(x)*sin(x)/(1+abs(cos(x)));
	if (-1 <= x && x <= 1)
		B = (cos(x)*cos(x))*1/abs(x+1);
	if (x > 1)
		B = log(x)*abs(x+2);
	y = A - B;
	cout << endl;
	cout << "1) y = " << y << endl;
	cin.get();
	return 0;
}