﻿#include <iostream>
#include "Car.h"
#include "Lorry.h"
using namespace std;
void f1(Car& c)
{
	c.Setmark("Opel"); cout << c;
}

//функция возвращает объект базового класса как результат
Car f2()
{
	Lorry l("Kia", 1, 2, 3);
	return l;
}

int main()
{
	Car a;
	cin >> a;
	cout << a;
	Car b("Ford", 4, 115);
	cout << b;
	a = b;
	cout << a;
	a = f2();
	cout << a;
	Lorry c; //создать объект
	cin >> c;//ввести значения атрибутов
	cout << c;//вывести значенияатрибутов
	system("pause");
}