#include <iostream>
#include <cmath>
// 6.1
int main()
{
    double A, b, x, D;

    std::cin >> x >> D;


    b = x + D;
    A = D*x/b;

    std::cout << (pow(A,2) + b*cos(x))/(pow(D,3) + D + A - b);


    return 0;
}