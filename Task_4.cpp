#include <iostream>

int main()
{
    // 1 Часть
    long long x, y;
    std::cin >> x >> y;
    if (x == y)
    {
        x = 0LL;
        y = 0LL;
    } 
    else if (x < y)
    {
        x = 0LL;
    } else 
    {
        y = 0LL;
    }
    std::cout << x << " " << y << '\n';
    // 2 часть
    double a, b, c, k;
    std::cin >> a >> b >> c;
    std::cin >> k;
    if (a > b && b > c)
    {
        a -= k;
    } else
    if (b > a && b > c)
    {
        b -= k;
    } else
    if (c > a && c > b)
    {
        c -= k;
    }
    std::cout << a << " " << b << " " << c << '\n';

    return 0;
}