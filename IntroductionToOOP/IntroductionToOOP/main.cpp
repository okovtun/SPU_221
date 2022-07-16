﻿//IntroductionToOOP
#include<iostream>
using namespace std;

class Point//Point - это точка
{
	double x;
	double y;
public:
	double get_x()const
	{
		return x;
	}
	double get_y()const
	{
		return y;
	}
	void set_x(double x)
	{
		this->x = x;
	}
	void set_y(double y)
	{
		this->y = y;
	}
};

//#define STRUCT_POINT

void main()
{
	setlocale(LC_ALL, "");
#ifdef STRUCT_POINT
	int a;	//объявление переменной 'a' типа 'int'
//type name;
	Point A;//объявление переменной 'A' типа 'Point'
			//объявление объекта 'A' типа 'Point'
			//объявление экземпляра 'A' структуры 'Point'
	A.x = 2;
	A.y = 3;
	cout << A.x << "\t" << A.y << endl;

	Point* pA = &A;
	cout << pA->x << "\t" << pA->y << endl;
#endif // STRUCT_POINT

	Point A;
	A.set_x(2);
	A.set_y(3);
	cout << A.get_x() << "\t" << A.get_y() << endl;
}

/*
------------------------------------------------
.  - оператор прямого доступа    (Point operator)
-> - оператор косвенного доступа (Arrow operator)
------------------------------------------------
*/

/*
------------------------------------------------
				OOP Concepts
1. Encapsulation;
2. Inheritance;
3. Polymorphism;
------------------------------------------------
*/

/*
------------------------------------------------
private:	закрытые поля, достопные только внутри класса.
public:		открытые поля, доступы из любого места программы.
protected:	защищенные поля, доступны только внутри этого класса,
			и его дочерних классов.

get/set-методы
get (взять, получить) 
set (задать, установить)
------------------------------------------------
*/