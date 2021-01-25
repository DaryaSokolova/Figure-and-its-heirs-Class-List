#pragma once
#include "Figure.h"
#include "Point.h"
#include <string>

using namespace std;

//класс КРУГ - наследник класса ФИГУРА
class Circle : public Figure
{
public:
    //конструктор
    Circle(int x, int y, int r);

    //по умолчанию является неверным
    Circle() { Status = Err; };
    ~Circle();

    //геттеры
    int getX();
    int getY();
    int getRadius();
    //сеттеры
    bool setX(int x);
    bool setY(int y);
    bool setRadius(int r);

    // специальный
    bool getStatus() override;

    //ввод данных с клавиатуры
    void NewObj() override;

    //площадь, периметр
    int getSquare() override;
    int getPerimeter() override;

    //вывод
    string showFigureType() override;

private:
    int X; //координата Х центра круга
    int Y; //координата У центра круга
    int Radius; //радиус
};

