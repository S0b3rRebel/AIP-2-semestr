#include <iostream>
#include <cmath>
#include <iomanip>
// Пользователь вводит параметры фигуры. Найти периметр и площадь фигуры: прямогульник

using namespace std;

int main()
{
	float num1;
	float num2;

	cout << "Enter the width and length of the rectangle: ";
	cin >> num1 >> num2;
	float per = num1 + num1 + num2 + num2;
	float area = num1 * num2;

	std::setprecision(7);
	cout << "Perimeter = " << per << endl;
	cout << "Area = " << area << endl;
	
	return 0;
}