#include <iostream>

int main()
{
    double x,y;
    std::cout << "Vvod: ";
    std::cin >> x >> y;
    bool S = x >= y;
    S == 1 ? std::cout << x : std::cout << y;
    return 0;
}