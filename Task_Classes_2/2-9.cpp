/*Задание 2-9
Вещественное число – скорость движения (м/cек)
Целое число – время движения в минутах
Вычислить пройденное расстояние (в метрах)

Задание 3-9
Сила, приложенная к движущемуся объекту
Количество работы, выполненной при прямолинейном перемещении объекта*/
#include <iostream>
#include <cmath>
#include <string>
#define pi 3.1415926535

using namespace std;

class Path
{
protected:
    double speed;
    int min;

public:
    Path()
    {
        // Базовый конструктор
        speed = 0;
        min = 0;
    }
    Path(double x, int y)
    {
        // конструктор с параметрами
        speed = x;
        min = y;
    }

    void set();
    string display();
    double Dist();
};

void Path::set()
{ // Метод присвоения
    cout << "Speed (m/sec): ";
    cin >> speed;
    cout << "Time (min): ";
    cin >> min;
}

string Path::display()
{ // функция формирования строки с информацией об объекте
    string disp = "speed - " + to_string(speed) + " m/sec; time " + to_string(min) + "min;";
    return disp;
}

double Path::Dist()
{ // функция обработки значений полей по индивидуальному варианту
    return (min * 60) * speed;
}

class Force : public Path
{
protected:
    double C;

public:
    Force()
    { // Конструктор по умолчанию
        C = 0;
    }

    Force(int x, int y, double eur) : Path(x, y)
    {
        C = eur;
    }

    void sett()
    { // Метод присвоения
        cout << "Force: ";
        cin >> C;
    }

    double FAmount()
    { // Функция обработки данных
        return C * Dist();
    }
};

main()
{
    Force n1;
    n1.set();
    n1.sett();
    cout << n1.display() << endl;
    cout << "Total: " << n1.Dist() << " seconds." << endl;
    cout << "Total work amount: " << n1.FAmount() << endl;
}