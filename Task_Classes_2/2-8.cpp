/*Задание 2-8
Вещественное число – первый катет прямоугольного треугольника
Вещественное число – второй катет прямоугольного треугольника
Вычислить площадь прямоугольного треугольник

Задание 3-8
Высота призмы
Объем призмы, у которой в основании прямоугольный треугольник*/
#include <iostream>
#include <cmath>
#include <string>
#define pi 3.1415926535

using namespace std;

class TriangleS
{
protected:
    double cat1, cat2;

public:
    TriangleS()
    {
        // Базовый конструктор
        cat1 = 0;
        cat2 = 0;
    }
    TriangleS(double x, double y)
    {
        // конструктор с параметрами
        cat1 = x;
        cat2 = y;
    }

    void set();
    string display();
    double Area();
};

void TriangleS::set()
{ // Метод присвоения
    cout << "1 leg: ";
    cin >> cat1;
    cout << "2 leg: ";
    cin >> cat2;
}

string TriangleS::display()
{ // функция формирования строки с информацией об объекте
    string disp = "1 leg - " + to_string(cat1) + "; 2 leg - " + to_string(cat2) + ";";
    return disp;
}

double TriangleS::Area()
{ // функция обработки значений полей по индивидуальному варианту
    return 0.5 * (cat1 * cat2);
}

class Prism : public TriangleS
{
protected:
    double C;

public:
    Prism()
    { // Конструктор по умолчанию
        C = 0;
    }

    Prism(int x, int y, double eur) : TriangleS(x, y)
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
        return C * Area();
    }
};

main()
{
    Prism n1;
    n1.set();
    n1.sett();
    cout << n1.display() << endl;
    cout << "Triangle area: " << n1.Area() << endl;
    cout << "Prism volume: " << n1.PrismV() << endl;
}