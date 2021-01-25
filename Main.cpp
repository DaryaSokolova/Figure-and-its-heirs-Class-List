#include <iostream>
#include "Figure.h"
#include "Rectangle.h"
#include "Circle.h"
#include "Point.h"
#include "Triangle.h"
#include <string>
#include "List.h"

//<<Сделать соответствующие методы (связанные наследованием) 
//не виртуальными и посмотреть, как поведут себя экземпляры классов в этом случае.>>
//Ответ: в моем задании, например, сделав НЕ виртуальным метод showFigureType() в базовом классе Figure
//при (например) cout << circle.showFigureType() << endl; будет выведено <<Какая-то фигура.>>
//аналогично при cout << poi.showFigureType() << endl; будет выведено <<Какая-то фигура.>> и тд.

using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");

    //создаем объекты, пустые считаются неправильно созданными
    Circle circle(3, 5, 3); //х,у,радиус
    Point poi(1,2); //х,у
    Rectangle rect(4, 8); //длина, высота
    Triangle tri(3, 3, 3); //стороны треугольника

    //вывод информации об объектах
    /*cout << circle.showFigureType() << endl;
    cout << poi.showFigureType() << endl;
    cout << rect.showFigureType() << endl;
    cout << tri.showFigureType() << endl;*/

    //заменить значения объектов на введенные с клавиатуры значения
    /*circle.NewObj();
    poi.NewObj();
    rect.NewObj();
    tri.NewObj();*/

    //работа Листа
    List cList; //создали лист
    Point* p = new Point(poi);
    Rectangle* r = new Rectangle(rect);
    Circle* c = new Circle(circle);
    Triangle* t = new Triangle(tri);

    //добавляем в лист
    cList.push(p);
    cList.push(r);
    cList.push(c);
    cList.push(t);

    cout << "LIST:" << endl;
    //выводим лист
    cList.print();

    return 0;
}