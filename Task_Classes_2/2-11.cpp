/*Задание 2-11
Целое число – нижнее основание трапеции
Целое число – верхнее основание трапеции
Вычислить полусумму оснований трапеции

Задание 3-11
Высота трапеции 
Площадь трапеции*/
#include <iostream>
#include <cmath>
#include <string>
#define pi 3.1415926535

using namespace std;

class Based
{
protected:

    int ub, lb;

public:
    Based()
    {
        // Базовый конструктор
        ub = 0;
        lb = 0;
    }
    Based(int x, int y)
    {
        // конструктор с параметрами
        ub = x;
        lb = y;
    }

    void set();
    string display();
    double pSum();
};

void Based::set()
{ // Метод присвоения
    cout << "upper base: ";
    cin >> ub;
    cout << "lower base: ";
    cin >> lb;
}

string Based::display()
{ // функция формирования строки с информацией об объекте
    string disp = "upper base - " + to_string(ub) + "; lower base - " + to_string(lb) + ";";
    return disp;
}

double Based::pSum()
{ // функция обработки значений полей по индивидуальному варианту
    return (ub + lb) / 2;
}

class TraS : public Based
{
protected:
    double C;

public:
    TraS()
    { // Конструктор по умолчанию
        C = 0;
    }

    TraS(int x, int y, double eur) : Based(x, y)
    {
        C = eur;
    }

    void sett()
    { // Метод присвоения
        cout << "Trapezoid height: ";
        cin >> C;
    }

    double TrS()
    { // Функция обработки данных
        return pSum() * C;
    }
};

main()
{
    TraS n1;
    n1.set();
    n1.sett();
    cout << n1.display() << endl;
    cout << "Half sum of bases: " << n1.pSum() << endl;
    cout << "Trapezond S: " << n1.TrS() << endl;
}