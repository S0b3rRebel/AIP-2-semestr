#include <iostream>
int main()
{
    setlocale(LC_ALL, "Russian");
    int first;
    int second;
    int third;
    int max;
    int min;
    std::cout << "Введите первое число:\n> ", std::cin >> first;
    std::cout << "Введите второе число:\n> ", std::cin >> second;
    std::cout << "Введите третье число:\n> ", std::cin >> third;

    max = first;
    if (second > max) max = second;
    if (third > max) max = third;
    min = first;
    if (second < min) min = second;
    if (third < min) min = third;
    std::cout << "Наибольшее +5:" << max + 5 << "Наименьшее -3:" << min - 3 << std:: endl;
    return 0;
}