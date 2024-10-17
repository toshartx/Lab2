#include <iostream>

int main()
{
    int x,y;
    std::cin >> x >> y;
    if (x>y)
    {
        do
        {
            std::cout << x << " | " << y << '\n';
            std::cout << &x << " | " << &y << '\n';
            x += y;
            y++;
        }
        while (5*x < 200);
    } else {
        do
        {
            std::cout << x << " | " << y << '\n';
            std::cout << &x << " | " << &y << '\n';
            y += x;
            x++;
        }
        while (5*y < 200);
    } 
    return 0;
}