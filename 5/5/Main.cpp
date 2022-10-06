#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	float num1;
	float num2;
	float num3;
	cout << "Enter three numbers: ";
	cin >> num1 >> num2 >> num3;
	
	float a = num1 * 2;
	float b = num2 - 3;
	float c = num3 * num3;
	float d = a + b + c;

	std::setprecision(7);
	cout << c << endl;

	return 0;

}