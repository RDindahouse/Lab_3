/*Задание 2-3
Цена товара
Количество единиц товара
Вычислить общую стоимость товара

Задание 3-3
Год выпуска товара
Сколько лет товару*/
#include <iostream>
#include <cmath>
#include <string>
#define pi 3.1415926535

using namespace std;

class Goods
{
protected:

    double Price;
    int Am;

public:
    Goods()
    {
        // Базовый конструктор
        Price = 0;
        Am = 0;
    }
    Goods(double x, int y)
    {
        // конструктор с параметрами
        Price = x;
        Am = y;
    }

    void set();
    string display();
    double Sum();
};

void Goods::set()
{ // Метод присвоения
    cout << "Goods price: ";
    cin >> Price;
    cout << "Goods amount: ";
    cin >> Am;
}

string Goods::display()
{ // функция формирования строки с информацией об объекте
    string disp = " Goods amount - " + to_string(Am) + " For " + to_string(Price) + "$";
    return disp;
}

double Goods::Sum()
{ // функция обработки значений полей по индивидуальному варианту
    return Am * Price;
}

class Year : public Goods
{
protected:

    double ye;

public:
    Year()
    { // Конструктор по умолчанию
        ye = 0;
    }

    Year(int x, int y, double eur) : Goods(x, y)
    {
        ye = eur;
    }

    void sett()
    { // Метод присвоения
        cout << "year of production: ";
        cin >> ye;
    }

    double Aging()
    { // Функция обработки данных
        return 2023 - ye;
    }
};

main()
{
    Year n1;
    n1.set();
    n1.sett();
    cout << n1.display() << endl;
    cout << "Total: " << n1.Sum() << "$" << endl;
    cout << "goods age: " << n1.Aging() << " (years)" << endl;
}