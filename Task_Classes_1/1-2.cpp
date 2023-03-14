/*Класс – десятичная дробь. Методы класса – сумма, разность, произведение, частное
десятичных дробей. Поля класса – целая и дробная часть числа. */
#include <iostream>
#include <math.h>
using namespace std;
class Fraction
{
   double nom, denom;

public:
   Fraction()
   {
      // Базовый конструктор
      nom = 0;
      denom = 0;
   }
   Fraction(int r, int i)
   {
      // конструктор с параметрами
      nom = r;
      denom = i;
   }
   void set();
   void get();
   void display();
   friend double add(Fraction, Fraction);
   friend double sub(Fraction, Fraction);
   friend double mult(Fraction, Fraction);
   friend double div(Fraction, Fraction);
};
void Fraction::set()
{ // Метод присвоения
   cout << "Enter nominator: ";
   cin >> nom;
   cout << "Enter denominator: ";
   cin >> denom;
}
void Fraction::get()
{
   cout << "The number is: " << nom / denom << endl;
}
double add(Fraction c1, Fraction c2)
{ // Метод сложения десятичных дробей
   double res;
   res = (c1.nom / c1.denom) + (c2.nom / c2.denom);
   return res;
}
double sub(Fraction c1, Fraction c2)
{ // Метод вычитания десятичных дробей
   double res;
   res = (c1.nom / c1.denom) - (c2.nom / c2.denom);
   return res;
}
double mult(Fraction c1, Fraction c2)
{ // Метод умножения десятичных дробей4
   double res;
   res = (c1.nom / c1.denom) * (c2.nom / c2.denom);
   return res;
}
double div(Fraction c1, Fraction c2)
{ // Метод деления десятичных дробей
   double res;
   res = (c1.nom / c1.denom) / (c2.nom / c2.denom);
   return res;
}
main()
{
   Fraction n1, n2;
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