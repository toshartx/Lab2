#include <iostream>
#include <cmath>
// 6.4
int main()
{
    double A, B, C, D, x, y, z, K;
    std::cin >> C >> D >> x >> y >> z >> K;
    B = sqrt(z);
    A = x - y;
    std::cout << cos(x) + pow(A,2)/(K - C*D) - B;
    return 0;
}