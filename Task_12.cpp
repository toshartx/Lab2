#include <iostream>
const double pi = 3.141592653589;

double pow(double value, int n)
{
    double result = 1;
    for (int i = 0; i < n; i++)
    {
        result *= value;
    }
    return result;
}

double Factorial(int value)
{
    if (value == 0 || value == 1)
    {
        return 1;
    } else
    {
        return value * Factorial(value - 1);
    }
}

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

double cbrt(double value) {
    if (value == 0) {
        return 0;
    }

    double U = value;
    double accuracy = 1e-7;
    double diff = 1;
    
    while (std::abs(diff) > accuracy) {
        double estimate = (2 * U + value / (U * U)) / 3;
        diff = U - estimate;
        U = estimate;
    }

    return U;
}


double cos(double value)
{
    double result = 0;
    double sMember = 0;
    for (int i = 0; i < 12; ++i)
    {
        sMember = (i % 2 == 0 ? 1 : -1) * pow(value, 2*i) / Factorial(2*i);
        result += sMember;
    }
    return result;
}

double acos0(double value)
{   
    double left = 0;
    double right = pi;
    double xI = pi/2;
    while (std::abs(cos(xI) - value) > 1e-9)
    {
        if (cos(xI) > value)
        {
            left = xI;
        }
        else
        {
            right = xI;
        }
        xI = (left+right)/2;
    } 
    return xI;
}

// x3+px+q=0

void Solve(double p, double q)
{
    double D = pow(p/3.0,3)+pow(q/2.0,2);

    if (D > 0)
    {
        double U = cbrt(-q/2+sqrt(D));
        double V = cbrt(-q/2-sqrt(D));
        std::cout << "x = " << U+V << '\n';
    }

    else if (D == 0)
    {
        double U = cbrt(q/2+sqrt(D));
        std::cout << "x1= "<< 2*U << '\n';
        std::cout << "x2=x3= " << -U << '\n';
    }

    else 
    {
        
        double F = acos0(sqrt(-3/p)*3*q/(2*p));
        double x1 = 2*sqrt(-p/3)*cos(F/3);
        double x2 = 2*sqrt(-p/3)*cos(F/3 + 2*pi/3);
        double x3 = 2*sqrt(-p/3)*cos(F/3 + 4*pi/3);
        std::cout << "x1 = " << x1 << '\n';
        std::cout << "x2 = " << x2 << '\n';
        std::cout << "x3 = " << x3 << '\n';
    }
}

int main()
{
    double p, q;
    std::cout << "Введите коэффиценты p и q: ";
    std::cin >> p >> q;
    Solve(p,q);
    return 0;
}