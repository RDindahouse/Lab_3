/*Задание 2-12
Вещественное число – первый катет прямоугольного треугольника
Вещественное число – второй катет прямоугольного треугольника
Вычислить тангенс угла α, противолежащего второму катету прямоугольного треугольника

Задание 3-12
Значение угла β в радианах 
Разность между заданным углом β и углом α в прямоугольном треугольнике*/
#include <iostream>
#include <cmath>
#include <string>
#define pi 3.1415926535

using namespace std;

class TriAngle
{
protected:

    double cat1, cat2;

public:
    TriAngle()
    {
        // Базовый конструктор
        cat1 = 0;
        cat2 = 0;
    }
    TriAngle(double x, double y)
    {
        // конструктор с параметрами
        cat1 = x;
        cat2 = y;
    }

    void set();
    string display();
    double tang();
};

void TriAngle::set()
{ // Метод присвоения
    cout << "1 leg: ";
    cin >> cat1;
    cout << "2 leg: ";
    cin >> cat2;
}

string TriAngle::display()
{ // функция формирования строки с информацией об объекте
    string disp = "1 leg - " + to_string(cat1) + "; 2 leg - " + to_string(cat2) + ";";
    return disp;
}

double TriAngle::tang()
{ // функция обработки значений полей по индивидуальному варианту
    return cat2 / cat1;
}

class Angle : public TriAngle
{
protected:
    double C;

public:
    Angle()
    { // Конструктор по умолчанию
        C = 0;
    }

    Angle(int x, int y, double eur) : TriAngle(x, y)
    {
        C = eur;
    }

    void sett()
    { // Метод присвоения
        cout << "angle b: ";
        cin >> C;
    }

    double Trangle()
    { // Функция обработки данных
        return 90 - C;
    }
};

main()
{
    Angle n1;
    n1.set();
    n1.sett();
    cout << n1.display() << endl;
    cout << "tangent of an angle: " << n1.tang() << endl;
    cout << "angle a: " << n1.Trangle() << endl;
}