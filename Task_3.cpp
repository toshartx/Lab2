#include <iostream>

int main()
{
    double b1;
    int n;
    std::cin >> b1 >> n;
    double q, s;
    q = 1.0 / (n + 1);
    s = b1 / (1 - q);
    std::cout << s << '\n';
    return 0;
}