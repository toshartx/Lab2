#include <iostream>

int main()
{
    double a, b, c;
    std::cout << "Введите a, b, c" << '\n';
    std::cin >> a >> b >> c;
    int N;
    std::cout << "Введите N" << '\n';
    std::cin >> N;
    switch(N)
    {
        case 2:
            std::cout << b*c - a*a;
            break;
        case 56:
            std::cout << b*c;
            break;
        case 7:
            std::cout << a*a + c;
            break;
        case 3:
            std::cout << a - b*c;
            break;
        default:
            std::cout << (a+b)*(a+b)*(a+b);
    }    
    return 0;
}