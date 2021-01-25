#include "Figure.h"
#include "Rectangle.h"
#include <iostream>
#include <string>

using namespace std;

//конструктор
Rectangle::Rectangle(double w, double h) : width(w), height(h) 
{
    if ((w > 0) && (h > 0)) //не могут длина и высота быть <=0
    {
        width = w;
        height = h;
        Status = OK;
    }
    else Status = Err;
}

Rectangle::~Rectangle()
{
}

//геттеры
int Rectangle::getWidth()
{
    if (Status == OK) //работать можем только с правильно созданными объектами
    {
        return width;
    }
    else return -1;
}

int Rectangle::gerHeight()
{
    if (Status == OK)
    {
        return height;
    }
    else return -1;
}

//сеттеры
bool Rectangle::setW(int w)
{
    if (Status == OK)
    {
        if (w <= 0)
        {
            Status = Err;
            return false;
        }
        else 
        {
            width = w;
            return true;
        }
    }
    else return false;
}

bool Rectangle::setH(int h)
{
    if (Status == OK)
    {
        if (h <= 0)
        {
            Status = Err;
            return false;
        }
        else
        {
            height = h;
            return true;
        }
    }
    else return false;
}

//ввод данных
void Rectangle::NewObj()
{
    if (Status == OK)
    {
        cout << "Введите значения для Четырехугольника:" << endl;

        cout << "width=";
        int a;
        cin >> a;
        setW(a);

        cout << "height=";
        int b;
        cin >> b;
        setH(b);
    }
    else cout << "Объект неправильно создан!" << endl;
}


bool Rectangle::getStatus()
{
    return Status;
}

//площадь
int Rectangle::getSquare()
{
    if (Status == OK)
    {
        return width * height;
    }
    else return -1;
}

//периметр
int Rectangle::getPerimeter()
{
    if (Status == OK)
    {
        return width * 2 + height * 2;
    }
    else return -1;
}

//вывоd данных
string Rectangle::showFigureType()
{
    if (Status == OK) //выводим инфмоацию только о праивльно созданном объекте
    {
        return "Rectangle, width= " + to_string(width) 
            + ", height= " + to_string(height) 
            + ", Square=" + to_string(getSquare()) 
            + ", Perimeter=" + to_string(getPerimeter());
    }
    else return "";
}