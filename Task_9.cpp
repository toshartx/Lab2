#include <iostream>
#include <cmath>

int main()
{
    int param;
    double x = 0, f = 0;
    std::cout << "Выберите функцию (1: 2x, 2: x^3, 3: x/3): ";
    std::cin >> param;
    switch (param)
    {
    case 1:
        std::cout << "Используемая функция для подсчета: 2x" << '\n';
        f = 2*x;
        break;
    case 2:
        std::cout << "Используемая функция для подсчета: x^3" << '\n';
        f = pow(x,3);
        break;
    case 3:
        std::cout << "Используемая функция для подсчета: x/3" << '\n';
        f = x/3;
        break;    
    default:
        std::cout << "Нет такой функции";
        break;
    }
    double c, d, z;
    std::cout << "Введите параметры для расчёта: ";
    std::cin >> c >> d >> z;
    if (z < 0)
    {
        std::cout << "z < 0 -> x = z^2-z " << '\n';
        x = z*(z-1);
    } else
    {
        std::cout << "z >= 0 -> x = z*z*z " << '\n';
        x = pow(z,3);
    }
    double y;
    double s = c*f+pow(d,2)+pow(x,2);
    int ceil = std::ceil(s);
    double m = sin(ceil);
    y = pow(m,3);
    std::cout << "y = " << y << '\n';
    return 0;
}