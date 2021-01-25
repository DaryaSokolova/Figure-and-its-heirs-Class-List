#pragma once

#include "Figure.h"
#include <string>

using namespace std;

//����� ����� - ��������� ������ ������
class Point : public Figure
{

private:
    int X; //���������� �
    int Y; //���������� �

public:
    //�����������
    Point(int x, int y);

    //����������� �� ��������� ��������� ����������� ��������� ��������
    Point() { Status = Err; };
    ~Point();

    //�������
    int getX();
    int getY();

    // �����������
    bool getStatus() override;

    //�������
    bool setX(int x);
    bool setY(int y);

    //���� ������
    void NewObj() override;

    //������� � ��������
    virtual int getSquare();
    int getPerimeter() override;

    //����� ������
    string showFigureType() override;
};
