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

// ax4+bx3+cx2+bx+a=0

void Solve(double a, double b, double c)
{
    double D = b*b - 4*a*c;
    if (D >= 0)
    {
        double t1 = (-b+sqrt(D))/(2*a);
        double t2 = (-b-sqrt(D))/(2*a);
        double D1 = t1*t1 - 4;
        double D2 = t2*t2 - 4;
        if (D1 >= 0)
        {
            std::cout << "x= " << (-t1+sqrt(D1))/2;
            std::cout << "x= " << (-t1-sqrt(D1))/2;
        }
        if (D2 >= 0)
        {
            std::cout << "x= " << (-t2+sqrt(D1))/2;
            std::cout << "x= " << (-t2-sqrt(D1))/2;
        }
    }
    else {
        std::cout << "НЕТ КОРНЕЙ" << '\n';
    }
}

int main()
{
    double a, b, c;
    std::cout << "Введите коэффиценты a, b и c: ";
    std::cin >> a >> b >> c;
    Solve(a,b,c);
    return 0;
}