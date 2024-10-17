#include <iostream>
#include <cmath>
// 6.2
int main()
{
    double A, B, C, D, x, p, K;
    std::cin >> C >> D >> x >> p >> K;
    B = exp(K);
    A = x + sin(p);
    std::cout << 1 + pow(K,2)/(2*A*B) - B + D*C;
    return 0;
}