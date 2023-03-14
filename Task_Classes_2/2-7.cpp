/*Задание 2-7
Количество часов
Количество минут
Вычислить общее количество минут

Задание 3-7
Длительность выполнения одной операции в минутах
Сколько операций можно выполнить за указанное время*/
#include <iostream>
#include <cmath>
#include <string>
#define pi 3.1415926535

using namespace std;

class Time
{
protected:

    int hour, min;

public:
    Time()
    {
        // Базовый конструктор
        hour = 0;
        min = 0;
    }
    Time(int x, int y)
    {
        // конструктор с параметрами
        hour = x;
        min = y;
    }

    void set();
    string display();
    double Sum();
};

void Time::set()
{ // Метод присвоения
    cout << "Hours: ";
    cin >> hour;
    cout << "Minutes: ";
    cin >> min;
}

string Time::display()
{ // функция формирования строки с информацией об объекте
    string disp = "hours - " + to_string(hour) + "; minutes " + to_string(min) + ";";
    return disp;
}

double Time::Sum()
{ // функция обработки значений полей по индивидуальному варианту
    return (hour * 60) + min;
}

class Operations : public Time
{
protected:

    int C;

public:
    Operations()
    { // Конструктор по умолчанию
        C = 0;
    }

    Operations(int x, int y, double eur) : Time(x, y)
    {
        C = eur;
    }

    void sett()
    { // Метод присвоения
        cout << "minutes for 1 operation: ";
        cin >> C;
    }

    int fullpath()
    { // Функция обработки данных
        return Sum() / C;
    }
};

main()
{
    Operations n1;
    n1.set();
    n1.sett();
    cout << n1.display() << endl;
    cout << "Total: " << n1.Sum() << " minutes." << endl;
    cout << "Maximum operations: " << n1.fullpath() << endl;
}