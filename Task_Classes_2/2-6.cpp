/*Задание 2-6
Количество минут
Количество секунд
Вычислить общее количество секунд

Задание 3-6
Скорость движения объекта наблюдения (в м/сек)
Расстояние, пройденное объектом наблюдения*/
#include <iostream>
#include <cmath>
#include <string>
#define pi 3.1415926535

using namespace std;

class Time
{
protected:

    int sec, min;

public:
    Time()
    {
        // Базовый конструктор
        sec = 0;
        min = 0;
    }
    Time(int x, int y)
    {
        // конструктор с параметрами
        sec = x;
        min = y;
    }

    void set();
    string display();
    double Sum();
};

void Time::set()
{ // Метод присвоения
    cout << "Minunes: ";
    cin >> min;
    cout << "Seconds: ";
    cin >> sec;
}

string Time::display()
{ // функция формирования строки с информацией об объекте
    string disp = "minutes - " + to_string(min) + "; seconds " + to_string(sec) + ";";
    return disp;
}

double Time::Sum()
{ // функция обработки значений полей по индивидуальному варианту
    return (min * 60) + sec;
}

class Path : public Time
{
protected:

    double C;

public:
    Path()
    { // Конструктор по умолчанию
        C = 0;
    }

    Path(int x, int y, double eur) : Time(x, y)
    {
        C = eur;
    }

    void sett()
    { // Метод присвоения
        cout << "Speed (m/s): ";
        cin >> C;
    }

    double fullpath()
    { // Функция обработки данных
        return C * Sum();
    }
};

main()
{
    Path n1;
    n1.set();
    n1.sett();
    cout << n1.display() << endl;
    cout << "Total: " << n1.Sum() << " seconds." << endl;
    cout << "Distance travelled: " << n1.fullpath() << endl;
}