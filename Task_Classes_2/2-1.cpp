/*Задание 2-1
Номинал купюры (1, 2, 5, 10 и т.д.)
Количество купюр
Вычислить сумму купюр

Задание 3-1
Стоимость одного евро (€) в рублях
Стоимость купюр в евро*/
#include <iostream>
#include <cmath>
#include <string>
#define pi 3.1415926535

using namespace std;

class Banknotes
{
protected:

    int Nom, Am;

public:
    Banknotes()
    {
        // Базовый конструктор
        Nom = 0;
        Am = 0;
    }
    Banknotes(int x, int y)
    {
        // конструктор с параметрами
        Nom = x;
        Am = y;
    }

    void set();
    string display();
    int Sum();
};

void Banknotes::set()
{ // Метод присвоения
    cout << "Banknote denomination: ";
    cin >> Nom;
    cout << "Number of banknotes: ";
    cin >> Am;
}

string Banknotes::display()
{ // функция формирования строки с информацией об объекте
    string disp = " Banknotes - " + to_string(Am) + " of " + to_string(Nom);
    return disp;
}

int Banknotes::Sum()
{ // функция обработки значений полей по индивидуальному варианту
    return Am * Nom;
}

class Euro : public Banknotes
{
protected:

    double eu;

public:
    Euro()
    { // Конструктор по умолчанию
        eu = 0;
    }

    Euro(int x, int y, double eur) : Banknotes(x, y)
    {
        eu = eur;
    }

    void sett()
    { // Метод присвоения
        cout << "Euro price(rub): ";
        cin >> eu;
    }

    double Banknotes_in_Euro()
    { // Функция обработки данных
        return Sum() / eu;
    }
};

main()
{
    Euro n1;
    n1.set();
    n1.sett();
    cout << n1.display() << endl;
    cout << "Total: " << n1.Sum() << " (rub)" << endl;
    cout << "Total: " << n1.Banknotes_in_Euro() << " (euro)" << endl;
}