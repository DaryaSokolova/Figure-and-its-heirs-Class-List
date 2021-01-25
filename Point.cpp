#include "Figure.h"
#include "Point.h"
#include <iostream>
#include <string>

using namespace std;

//конструктор
Point::Point(int x, int y) 
{
    X = x;
    Y = y;;
    Status = OK;
}

Point::~Point()
{
}

//геттеры
int Point::getX()
{
    if (Status == OK) //работать млжем только с правильно созданным объектом
        return X;
    else return -1;
}

int Point::getY()
{
    if (Status == OK)
        return Y;
    else return -1;
}

//статус
bool Point::getStatus()
{
    return Status;
}

//сеттеры
bool Point::setX(int x)
{
    if (Status == OK)
    {
        X = x;
        return true;
    }
    else return false;
}

bool Point::setY(int y)
{
    if (Status == OK)
    {
        Y = y;
        return true;
    }
    else return false;
}

//ввод данных
void Point::NewObj()
{
    if (Status == OK)
    {
        cout << "Введите значения для Точки:" << endl;

        cout << "X=";
        int a;
        cin >> a;
        setX(a);

        cout << "Y=";
        int b;
        cin >> b;
        setY(b);
    }
    else cout << "Объект неправильно создан!";
}


//площадь
int Point::getSquare()
{
    return -1;
}

//периметр
int Point::getPerimeter()
{
    return -1;
}

//вывод данных
string Point::showFigureType()
{
    if (Status == OK) //выводим только правильно созданную точку
    {
        return "Point, X= " + to_string(X) + ", Y= " + to_string(Y);
    }
    else return "";
}