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


double LengthOfSize(double a, double b, double c, double d)
{
    return sqrt(pow(a-b, 2) + pow(c-d, 2));
}

double Corner(double a, double b, double c)
{
    double crn = acos0((a*a + b*b - c*c)/(2*a*b));
    return crn;
}

double Heights(double a, double S)
{
    return (2*S)/a;
}

double Medians(double a, double b, double c)
{
    return sqrt(2*c*c+2*b*b-a*a)/2;
}

double Biss(double c, double al, double b)
{
    double n = (al*c)/(al+b);
    double m = c-n;
    return sqrt(al*b - n*m);

}

double VRadius(double S, double P)
{
    double p = P/2;
    return S/p;
}

double ORadius(double a, double b, double c, double S)
{
    return a*b*c/(4*S);
}

double DefaultS(double a, double h)
{
    return a*h/2;
}

double AreaCircle (double r)
{
    double S = pi*r*r;
    return S;    
}

double LengthCircle (double r)
{
    return pi*r;
}

double GeronS(double a, double b, double c)
{
    double p = (a+b+c)/2;
    return sqrt(p*(p-a)*(p-b)*(p-c));
}

double RadiusS(double P, double r)
{
    return (P/2)*r;
}

int main()
{
    std::cout.precision(3);
    double x1 = 0, y1 = 0, x2 = 0, y2 = 0, x3 = 0, y3 = 0;
    std::cout << "Введите координаты вершин " << '\n';
    std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    // Стороны
    double a = 0, b = 0, c = 0, P = 0;
    a = LengthOfSize(x2,x1,y2,y1);
    std::cout << "Длина первой стороны: " << a << '\n';
    b = LengthOfSize(x3,x2,y3,y2);
    std::cout << "Длина второй стороны: " << b << '\n';
    c = LengthOfSize(x3,x1,y3,y1); 
    std::cout << "Длина третьей стороны: " << c << '\n';
    P = a + b + c;
    std::cout << "Периметр: " << P << '\n';
    // Углы
    double alphaRad, betaRad, gammaRad;
    alphaRad = Corner(b,c,a);
    std::cout << "Угол между второй и третьей стороной: " << alphaRad << " " << alphaRad * 57.3 << '\n';
    betaRad = Corner(a,c,b);
    std::cout << "Угол между первой и третьей стороной: " << betaRad << " " << betaRad * 57.3 << '\n';
    gammaRad = Corner(a,b,c);
    std::cout << "Угол между первой и второй стороной: " << gammaRad << " " << gammaRad * 57.3 << '\n';
    // Высоты
    double hc, ha, hb;
    hc = Heights(c,GeronS(a,b,c));
    std::cout << "Высота к третьей стороне: " << hc << '\n';
    ha = Heights(a,GeronS(a,b,c));
    std::cout << "Высота к первой стороне: " << ha << '\n';
    hb = Heights(b,GeronS(a,b,c));
    std::cout << "Высота к второй стороне: " << hb << '\n';
    double S = DefaultS (c,hc);
    // Медианы
    double ma, mb, mc;
    mc = Medians(c,a,b);
    std::cout << "Медиана к третьей стороне: " << mc << '\n';
    ma = Medians(a,b,c);
    std::cout << "Медиана к первой стороне: " << ma << '\n';
    mb = Medians(b,a,c);
    std::cout << "Медиана к второй стороне: " << mb << '\n';
    // Биссектрисы
    double ba, bb, bc;
    bc = Biss(c,b,a);
    std::cout << "Биссектриса к третьей стороне: " << bc << '\n';
    ba = Biss(a,c,b);
    std::cout << "Биссектриса к первой стороне: " << ba << '\n';
    bb = Biss(b,a,c);
    std::cout << "Биссектриса к второй стороне: " << bb << '\n';
    // Радиусы
    double r, R;
    r = VRadius(S,P);
    std::cout << "Впис: " << r << '\n';
    R = ORadius(a,b,c,GeronS(a,b,c));
    std::cout << "Опис: " << R << '\n';
    // S and L окружностей
    std::cout << "Впис S: " << AreaCircle(r) << '\n';
    std::cout << "Опис S: " << AreaCircle(R) << '\n';
    std::cout << "Впис L: " << LengthCircle(r) << '\n';
    std::cout << "Опис L: " << LengthCircle(R) << '\n';
    // S треугольника
    std::cout << "S default " << S << '\n';
    std::cout << "S по Герону " << GeronS(a,b,c) << '\n';
    std::cout << "S=pr: " << RadiusS(P,r) << '\n';
    return 0;
}