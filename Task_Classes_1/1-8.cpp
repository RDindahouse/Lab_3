/*Класс – шар. Методы – расчет площади и объема шара. Поля – координаты центра
( x , y , z), радиус шара.*/
#include <iostream>
#include <cmath>
#define pi 3.1415926535
using namespace std;
class NatFraction
{
    int x, y, z;
    double R, S, V;

public:
    NatFraction()
    {
        // Базовый конструктор
        x = 0;
        y = 0;
        z = 0;
        R = 0;
        S = 0;
        V = 0;
    }
    NatFraction(int a, int b, int c, double d, double e, double f)
    {
        // конструктор с параметрами
        x = a;
        y = b;
        z = c;
        R = d;
        S = e;
        V = f;
    }

    void set();
    void get();
    void display();
    void Area();
    void Volume();
};

void NatFraction::set()
{ // Метод присвоения
    cout << "x: ";
    cin >> x;
    cout << "y: ";
    cin >> y;
    cout << "z: ";
    cin >> z;
    cout << "radius: ";
    cin >> R;
}

void NatFraction::get()
{
    cout << "The number is: " << x << endl;
}

void NatFraction::display()
{
    cout << "sphere center coordinates: (" << x << "," << y << "," << z << ")" << endl;
    cout << "circle area: " << S << endl;
    cout << "circle volume: " << V << endl;
}

void NatFraction::Area()
{ // Площадь шара
    S = 4 * pi * pow(R, 2);
}

void NatFraction::Volume()
{ // Объём шара
    V = 0.25 * (pi * pow(R, 3));
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