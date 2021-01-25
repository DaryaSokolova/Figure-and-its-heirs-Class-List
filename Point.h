#pragma once

#include "Figure.h"
#include <string>

using namespace std;

//класс ТОЧКА - наследник класса ФИГУРА
class Point : public Figure
{

private:
    int X; //координата Х
    int Y; //координата У

public:
    //конструктор
    Point(int x, int y);

    //конструктор по умолчанию считается неправильно созданным объектом
    Point() { Status = Err; };
    ~Point();

    //геттеры
    int getX();
    int getY();

    // специальный
    bool getStatus() override;

    //сеттеры
    bool setX(int x);
    bool setY(int y);

    //ввод данных
    void NewObj() override;

    //площадь и периметр
    virtual int getSquare();
    int getPerimeter() override;

    //вывод данных
    string showFigureType() override;
};
