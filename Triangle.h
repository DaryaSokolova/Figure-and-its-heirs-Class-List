#pragma once

#include "Figure.h"
#include <string>

using namespace std;

//����� ����������� - ��������� ������ ������
class Triangle : public Figure
{
private:
    //������� ������������
    int A1;
    int A2;
    int A3;

public:
    //�����������
    Triangle(int a1, int a2, int a3);

    //����������� �� ��������� ��������� ��������� �����������
    Triangle() { Status = Err; };
    ~Triangle();

    //�������
    int getA1();
    int getA2();
    int getA3();

    // �����������
    bool getStatus() override;

    //�������
    bool setA1(int a1);
    bool setA2(int a2);
    bool setA3(int a3);

    //���� ������
    void NewObj() override;

    //������� � ��������
    int getSquare() override;
    int getPerimeter() override;

    //����� ������
    string showFigureType() override;
};
