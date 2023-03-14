/*Класс – целочисленный вектор фиксированной размерности. Методы – сравнение
двух векторов на равенство, вычисление длины вектора. Поля – размерность вектора,
координаты вектора. */
#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;

class Vector
{
private:
    int x;
    int y;
    int z;
    double L;

public:
    Vector() : x(0), y(0), z(0)
    {
    }
    Vector(int vx, int vy, int vz) : x(vx), y(vy), z(vz)
    {
    }
    void showVector()
    {
        cout << x << ":" << y << ":" << z << "";
    }
    void showProizVector()
    {
        cout << x + y + z << "";
    }

    bool equal(Vector, Vector);
    double length();
};

// Сравнение на равенство
bool Vector ::equal(Vector d1, Vector d2)
{
    if (d1.x == d2.x && d1.y == d2.y && d1.z == d2.z)
    {
        return true;
    }
    else
    {
        return false;
    }
}

// Вычисление длины вектора
double Vector ::length()
{
    L = sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
    return L;
}

int main()
{
    int x, y, z, i, j, k;
    Vector a, b, c;
    cout << "vector a (x, y, z): ";
    cin >> x >> y >> z;
    cout << "vector b (x, y, z): ";
    cin >> i >> j >> k;
    a = Vector(x, y, z);
    b = Vector(i, j, k);

    cout << "Are equal - " << boolalpha << a.equal(a, b) << endl;

    cout << "vector a length -" << a.length() << endl;
    cout << "vector b length -" << b.length() << endl;

    cin.get();
    cin.get();
    return 0;
}