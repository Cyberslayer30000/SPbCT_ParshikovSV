#define _CRT_SECURE_NO_WARNINGS
#ifndef TRIANGLE_H 
#define TRIANGLE_H
#include "Point.h"

class Triangle
{
public:
	Triangle(Point, Point, Point, const char*); // �����������
	Triangle(const char*); // ����������� ������� (��������) ������������
	~Triangle(); // ����������
	Triangle(const Triangle&); // ����������� ����������� 
	Triangle& operator =(const Triangle&);
	Point Get_vl() const
	{
		return vl;
	} // �������� �������� vl
	Point Get_v2() const
	{
		return v2;
	} // �������� �������� v2
	Point Get_v3() const
	{
		return v3;
	} // �������� �������� v3
	char* GetName() const
	{
		return name;
	} // �������� ��� �������
	void Show() const; // �������� ������
	void ShowSideAndArea() const; // �������� ������� � ������� �������
	void Move(Point);
	bool operator >(const Triangle tria) const;
	friend bool TriaInTria(Triangle, Triangle); // ����������, ������ �� ���� ����������� �� ������

public:
	static int count; // ���-�� ��������� ��������
private:
	char* objID; // ������������� �������
	char* name; // ������������ ������������
	Point vl, v2, v3; // �������
	double a; // �������, ����������� vl � v2
	double b; // �������, ����������� v2 � v3
	double c; // �������, ����������� vl � v3
};
#endif //TRIANGLE_H