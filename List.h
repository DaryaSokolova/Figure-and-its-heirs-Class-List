#pragma once
#include <math.h>
#include <iostream>
#include <string>
//лист состоит из объектов класса ФИГУРА и объектов классов-наследников
#include "Figure.h"

//<<и помещаются в список, после чего список просматривается.>> - поэтому нет нужды реализовывать другие методы списка
//(они уже реализованы в лабораторной 1)


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

	//реализованы только операции добавить и вывести
	void push(Figure* x); //добавление в конец списка

	void print(); //вывод списка

};
