#include "Figure.h"
#include "Circle.h"
#include <iostream>
#include <string>

using namespace std;


Circle::Circle(int x, int y, int r) : X(x), Y(y), Radius(r) 
{
    //радиус не может быть <=0
    if (r > 0)
    {
        Radius = r;
        Status = OK;
    }
    else Status = Err;
}

Circle::~Circle()
{
}


//геттеры
int Circle::getX()
{
    if (Status == OK) //работать млжем только с правильно созданной фигурой
        return X;
    else return -1;
}

int Circle::getY()
{
    if (Status == OK)
        return Y;
    else return -1;
}

int Circle::getRadius()
{
    if (Status == OK)
    {
        return Radius;
    }
    else return -1;
}

bool Circle::getStatus()
{
    return Status;
}

//сеттеры
bool Circle::setRadius(int r)
{
    if (Status == OK)
    {
        if (r <= 0)
        {
            Status = Err;
            return false;
        }
        else {
            Radius = r;
            return true;
        }
    }
    else return false;
}

//сеттеры
bool Circle::setX(int x)
{
    if (Status == OK)
    {
        X = x;
        return true;
    }
    else return false;
}

bool Circle::setY(int y)
{
    if (Status == OK)
    {
        Y = y;
        return true;
    }
    else return false;
}

//ввод данных с клавиатуры
void Circle::NewObj()
{
    if (Status == OK)
    {
        cout << "Введите значения для Круга:" << endl;

        cout << "X=";
        int a;
        cin >> a;
        setX(a);

        cout << "Y=";
        int b;
        cin >> b;
        setY(b);

        cout << "R=";
        int c;
        cin >> c;
        setRadius(c);
    }
    else cout << "Объект неправильно создан!" << endl;
}

//площадь
int Circle::getSquare()
{
    if (Status == OK)
    {
        return Radius * Radius * 3.14;
    }
    else return -1;
}

//периметр
int Circle::getPerimeter()
{
    if (Status == OK)
    {
        return 2 * 3.14 * Radius;
    }
    else return -1;
}

//вывод информации
std::string Circle::showFigureType()
{
    if (Status == OK) //можем вывести только правильно созданную фигуру
    {
        return "Circle, X=" + to_string(X) + ", Y= " + to_string(Y) + ", radius= " + to_string(Radius) + ", Square=" + to_string(getSquare()) + ", Perimeter=" + to_string(getPerimeter());
    }
    else return "";
}