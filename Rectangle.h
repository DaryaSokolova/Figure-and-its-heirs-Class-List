#pragma once
#include "Figure.h"
#include <string>

using namespace std;

//����� �������������
class Rectangle : public Figure
{
private:
    int width; //�����
    int height; //������

public:
    //�����������
    Rectangle(double w, double h);

    //����������� �� ��������� ��������� ��������� �����������
    Rectangle() { Status = Err; };
    ~Rectangle();


    //�������
    int getWidth();
    int gerHeight();

    // �����������
    bool getStatus() override;

    //�������
    bool setW(int w);
    bool setH(int h);

    //���� ������
    void NewObj() override;

    //������� � ��������
    int getSquare() override;
    int getPerimeter() override;

    //����� ������
    string showFigureType() override;
};

