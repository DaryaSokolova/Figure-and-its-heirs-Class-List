#pragma once

#include "Figure.h"
#include <string>

using namespace std;

//класс ТРЕУГОЛЬНИК - наследник класса ФИГУРА
class Triangle : public Figure
{
private:
    //стороны треугольника
    int A1;
    int A2;
    int A3;

public:
    //конструктор
    Triangle(int a1, int a2, int a3);

    //конструктор по умолчанию считается созданным непраивльно
    Triangle() { Status = Err; };
    ~Triangle();

    //геттеры
    int getA1();
    int getA2();
    int getA3();

    // специальный
    bool getStatus() override;

    //сеттеры
    bool setA1(int a1);
    bool setA2(int a2);
    bool setA3(int a3);

    //ввод данных
    void NewObj() override;

    //площадь и периметр
    int getSquare() override;
    int getPerimeter() override;

    //вывод данных
    string showFigureType() override;
};
