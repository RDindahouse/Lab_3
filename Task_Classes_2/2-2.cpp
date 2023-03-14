/*Задание 2-2
Номинал монет (1, 2, 5, 10 и т.д.)
Количество монет
Вычислить сумму монет

Задание 3-2
Стоимость одного $ (доллара) в рублях
Стоимость монет в центах*/
#include <iostream>
#include <cmath>
#include <string>
#define pi 3.1415926535

using namespace std;

class Coins
{
protected:

    int Nom, Am;

public:
    Coins()
    {
        // Базовый конструктор
        Nom = 0;
        Am = 0;
    }
    Coins(int x, int y)
    {
        // конструктор с параметрами
        Nom = x;
        Am = y;
    }

    void set();
    string display();
    int Sum();
};

void Coins::set()
{ // Метод присвоения
    cout << "Coin denomination: ";
    cin >> Nom;
    cout << "Number of coins: ";
    cin >> Am;
}

string Coins::display()
{ // функция формирования строки с информацией об объекте
    string disp = " Coins - " + to_string(Am) + " of " + to_string(Nom);
    return disp;
}

int Coins::Sum()
{ // функция обработки значений полей по индивидуальному варианту
    return Am * Nom;
}

class Dollar : public Coins
{
protected:

    double dol;

public:
    Dollar()
    { // Конструктор по умолчанию
        dol = 0;
    }

    Dollar(int x, int y, double eur) : Coins(x, y)
    {
        dol = eur;
    }

    void sett()
    { // Метод присвоения
        cout << "Dollar price(rub): ";
        cin >> dol;
    }

    double Coins_in_Dollar()
    { // Функция обработки данных
        return Sum() / dol;
    }
};

main()
{
    Dollar n1;
    n1.set();
    n1.sett();
    cout << n1.display() << endl;
    cout << "Total: " << n1.Sum() << endl;
    cout << "Total: " << n1.Coins_in_Dollar() << " (dollar)" << endl;
}