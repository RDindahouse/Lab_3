/*Задание 2-5
Вещественное число – левая граница диапазона
Вещественное число – правая граница диапазона
Квадрат длины диапазона

Задание 3-5
Вещественное число х 
Проверить, принадлежит ли число х заданному диапазону*/
#include <iostream>
#include <cmath>
#include <string>
#define pi 3.1415926535

using namespace std;

class Rang
{
protected:

    double left, right;

public:
    Rang()
    {
        // Базовый конструктор
        left = 0;
        right = 0;
    }
    Rang(double x, double y)
    {
        // конструктор с параметрами
        left = x;
        right = y;
    }

    void set();
    string display();
    double square();
};

void Rang::set()
{ // Метод присвоения
    cout << "left end of range: ";
    cin >> left;
    cout << "right end of range: ";
    cin >> right;
}

string Rang::display()
{ // функция формирования строки с информацией об объекте
    string disp = "left end of range - " + to_string(left) + "; right end of range " + to_string(right);
    return disp;
}

double Rang::square()
{ // функция обработки значений полей по индивидуальному варианту
    double temp = right - left;
    return temp * temp;
}

class IsIn : public Rang
{
protected:

    double X;

public:
    IsIn()
    { // Конструктор по умолчанию
        X = 0;
    }

    IsIn(int x, int y, double eur) : Rang(x, y)
    {
        X = eur;
    }

    void sett()
    { // Метод присвоения
        cout << "X: ";
        cin >> X;
    }

    bool inrange()
    { // Функция обработки данных
        if (X >= left && X <= right) 
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

main()
{
    IsIn n1;
    n1.set();
    n1.sett();
    cout << n1.display() << endl;
    cout << "square of range length: " << n1.square() << endl;
    cout << "is x in range: " << boolalpha << n1.inrange() << endl;
}