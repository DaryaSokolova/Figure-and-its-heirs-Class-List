#pragma once
#include <string>

using namespace std;

//������ �������
enum StatusEr
{
    OK, Err
};
//����������� ����� ������
//�����������, ������ ��� ���� ����� ����������� ������
class Figure
{
    //���� ��������� ������ ��� �����������
protected:
    int Status; //������ �������, ������� ���� � ���� 

    // �����������
    virtual bool getStatus() = 0;

    //���� ������
    virtual void NewObj() = 0;

    //�������, ��������
    virtual int getSquare() = 0;
    virtual int getPerimeter() = 0;

public:
    //����� ������ (��� ���������� ������ �����)
    virtual string showFigureType();
};
