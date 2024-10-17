#include <iostream>
#include <cmath>
// 6.6
int main()
{
    double A, C, D, K, x, y;
    std::cin >> C >> K >> x >> y;
    A = x + y;
    D = std::abs(C - A);
    std::cout << 10.1 + A/C + D/pow(K,2);
    return 0;
}