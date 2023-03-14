/*Задание 2-15
Целое число – х 
Целое число – y 
Вычислить целую часть от деления х на y

Задание 3-15
Вещественное число – z 
Вычислить выражение x/z + y/z, где x и y – поля класса-родителя*/
#include <iostream>
#include <cmath>
#include <string>
#define pi 3.1415926535

using namespace std;

class Div
{
protected:

    int n1, n2;

public:
    Div()
    {
        // Базовый конструктор
        n1 = 0;
        n2 = 0;
    }
    Div(int x, int y)
    {
        // конструктор с параметрами
        n1 = x;
        n2 = y;
    }

    void set();
    string display();
    double srMult();
};

void Div::set()
{ // Метод присвоения
    cout << "number 1: ";
    cin >> n1;
    cout << "number 2: ";
    cin >> n2;
}

string Div::display()
{ // функция формирования строки с информацией об объекте
    string disp = "first number - " + to_string(n1) + "; second number - " + to_string(n2) + ";";
    return disp;
}

double Div::srMult()
{ // функция обработки значений полей по индивидуальному варианту
    return n1 / n2;
}

class Addi : public Div
{
protected:
    double C;

public:
    Addi()
    { // Конструктор по умолчанию
        C = 0;
    }

    Addi(int x, int y, double eur) : Div(x, y)
    {
        C = eur;
    }

    void sett()
    { // Метод присвоения
        cout << "Z: ";
        cin >> C;
    }

    double add()
    { // Функция обработки данных
        return C / n1 + C / n2;
    }
};

main()
{
    Addi n1;
    n1.set();
    n1.sett();
    cout << n1.display() << endl;
    cout << "integer part of division: " << n1.srMult() << endl;
    cout << "z * xy: " << n1.add() << endl;
}