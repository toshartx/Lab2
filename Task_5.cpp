#include <iostream>

// if else

int main()
{
    double x,y;
    std::cout << "Vvod: ";
    std::cin >> x >> y;
    if (x >= y)
    {
        std::cout << x;
    }
    else {
        std::cout << y;
    }
    return 0;
}