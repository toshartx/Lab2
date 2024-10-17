#include <iostream>

 // A = 23a^3 + 69a^2 + 32a + 8 и B = -23a^3 + 69a^2 - 32a + 8

int main()
{
    double x, h1, h2;
    std::cout << "Vvod x: ";
    std::cin >> x; // Вводим число x
    double x2 = x*x;
    h1 = 8 + 69*x2;
    h2 = x*(23*x2 + 32);
    std::cout << "A = " << h1 + h2 << '\n';
    std::cout << "B = " << h1 - h2 << '\n';
    return 0;
}