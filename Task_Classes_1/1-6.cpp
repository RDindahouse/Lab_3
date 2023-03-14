/*Класс – окружность. Методы – расчет длины окружности и ее площади.
Поля класса – координаты центра, радиус, длина, площадь окружности. */
#include <iostream>
#include <cmath>
#define pi 3.1415926535
using namespace std;
class NatFraction
{
    int C1, C2;
    double R, L, S;

public:
    NatFraction()
    {
        // Базовый конструктор
        C1 = 0;
        C2 = 0;
        R = 0;
        L = 0;
        S = 0;
    }
    NatFraction(int a, int b, double c, double d, double e)
    {
        // конструктор с параметрами
        C1 = a;
        C2 = b;
        R = c;
        L = d;
        S = e;
    }

    void set();
    void get();
    void display();
    void Area();
    void Length();
};

void NatFraction::set()
{ // Метод присвоения
    cout << "x1: ";
    cin >> C1;
    cout << "y1: ";
    cin >> C2;
    cout << "radius: ";
    cin >> R;
}

void NatFraction::get()
{
    cout << "The number is: " << C1 << endl;
}

void NatFraction::display()
{
    cout << "circle center coordinates: (" << C1 << "," << C2 << ")" << endl;
    cout << "circle area: " << S << endl;
    cout << "circle length: " << L << endl;
}

void NatFraction::Area()
{ // Середина отрезка
    S = pi * pow(R, 2);
}

void NatFraction::Length()
{ // Длина отрезка
    L = 2 * pi * R;
}

main()
{
    NatFraction n1;
    double result;
    n1.set();
    n1.Area();
    n1.Length();
    n1.display();
}