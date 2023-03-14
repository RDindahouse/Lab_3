/*Класс – натуральная дробь. Методы класса – сумма, разность, произведение, частное
натуральных дробей. Поля класса – числитель и знаменатель дроби.  */
#include <iostream>
#include <math.h>
using namespace std;
class NatFraction
{
    int nom, denom;

public:
    NatFraction()
    {
        // Базовый конструктор
        nom = 0;
        denom = 0;
    }
    NatFraction(int r, int i)
    {
        // конструктор с параметрами
        nom = r;
        denom = i;
    }
    void set();
    void get();
    friend double add(NatFraction, NatFraction);
    friend double sub(NatFraction, NatFraction);
    friend double mult(NatFraction, NatFraction);
    friend double div(NatFraction, NatFraction);
};
void NatFraction::set()
{ // Метод присвоения
    cout << "Enter nominator: ";
    cin >> nom;
    do
    {
        cout << "Enter denominator: ";
        cin >> denom;
    } while (this->nom % this->denom != 0); // По факту единственное отличие от предыдущей программы
}
void NatFraction::get()
{
    cout << "The number is: " << nom / denom << endl;
}
double add(NatFraction c1, NatFraction c2)
{ // Метод сложения десятичных дробей
    double res;
    res = (c1.nom / c1.denom) + (c2.nom / c2.denom);
    return res;
}
double sub(NatFraction c1, NatFraction c2)
{ // Метод вычитания десятичных дробей
    double res;
    res = (c1.nom / c1.denom) - (c2.nom / c2.denom);
    return res;
}
double mult(NatFraction c1, NatFraction c2)
{ // Метод умножения десятичных дробей
    double res;
    res = (c1.nom / c1.denom) * (c2.nom / c2.denom);
    return res;
}
double div(NatFraction c1, NatFraction c2)
{ // Метод деления десятичных дробей
    double res;
    res = (c1.nom / c1.denom) / (c2.nom / c2.denom);
    return res;
}
main()
{
    NatFraction n1, n2;
    double result;
    n1.set();
    n2.set();
    result = add(n1, n2);
    cout << "n1 + n2 = " << result << endl;
    result = sub(n1, n2);
    cout << "n1 - n2 = " << result << endl;
    result = mult(n1, n2);
    cout << "n1 * n2 = " << result << endl;
    result = div(n1, n2);
    cout << "n1 / n2 = " << result << endl;
}