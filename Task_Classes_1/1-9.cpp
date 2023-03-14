/*Класс – конус. Методы – расчет площади и объема конуса. Поля – радиус основания,
высота конуса. */
#include <iostream>
#include <cmath>
#define pi 3.1415926535
using namespace std;
class NatFraction
{
    double R, h, S, V;

public:
    NatFraction()
    {
        // Базовый конструктор
        R = 0;
        h = 0;
        S = 0;
        V = 0;
    }
    NatFraction(double a, double b, double c, double d)
    {
        // конструктор с параметрами
        R = a;
        h = b;
        S = c;
        V = d;
    }

    void set();
    void get();
    void display();
    void Area();
    void Volume();
};

void NatFraction::set()
{ // Метод присвоения
    cout << "radius: ";
    cin >> R;
    cout << "height: ";
    cin >> h;
}

void NatFraction::get()
{
    cout << "The number is: " << R << endl;
}

void NatFraction::display()
{
    cout << "Cone area: " << S << endl;
    cout << "Cone volume: " << V << endl;
}

void NatFraction::Area()
{ // Площадь шара
    S = pi * R * (R + sqrt(pow(R, 2) + pow(h, 2)));
}

void NatFraction::Volume()
{ // Объём шара
    V = (pi * pow(R, 2) * h) / 3;
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