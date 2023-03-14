/*Класс – трапеция. Методы – расчет площади и периметра трапеции.
Поля – стороны трапеции, площадь и периметр.*/
#include <iostream>
#include <cmath>
#define pi 3.1415926535
using namespace std;
class NatFraction
{
    int a, b, c, d;
    double S, P;

public:
    NatFraction()
    {
        // Базовый конструктор
        a = 0;
        b = 0;
        c = 0;
        d = 0;
        P = 0;
        S = 0;
    }
    NatFraction(int x, int y, int b, int f, double d, double e)
    {
        // конструктор с параметрами
        a = x;
        b = b;
        c = c;
        d = f;
        S = d;
        P = e;
    }

    void set();
    void get();
    void display();
    void Area();
    void perimeter();
};

void NatFraction::set()
{ // Метод присвоения
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;
    cout << "d: ";
    cin >> d;
}

void NatFraction::get()
{
    cout << "The number is: " << a << endl;
}

void NatFraction::display()
{
    cout << "triangle area: " << S << endl;
    cout << "triangle perimeter: " << P << endl;
}

void NatFraction::Area()
{ // Площадь параллелепипеда
    S = (a + b) / 2 * sqrt(pow(c, 2) - ((pow(b - a, 2) + pow(c, 2) - pow(d, 2)) / (2 * (b - a))));
}

void NatFraction::perimeter()
{ // Периметр треугольника
    P = a + b + c + d;
}

main()
{
    NatFraction n1;
    double result;
    n1.set();
    n1.Area();
    n1.perimeter();
    n1.display();
}