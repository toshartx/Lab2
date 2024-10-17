#include <iostream>
#include <cmath>
// 6.9
int main()
{
    double A, B, C, D, K, x, p, z;
    std::cin >> C >> D >> K >> x >> p >> z;
    B = std::abs(p - x);
    A = sin(x) - z;
    std::cout << pow(A+B,2) - K / (C*D);
    return 0;
}