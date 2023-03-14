/*Задание 2-4
Калорийность 100 г продукта
Вес продукта в граммах
Вычислить общую калорийность продукта

Задание 3-4
Количество витамина С в 1 грамме продукта
Количество витамина С в продукте*/
#include <iostream>
#include <cmath>
#include <string>
#define pi 3.1415926535

using namespace std;

class Calories
{
protected:

    double Cal;
    int Am;

public:
    Calories()
    {
        // Базовый конструктор
        Cal = 0;
        Am = 0;
    }
    Calories(double x, int y)
    {
        // конструктор с параметрами
        Cal = x;
        Am = y;
    }

    void set();
    string display();
    double Sum();
};

void Calories::set()
{ // Метод присвоения
    cout << "Calories (100 grams): ";
    cin >> Cal;
    cout << "Food amount (grams): ";
    cin >> Am;
}

string Calories::display()
{ // функция формирования строки с информацией об объекте
    string disp = "food - " + to_string(Am) + " with " + to_string(Cal) + " calories per 100 grams";
    return disp;
}

double Calories::Sum()
{ // функция обработки значений полей по индивидуальному варианту
    return Am * Cal / 100;
}

class VitC : public Calories
{
protected:

    double C;

public:
    VitC()
    { // Конструктор по умолчанию
        C = 0;
    }

    VitC(int x, int y, double eur) : Calories(x, y)
    {
        C = eur;
    }

    void sett()
    { // Метод присвоения
        cout << "Vitamin C in 1 gramm: ";
        cin >> C;
    }

    double CAmount()
    { // Функция обработки данных
        return C * Am;
    }
};

main()
{
    VitC n1;
    n1.set();
    n1.sett();
    cout << n1.display() << endl;
    cout << "Total: " << n1.Sum() << " calories" << endl;
    cout << "Vitamin C: " << n1.CAmount() << endl;
}