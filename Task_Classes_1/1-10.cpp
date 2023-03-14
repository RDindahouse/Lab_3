/*Класс – параллелепипед. Методы – расчет площади поверхности и объема параллелепипеда. Поля – ребра a , b , c , площадь и объем. */
#include <iostream>
#include <cmath>
#define pi 3.1415926535
using namespace std;
class NatFraction
{
    int a, b, c;
    double S, V;

public:
    NatFraction()
    {
        // Базовый конструктор
        a = 0;
        b = 0;
        c = 0;
        V = 0;
        S = 0;
    }
    NatFraction(int x, int y, int b, double d, double e)
    {
        // конструктор с параметрами
        a = x;
        b = b;
        c = c;
        S = d;
        V = e;
    }

    void set();
    void get();
    void display();
    void Area();
    void Volume();
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
    cout << "parallelepiped area: " << S << endl;
    cout << "parallelepiped volume: " << V << endl;
}

void NatFraction::Area()
{ // Площадь параллелепипеда
    S = 2 * (a * b + a * c + b * c);
}

void NatFraction::Volume()
{ // Объём параллелепипеда
    V = a * b * c;
}

main()
{
    NatFraction n1;
    double result;
    n1.set();
    n1.Area();
    n1.Volume();
    n1.display();
}