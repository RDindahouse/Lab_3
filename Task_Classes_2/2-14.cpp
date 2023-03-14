/*Задание 2-14
Вещественное число
Вещественное число
Вычислить квадратный корень из произведения чисел

Задание 3-14
Вещественное число – z
Вычислить выражение xy + z, где x и y – поля класса-родителя*/
#include <iostream>
#include <cmath>
#include <string>
#define pi 3.1415926535

using namespace std;

class SqrtMult
{
protected:

    double n1, n2;

public:
    SqrtMult()
    {
        // Базовый конструктор
        n1 = 0;
        n2 = 0;
    }
    SqrtMult(double x, double y)
    {
        // конструктор с параметрами
        n1 = x;
        n2 = y;
    }

    void set();
    string display();
    double srMult();
};

void SqrtMult::set()
{ // Метод присвоения
    cout << "number 1: ";
    cin >> n1;
    cout << "number 2: ";
    cin >> n2;
}

string SqrtMult::display()
{ // функция формирования строки с информацией об объекте
    string disp = "first number - " + to_string(n1) + "; second number - " + to_string(n2) + ";";
    return disp;
}

double SqrtMult::srMult()
{ // функция обработки значений полей по индивидуальному варианту
    return sqrt(n1 * n2);
}

class Addi : public SqrtMult
{
protected:
    double C;

public:
    Addi()
    { // Конструктор по умолчанию
        C = 0;
    }

    Addi(int x, int y, double eur) : SqrtMult(x, y)
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
        return C + n1 * n2;
    }
};

main()
{
    Addi n1;
    n1.set();
    n1.sett();
    cout << n1.display() << endl;
    cout << "square root of a product of numbers: " << n1.srMult() << endl;
    cout << "z * xy: " << n1.add() << endl;
}