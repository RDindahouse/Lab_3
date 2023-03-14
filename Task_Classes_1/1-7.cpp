/*Класс – квадратное уравнение. Методы – расчет корней уравнения. Поля – корни
уравнения, коэффициенты a , b , c . */
#include <iostream>
#include <cmath>
#define pi 3.1415926535
using namespace std;
class NatFraction
{
    double x1, x2, a, b, c;

public:
    NatFraction()
    {
        // Базовый конструктор
        a = 0;
        b = 0;
        c = 0;
        x1 = 0;
        x2 = 0;
    }
    NatFraction(double y1, double y2, double y3, double d, double e)
    {
        // конструктор с параметрами
        a = y1;
        b = y2;
        c = y3;
        x1 = d;
        x2 = e;
    }

    void set();
    void get();
    void display();
    void Root1();
    void Root2();
};

void NatFraction::set()
{ // Метод присвоения
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;
}

void NatFraction::get()
{
    cout << "The number is: " << a << endl;
}

void NatFraction::display()
{
    cout << "equation: " << a << "x^2 ";
    if (b > 0)
    {
        cout << "+ ";
    }
    cout << b << "x ";
    if (c > 0)
    {
        cout << "+ ";
    }
    cout << c << " = 0" << endl;
    cout << "x1: " << x1 << endl;
    cout << "x2: " << x2 << endl;
}

void NatFraction::Root1()
{ // первый корень
    double d;
    d = pow(b, 2) - 4 * a * c;
    if (d > 0)
    {
        x1 = ((-b) + sqrt(d)) / (2 * a);
    }
    else if (d == 0)
    {
        x1 = -(b / (2 * a));
    }
    else
    {
        x1 = 0;
    }
}

void NatFraction::Root2()
{ // второй корень
    double d;
    d = pow(b, 2) - 4 * a * c;
    if (d > 0)
    {
        x2 = ((-b) - sqrt(d)) / (2 * a);
    }
    else if (d == 0)
    {
        x2 = -(b / (2 * a));
    }
    else
    {
        x2 = 0;
    }
}

main()
{
    NatFraction n1;
    double result;
    n1.set();
    n1.Root1();
    n1.Root2();
    n1.display();
}