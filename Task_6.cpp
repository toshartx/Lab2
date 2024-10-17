#include <iostream>
#include <cmath>
// 6.5
int main()
{
    double A, K, x, D, n, m;
    std::cin >> x >> K >> n >> m;
    D = tan(x);
    A = std::abs(n - m);
    std::cout << 1.29 + K/A + pow(D,2);
    return 0;
}