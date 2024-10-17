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

//  ax4+bx2+c=0

void Solve(double a, double b, double c)
{
    double D1 = b*b - 4*a*c;
    if (D1 >= 0)
    {
        double t1 = (-b+sqrt(D1))/(2*a);
        double t2 = (-b-sqrt(D1))/(2*a);
        if (t1 >= 0)
        {
            std::cout << "x = " << sqrt(t1) << '\n';   
            std::cout << "x = " << -sqrt(t1) << '\n';  
        }
        if (t2 >= 0)
        {
            std::cout << "x = " << sqrt(t2) << '\n';   
            std::cout << "x = " << -sqrt(t2) << '\n';  
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