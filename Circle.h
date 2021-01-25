#pragma once
#include "Figure.h"
#include "Point.h"
#include <string>

using namespace std;

//����� ���� - ��������� ������ ������
class Circle : public Figure
{
public:
    //�����������
    Circle(int x, int y, int r);

    //�� ��������� �������� ��������
    Circle() { Status = Err; };
    ~Circle();

    //�������
    int getX();
    int getY();
    int getRadius();
    //�������
    bool setX(int x);
    bool setY(int y);
    bool setRadius(int r);

    // �����������
    bool getStatus() override;

    //���� ������ � ����������
    void NewObj() override;

    //�������, ��������
    int getSquare() override;
    int getPerimeter() override;

    //�����
    string showFigureType() override;

private:
    int X; //���������� � ������ �����
    int Y; //���������� � ������ �����
    int Radius; //������
};

