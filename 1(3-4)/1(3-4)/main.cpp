#include <iostream>
#include <cmath>
using namespace std;
int main() {

}
void zadB() {
	float x, y;
	cin >> x;
	if (x > 3) {
		y = 5 * x - 10;
	}
	if (x == 3) {
		y = 1;
	}
	if (x < 3) {
		y = 3 * abs(x) - 5;
	}
}

void zadE() {
	float x, y;
	cin >> x;
	if (x > 2) {
		y = 2*x-15;
	}
	if (x == 2) {
		y = 5;
	}
	if (x < 2) {
		y = 3 * abs(x-1) - 8;
	}
}


