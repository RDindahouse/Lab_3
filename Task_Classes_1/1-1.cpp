/*Класс – комплексное число. Методы – сумма, разность, произведение комплексных
чисел. Поля – действительная и мнимая часть комплексного числа. */
#include <iostream>
#include <math.h>
using namespace std;
class complex
{
  int real, img;

public:
  complex()
  {
    // Базовый конструктор
    real = 0;
    img = 0;
  }
  complex(int r, int i)
  {
    // конструктор с параметрами
    real = r;
    img = i;
  }
  void set();
  void get();
  void display();
  friend complex add(complex, complex);
  friend complex sub(complex, complex);
  friend complex mult(complex, complex);
};
void complex::set()
{ // Метод присвоения комплексных чисел
  cout << "Enter Real part: ";
  cin >> real;
  cout << "Enter Imaginary Part: ";
  cin >> img;
}
void complex::get()
{
  cout << "The complex number is: " << real << "+" << img << "i" << endl;
}
void complex::display()
{ // Метод вывода комплексных чисел на экран
  if (img < 0)
    if (img == -1)
      cout << "The complex number is: " << real << "-i" << endl;
    else
      cout << "The complex number is: " << real << img << "i" << endl;
  else if (img == 1)
    cout << "The complex number is: " << real << " + i" << endl;
  else
    cout << "The complex number is: " << real << " + " << img << "i" << endl;
}
complex add(complex c1, complex c2)
{ // Метод сложения комплексных чисел
  complex res;
  res.real = c1.real + c2.real;
  res.img = c1.img + c2.img;
  return res;
}
complex sub(complex c1, complex c2)
{ // Метод вычитания комплексных чисел
  complex res;
  res.real = c1.real - c2.real;
  res.img = c1.img - c2.img;
  return res;
}
complex mult(complex c1, complex c2)
{ // Метод умножения комлексных чисел
  complex res;
  res.real = c1.real * c2.real - c1.img * c2.img;
  res.img = c1.img * c2.real + c1.real * c2.img;
  return res;
}
main()
{
  complex n1, n2;
  complex result;
  n1.set();
  n2.set();
  result = add(n1, n2);
  result.display();
  result = sub(n1, n2);
  result.display();
  result = mult(n1, n2);
  result.display();
}