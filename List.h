#pragma once
#include <math.h>
#include <iostream>
#include <string>
//���� ������� �� �������� ������ ������ � �������� �������-�����������
#include "Figure.h"

//<<� ���������� � ������, ����� ���� ������ ���������������.>> - ������� ��� ����� ������������� ������ ������ ������
//(��� ��� ����������� � ������������ 1)


using namespace std;

struct node {

	Figure* inf;

	node* next;

	node* prev;

};

class List {

private:

	node* head;

	node* tail;

public:

	List() { head = NULL; tail = NULL; }

	//����������� ������ �������� �������� � �������
	void push(Figure* x); //���������� � ����� ������

	void print(); //����� ������

};
