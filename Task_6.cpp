#include <iostream>
#include <cmath>
// 6.8
int main()
{
    double A, B, C, d, K, x;
    std::cin >> C >> d >> K >> x;
    B = x + exp(d);
    A = log10(x);
    std::cout << A + B - pow(C,2) / K;
    return 0;
}