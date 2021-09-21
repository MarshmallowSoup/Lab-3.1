// Лабораторна 3.1
// Лисецький Володимир
// Варіант 12
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // вхідний параметр
	double y; // результат обчислення виразу
	double A; // проміжний результат - функціонально стала частина виразу
	double B; 
	cout << "x = "; cin >> x;
	double q = abs(x) + exp(x);

	A = 1 + (2 + x)/(x * x);
	// спосіб 1: розгалуження в скороченій формі
	if (x < 0)
		B = pow(x,3) - 2 * pow(x,4);
	if (0 <= x && x <= 2)
		B = pow(q, 3);
	if (x > 2)
		B = 4 * cos(x*x-2);
	y = A + B;
	cout << endl;
	cout << "1) y = " << y << endl;
	// спосіб 2: розгалуження в повній формі
	if (x < 0)
		B = pow(x, 3) - 2 * pow(x, 4);
	else
		if (0 <= x && x <= 2) 
			B = pow(q, 3);
		else 
			if(x > 2)
			B = 4 * cos(x * x - 2);
	y = A + B;
	cout << "2) y = " << y << endl;
	cin.get();
	return 0;
}
