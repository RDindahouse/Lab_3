/*Задание 2-10
Вещественное число – первый катет прямоугольного треугольника
Вещественное число – второй катет прямоугольного треугольника
Вычислить длину гипотенузы прямоугольного треугольника

Задание 3-10
Высота призмы
Сумму всех ребер призмы, у которой в основании прямоугольный треугольник*/
#include <iostream>
#include <cmath>
#include <string>
#define pi 3.1415926535

using namespace std;

class TriangleH
{
protected:
    double cat1, cat2;

public:
    TriangleH()
    {
        // Базовый конструктор
        cat1 = 0;
        cat2 = 0;
    }
    TriangleH(double x, double y)
    {
        // конструктор с параметрами
        cat1 = x;
        cat2 = y;
    }

    void set();
    string display();
    double hypo();
};

void TriangleH::set()
{ // Метод присвоения
    cout << "1 leg: ";
    cin >> cat1;
    cout << "2 leg: ";
    cin >> cat2;
}

string TriangleH::display()
{ // функция формирования строки с информацией об объекте
    string disp = "1 leg - " + to_string(cat1) + "; 2 leg - " + to_string(cat2) + ";";
    return disp;
}

double TriangleH::hypo()
{ // функция обработки значений полей по индивидуальному варианту
    return sqrt(pow(cat1, 2) + pow(cat2, 2));
}

class Prism : public TriangleH
{
protected:
    double C;

public:
    Prism()
    { // Конструктор по умолчанию
        C = 0;
    }

    Prism(int x, int y, double eur) : TriangleH(x, y)
    {
        C = eur;
    }

    void sett()
    { // Метод присвоения
        cout << "Prism height: ";
        cin >> C;
    }

    double PrismV()
    { // Функция обработки данных
        return (C * 3) + (hypo() + cat1 + cat2) * 2;
    }
};

main()
{
    Prism n1;
    n1.set();
    n1.sett();
    cout << n1.display() << endl;
    cout << "Hipotenuse: " << n1.hypo() << endl;
    cout << "Total cats amount: " << n1.PrismV() << endl;
}