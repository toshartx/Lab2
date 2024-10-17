#include <iostream>
#include <cmath>
// 6.7
int main()
{
    double A, B, C, D, K, x, p, h;
    std::cin >> C >> D >> K >> x >> p >> h;
    B = log(h);
    A = x - p;
    std::cout << 0.78*B + pow(A,3)/(K*C*D);
    return 0;
}