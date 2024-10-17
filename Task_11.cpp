#include <iostream>

int DeltaHours(double m2, double m1)
{
    int delta, H;
    if (m1 > m2) 
    {
        delta = 1440 - (m1-m2); // в 24 часах 1440 минут
    } else
    {
    delta = m2 - m1;
    }
    H = delta / 60;
    return H;
}

int DeltaMin(double m2, double m1)
{
    int delta, M;
    if (m1 > m2) 
    {
        delta = 1440 - (m1-m2);
    } else
    {
    delta = m2 - m1;
    }
    M = delta % 60;
    return M;
}

int main()
{
    int h1, min1, h2, min2;
    std::cout << "Начал в: ";
    std::cin >> h1 >> min1;
    std::cout << "Закончил в: ";
    std::cin >> h2 >> min2;
    min1 += h1*60;
    min2 += h2*60;
    std::cout << "Часов: " << DeltaHours(min2, min1) << '\t' << "Минут: " << DeltaMin(min2,min1) << '\n'; 
    return 0;
}