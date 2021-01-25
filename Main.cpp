#include <iostream>
#include "Figure.h"
#include "Rectangle.h"
#include "Circle.h"
#include "Point.h"
#include "Triangle.h"
#include <string>
#include "List.h"

//<<������� ��������������� ������ (��������� �������������) 
//�� ������������ � ����������, ��� ������� ���� ���������� ������� � ���� ������.>>
//�����: � ���� �������, ��������, ������ �� ����������� ����� showFigureType() � ������� ������ Figure
//��� (��������) cout << circle.showFigureType() << endl; ����� �������� <<�����-�� ������.>>
//���������� ��� cout << poi.showFigureType() << endl; ����� �������� <<�����-�� ������.>> � ��.

using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");

    //������� �������, ������ ��������� ����������� ����������
    Circle circle(3, 5, 3); //�,�,������
    Point poi(1,2); //�,�
    Rectangle rect(4, 8); //�����, ������
    Triangle tri(3, 3, 3); //������� ������������

    //����� ���������� �� ��������
    /*cout << circle.showFigureType() << endl;
    cout << poi.showFigureType() << endl;
    cout << rect.showFigureType() << endl;
    cout << tri.showFigureType() << endl;*/

    //�������� �������� �������� �� ��������� � ���������� ��������
    /*circle.NewObj();
    poi.NewObj();
    rect.NewObj();
    tri.NewObj();*/

    //������ �����
    List cList; //������� ����
    Point* p = new Point(poi);
    Rectangle* r = new Rectangle(rect);
    Circle* c = new Circle(circle);
    Triangle* t = new Triangle(tri);

    //��������� � ����
    cList.push(p);
    cList.push(r);
    cList.push(c);
    cList.push(t);

    cout << "LIST:" << endl;
    //������� ����
    cList.print();

    return 0;
}