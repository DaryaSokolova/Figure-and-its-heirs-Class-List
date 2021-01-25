#include "Figure.h"
#include "Triangle.h"
#include <iostream>
#include <string>

using namespace std;

//конструктор
Triangle::Triangle(int a1, int a2, int a3) : A1(a1), A2(a2), A3(a3) 
{ 
    if ((a1 > 0) && (a2 > 0) && (a3 > 0)) //у треугольника не может быть отрицательный длин сторон
    {
        Status = OK;
        A1 = a1;
        A2 = a2;
        A3 = a3;
    }
    else Status = Err;
}

Triangle::~Triangle()
{
}

//геттеры
int Triangle::getA1()
{
    if (Status == OK) //рабоать можем только с правильно созданным треугольником
    {
        return A1;
    }
    else return -1;
}

int Triangle::getA2()
{
    if (Status == OK)
    {
        return A2;
    }
    else return -1;
}

int Triangle::getA3()
{
    if (Status == OK)
    {
        return A3;
    }
    else return -1;
}

bool Triangle::getStatus()
{
    return Status;
}

//сеттеры
bool Triangle::setA1(int a1)
{
    if (Status == OK)
    {
        if (a1 <= 0)
        {
            Status = Err;
            return false;
        }
        else 
        {
            A1 = a1;
            return true;
        }
    }
    else return false;
}

bool Triangle::setA2(int a2)
{
    if (Status == OK)
    {
        if (a2 <= 0)
        {
            Status = Err;
            return false;
        }
        else
        {
            A2 = a2;
            return true;
        }
    }
    else return false;
}

bool Triangle::setA3(int a3)
{
    if (Status == OK)
    {
        if (a3 <= 0)
        {
            Status = Err;
            return false;
        }
        else
        {
            A3 = a3;
            return true;
        }
    }
    else return false;
}

//ввод данных
void Triangle::NewObj()
{
    if (Status == OK)
    {
        cout << "Введите значения для Треугольника:" << endl;
        cout << "A1=";
        int a;
        cin >> a;
        setA1(a);

        cout << "A2=";
        int b;
        cin >> b;
        setA2(b);

        cout << "A3=";
        int c;
        cin >> c;
        setA3(c);
    }
    else cout << "Объект неправильно создан!" << endl;
}

//площадь
int Triangle::getSquare()
{
    if (Status == OK)
    {
        double p = (A1 + A2 + A3) / 2;
        return sqrt(p * (p - A1) * (p - A2) * (p - A3));
    }
    else return -1;
}

//периметр
int Triangle::getPerimeter()
{
    if (Status == OK)
    {
        return A1 + A2 + A3;
    }
    else return -1;
}


//вывод данных
string Triangle::showFigureType()
{
    if (Status == OK) //выводим информацию только о праивльно созданном треугольнике
    {
        return "Triangle, A1= " + to_string(A1)
            + ", A2= " + to_string(A2) + ", A3 = "
            + to_string(A3) + ", Square="
            + to_string(getSquare())
            + ", Perimeter="
            + to_string(getPerimeter());
    }
    else return "";
}