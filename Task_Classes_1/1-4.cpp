/*Класс – строка символов. Методы класса – расчет длины строки и количества слов.
Поля класса – строка, длина строки, кол–во слов в строке.  */
#include <iostream>
#include <math.h>
#include <string>
using namespace std;
class NatFraction
{
    string stt;
    int L, Words;

public:
    NatFraction()
    {
        // Базовый конструктор
        L = 0;
        Words = 0;
        stt = "";
    }
    NatFraction(int r, int i, string s)
    {
        // конструктор с параметрами
        L = r;
        Words = i;
        stt = s;
    }
    void set();
    void get();
    void display();
    void StrLength();
    void StrWords();
};

void NatFraction::set()
{ // Метод присвоения
    cout << "Enter string: ";
    getline(cin >> ws, stt);
}

void NatFraction::get()
{
    cout << "The string is: " << stt << endl;
}

void NatFraction::display()
{
    cout << "string = " << stt << endl;
    cout << "length = " << L << endl;
    cout << "words = " << Words << endl;
}

void NatFraction::StrLength()
{
    L = stt.length();
}

void NatFraction::StrWords()
{
    bool inSpaces = true;
    for (int i = 0; i < L; i++)
    {
        if (isspace(stt[i]))
        {
            Words++;
        }
    }
    Words++;
}

main()
{
    NatFraction n1;
    double result;
    n1.set();
    n1.StrLength();
    n1.StrWords();
    n1.display();
}