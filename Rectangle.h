#pragma once
#include "Figure.h"
#include <string>

using namespace std;

//класс ѕ–яћќ”√ќЋ№Ќ» 
class Rectangle : public Figure
{
private:
    int width; //длина
    int height; //высота

public:
    //конструктор
    Rectangle(double w, double h);

    //конструктор по умолчанию считаетс€ созданным неправильно
    Rectangle() { Status = Err; };
    ~Rectangle();


    //геттеры
    int getWidth();
    int gerHeight();

    // специальный
    bool getStatus() override;

    //сеттеры
    bool setW(int w);
    bool setH(int h);

    //ввод данных
    void NewObj() override;

    //площадь и периметр
    int getSquare() override;
    int getPerimeter() override;

    //вывод данных
    string showFigureType() override;
};

