#pragma once
#include <string>
#include <iostream>
using namespace std;
class Car
{
public:
	Car(void);
	//деструктор
	virtual ~Car(void);
	//констрктор спараметрами
	Car(string, int, int);
	//конструктор копирования
	Car(const Car&);
	//селекторы
	string Getmark() { return mark; }
	int Getcyl() { return cyl; }
	int Getpower() { return power; }
	//модификаторы
	void Setmark(string);
	void Setcyl(int);
	void Setpower(int);
	//перегрузка операции присваивания
	Car& operator=(const Car&);
	//глобальные операторы-функции ввода-вывода
	friend istream& operator>>(istream& in, Car& c);
	friend ostream&
		operator<<(ostream& out, const Car& c); //атрибуты protected:
public:
	string mark;
	int cyl;
	int power;
};

