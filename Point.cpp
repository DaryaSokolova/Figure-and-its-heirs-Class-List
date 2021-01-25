#include "Figure.h"
#include "Point.h"
#include <iostream>
#include <string>

using namespace std;

//�����������
Point::Point(int x, int y) 
{
    X = x;
    Y = y;;
    Status = OK;
}

Point::~Point()
{
}

//�������
int Point::getX()
{
    if (Status == OK) //�������� ����� ������ � ��������� ��������� ��������
        return X;
    else return -1;
}

int Point::getY()
{
    if (Status == OK)
        return Y;
    else return -1;
}

//������
bool Point::getStatus()
{
    return Status;
}

//�������
bool Point::setX(int x)
{
    if (Status == OK)
    {
        X = x;
        return true;
    }
    else return false;
}

bool Point::setY(int y)
{
    if (Status == OK)
    {
        Y = y;
        return true;
    }
    else return false;
}

//���� ������
void Point::NewObj()
{
    if (Status == OK)
    {
        cout << "������� �������� ��� �����:" << endl;

        cout << "X=";
        int a;
        cin >> a;
        setX(a);

        cout << "Y=";
        int b;
        cin >> b;
        setY(b);
    }
    else cout << "������ ����������� ������!";
}


//�������
int Point::getSquare()
{
    return -1;
}

//��������
int Point::getPerimeter()
{
    return -1;
}

//����� ������
string Point::showFigureType()
{
    if (Status == OK) //������� ������ ��������� ��������� �����
    {
        return "Point, X= " + to_string(X) + ", Y= " + to_string(Y);
    }
    else return "";
}