#pragma once

#include "Car.h"
//����� Lorry ����������� �� ������ Car
class Lorry :public Car
{
public:
	Lorry(void);//����������� ��� ����������
	~Lorry(void);
	Lorry(string, int, int, int);//����������� � �����������
	Lorry(const Lorry&);//����������� �����������
	int Getgruz() { return gruz; }//�����������
	void Setgruz(int);//��������
	Lorry& operator=(const Lorry&);//�������� ������������
	friend istream& operator>>(istream& in, Lorry& l);//�������� �����
	friend ostream& operator<<(ostream& out, const Lorry& l); //�������� ������
protected:
	int gruz; // ������� ����������������
};