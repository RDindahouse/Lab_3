/*Класс – студент. Методы – определение среднего балла и решение о начислении стипендии.
Поля – ФИО студента, оценки по дисциплинам в текущую сессию, средний балл.*/
#include <iostream>
#include <cmath>
#include <string>
#define pi 3.1415926535
using namespace std;
class NatFraction
{
    string Name;
    int Grades[10];
    double GPA;
    bool scholarship;

public:
    NatFraction()
    {
        // Базовый конструктор
        GPA = 0;
        scholarship = false;
        Name = "";
    }
    NatFraction(double x, bool y, string b)
    {
        // конструктор с параметрами
        GPA = x;
        scholarship = y;
        Name = b;
    }

    void set();
    void get();
    void display();
    void Gpa_count();
    void Scholarchip_count();
};

void NatFraction::set()
{ // Метод присвоения
    cout << "Enter name: ";
    getline(cin >> ws, Name);
    cout << "Enter grades (10):" << endl;
    for (int i = 1; i <= 10; i++)
    {
        cout << i << ". ";
        cin >> Grades[i];
    }
}

void NatFraction::get()
{
    cout << "The number is: " << GPA << endl;
}

void NatFraction::display()
{
    cout << "Student name: " << Name << endl;
    cout << "GPA: " << GPA << endl;
    cout << "Has a scholarship (GPA >= 4): " << boolalpha << scholarship << endl;
}

void NatFraction::Gpa_count()
{ // Площадь параллелепипеда
    double sum = 0;
    for (int i = 1; i <= 10; i++)
    {
        sum += Grades[i];
    }
    GPA = sum / 10;
}

void NatFraction::Scholarchip_count()
{ // Периметр треугольника
    if (GPA >= 4)
    {
        scholarship = true;
    }
    else
    {
        scholarship = false;
    }
}

main()
{
    NatFraction n1;
    double result;
    n1.set();
    n1.Gpa_count();
    n1.Scholarchip_count();
    n1.display();
}