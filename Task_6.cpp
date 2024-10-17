#include <iostream>
#include <cmath>
// 6.10
int main()
{
    double A, B, C, D, k, x, z;
    std::cin >> C >> D >> k >> x >> z;
    B = sqrt(z);
    A = log(x) - k;
    std::cout << pow(D,2) + pow(C,2)/(0.75*A) + B;
    return 0;
}