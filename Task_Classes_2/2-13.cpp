/*Задание 2-13
Вещественное число
Вещественное число
Вычислить полуразность чисел

Задание 3-13
Вещественное число – с 
Определить произведение полуразности чисел класса-родителя (a и b) на число с*/
#include <iostream>
#include <cmath>
#include <string>
#define pi 3.1415926535

using namespace std;

class HDiv
{
protected:

    double n1, n2;

public:
    HDiv()
    {
        // Базовый конструктор
        n1 = 0;
        n2 = 0;
    }
    HDiv(double x, double y)
    {
        // конструктор с параметрами
        n1 = x;
        n2 = y;
    }

    void set();
    string display();
    double pDiv();
};

void HDiv::set()
{ // Метод присвоения
    cout << "number 1: ";
    cin >> n1;
    cout << "number 2: ";
    cin >> n2;
}

string HDiv::display()
{ // функция формирования строки с информацией об объекте
    string disp = "first number - " + to_string(n1) + "; second number - " + to_string(n2) + ";";
    return disp;
}

double HDiv::pDiv()
{ // функция обработки значений полей по индивидуальному варианту
    return (n1 - n2) / 2;
}

class Cmult : public HDiv
{
protected:
    double C;

public:
    Cmult()
    { // Конструктор по умолчанию
        C = 0;
    }

    Cmult(int x, int y, double eur) : HDiv(x, y)
    {
        C = eur;
    }

    void sett()
    { // Метод присвоения
        cout << "C: ";
        cin >> C;
    }

    double mult()
    { // Функция обработки данных
        return C * pDiv();
    }
};

main()
{
    Cmult n1;
    n1.set();
    n1.sett();
    cout << n1.display() << endl;
    cout << "half-difference of numbers: " << n1.pDiv() << endl;
    cout << "C * (n1 - n2) / 2: " << n1.mult() << endl;
}