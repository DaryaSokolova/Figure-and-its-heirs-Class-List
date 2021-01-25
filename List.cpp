#include <math.h>
#include <iostream>

#include <string.h>
#include <string>

#include "List.h"
#include "Figure.h"

using namespace std;

//добавление в конец списка
void List::push(Figure* x) { //теперь сам список знает, где его голова и хвост, а остальным об этом знать не следует

	node* r = new node;//создаем новый элемент

	r->inf = x;

	r->next = NULL; //всегда последний

	if (!head && !tail) { //если список пуст

		r->prev = NULL; //первый элемент

		head = r; //это голова

	}

	else {

		tail->next = r; //r - следующий для хвоста

		r->prev = tail; //хвост - предыдущий для r

	}

	tail = r; //r теперь хвост

}

//вывод списка на экран
void List::print()
{

	node* r = head; //укзатель на голову

	while (r != NULL) { //пока не дошли до конца списка

		cout << r->inf->showFigureType() << " " << endl; //вызываем вывод  информации о каждом адресе

		r = r->next; //переход к следующему элементу

	}

	cout << '\n';

}