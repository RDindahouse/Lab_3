/*Класс – треугольник. Методы – расчет площади и периметра треугольника.
Поля – стороны треугольника.*/
#include <iostream>
#include <cmath>
#define pi 3.1415926535
using namespace std;
class NatFraction
{
    int a, b, c;
    double S, P;

public:
    NatFraction()
    {
        // Базовый конструктор
        a = 0;
        b = 0;
        c = 0;
        P = 0;
        S = 0;
    }
    NatFraction(int x, int y, int b, double d, double e)
    {
        // конструктор с параметрами
        a = x;
        b = b;
        c = c;
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
    double p;
    p = (a + b + c) / 2;
    S = sqrt(p * (p - a) * (p - b) * (p - c));
}

void NatFraction::perimeter()
{ // Периметр треугольника
    P = a + b + c;
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