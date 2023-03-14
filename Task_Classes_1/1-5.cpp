// Класс – отрезок. Методы – расчет середины и длины. Поля класса – координаты начала, конца, середины и длина.
#include <iostream>
#include <math.h>
using namespace std;
class NatFraction
{
    int x1, y1, x2, y2, xm, ym, L;

public:
    NatFraction()
    {
        // Базовый конструктор
        x1 = 0;
        y1 = 0;
        x2 = 0;
        y2 = 0;
        xm = 0;
        ym = 0;
        L = 0;
    }
    NatFraction(int a, int b, int c, int d)
    {
        // конструктор с параметрами
        x1 = a;
        y1 = b;
        x2 = c;
        y2 = d;
    }

    void set();
    void get();
    void display();
    void Middle();
    void Length();
};

void NatFraction::set()
{ // Метод присвоения
    cout << "x1: ";
    cin >> x1;
    cout << "y1: ";
    cin >> y1;
    cout << "x2: ";
    cin >> x2;
    cout << "y2: ";
    cin >> y2;
}

void NatFraction::get()
{
    cout << "The number is: " << x1 << endl;
}

void NatFraction::display()
{
    cout << "segment coordinates: (" << x1 << "," << y1 << ")"
         << "(" << x2 << "," << y2 << ")" << endl;
    cout << "segment middle: (" << xm << "," << ym << ")" << endl;
    cout << "segment length: " << L << endl;
}

void NatFraction::Middle()
{ // Середина отрезка
    xm = (x1 + x2) / 2;
    ym = (y1 + y2) / 2;
}

void NatFraction::Length()
{ // Длина отрезка
    L = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

main()
{
    NatFraction n1;
    double result;
    n1.set();
    n1.Middle();
    n1.Length();
    n1.display();
}