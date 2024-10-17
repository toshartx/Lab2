#include <iostream>

double sqrt(double value) {
    if (value < 0) {
        return -1;
    }
    
    if (value == 0) {
        return 0;
    }

    double U = value;
    double accuracy = 1e-7;
    double estimate = value / 2.0;

    while (std::abs(estimate - U) > accuracy) {
        U = estimate;
        estimate = (U + value / U) / 2.0;
    }

    return estimate;
}
// Попадёт ли круг с центром (x1,y1) и радиусом r в круг с центром (x2,y2) и радиусом R
double Distance(double x2,double x1,double y2,double y1)
{
    return sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
}

int main()
{
    double x1,y1,x2,y2,r,R;
    std::cout << "Координаты центра 1 + r: ";
    std::cin >> x1 >> y1 >> r;
    std::cout << "Координаты центра 2 + R: ";
    std::cin >> x2 >> y2 >> R;
    double d;
    d = Distance(x2,x1,y2,y1);
    if (r + d <= R)
    {
        std::cout << "Да" << '\n';
    } else
    if (R + d <= r)
    {
        std::cout << "Да, но справедливо обратное для двух фигур" << '\n';
    } else
    if (R + r > d)
    {
        std::cout << "Круги пересекаются" << '\n';
    } else
    {
        std::cout << "Ни одно условие не выполнено" << '\n';
    }

    return 0;
}