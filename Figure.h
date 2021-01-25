#pragma once
#include <string>

using namespace std;

//статус объекта
enum StatusEr
{
    OK, Err
};
//абстрактный класс ФИГУРА
//абстрактный, потому что есть чисто виртуальные методы
class Figure
{
    //поля доступные только для наследников
protected:
    int Status; //статус объекта, который есть у всех 

    // специальный
    virtual bool getStatus() = 0;

    //ввод данных
    virtual void NewObj() = 0;

    //площадь, периметр
    virtual int getSquare() = 0;
    virtual int getPerimeter() = 0;

public:
    //вывод данных (для корректной работы листа)
    virtual string showFigureType();
};
