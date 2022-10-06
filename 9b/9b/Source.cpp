#include <iostream>

using namespace std;

int main()
{
    int begin = 1, val;
    cout << "1 - Liters, 2 - Cubes, 3 - Barrels" << endl;
    cin >> begin;
    cout << "Degrees - ";
    cin >> val;
    switch (begin) {
    case 1:
        cout << "Liters - " << val << " L" << endl;
        break;

    case 2:
        cout << "Cubes - " << val / 1000 << " m3" << endl;
        break;

    case 3:
        cout << "Barrels - " << val * 159 << " bbls" << endl;
        break;

    default:
        cout << "error" << endl;
        break;
    }
    return 0;
}