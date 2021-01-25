#include <math.h>
#include <iostream>

#include <string.h>
#include <string>

#include "List.h"
#include "Figure.h"

using namespace std;

//���������� � ����� ������
void List::push(Figure* x) { //������ ��� ������ �����, ��� ��� ������ � �����, � ��������� �� ���� ����� �� �������

	node* r = new node;//������� ����� �������

	r->inf = x;

	r->next = NULL; //������ ���������

	if (!head && !tail) { //���� ������ ����

		r->prev = NULL; //������ �������

		head = r; //��� ������

	}

	else {

		tail->next = r; //r - ��������� ��� ������

		r->prev = tail; //����� - ���������� ��� r

	}

	tail = r; //r ������ �����

}

//����� ������ �� �����
void List::print()
{

	node* r = head; //�������� �� ������

	while (r != NULL) { //���� �� ����� �� ����� ������

		cout << r->inf->showFigureType() << " " << endl; //�������� �����  ���������� � ������ ������

		r = r->next; //������� � ���������� ��������

	}

	cout << '\n';

}