#pragma once

#include "Car.h"
//класс Lorry наследуется от класса Car
class Lorry :public Car
{
public:
	Lorry(void);//конструктор без параметров
	~Lorry(void);
	Lorry(string, int, int, int);//конструктор с параметрами
	Lorry(const Lorry&);//конструктор копирования
	int Getgruz() { return gruz; }//модификатор
	void Setgruz(int);//селектор
	Lorry& operator=(const Lorry&);//операция присваивания
	friend istream& operator>>(istream& in, Lorry& l);//операция ввода
	friend ostream& operator<<(ostream& out, const Lorry& l); //операция вывода
protected:
	int gruz; // атрибут грузоподъемность
};