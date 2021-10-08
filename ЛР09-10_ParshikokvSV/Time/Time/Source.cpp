//time
#include <iostream>
using namespace std;

class Time {
public:
    Time();
    void setTime(int, int, int);
    void printmilitary();
    void printstandard();
private:
    int hour;
    int minute;
    int second;
};

Time::Time() { hour = minute = second = 0; }
void Time::setTime(int h, int m, int s)
{
    hour = (h >= 0 && h < 24) ? h : 0;
    minute = (m >= 0 && m < 60) ? m : 0;
    second = (s >= 0 && s < 60) ? s : 0;
}

void Time::printmilitary()
{
    cout << (hour < 1 ? "0" : "") << hour << ":" << (minute < 1 ? "0" : "") << minute <<
        ":" << (second < 1 ? "0" : "") << second;
}

void Time::printstandard()
{
    cout << ((hour == 0 || hour == 12) ? 12 : hour % 12) << ":" << (minute < 1 ? "0"
        : "") << minute << ":" << (second < 1 ? "0" : "") << second << (hour < 12 ? "am" : " pm");
}


int main()
{
    setlocale(LC_ALL, "russian");
    Time t;
    cout << "��������� �������� �������� ������� ����� ";
    t.printmilitary();
    cout << endl << "��������� �������� ������������ ������� ����� ";
    t.printstandard();
    t.setTime(13, 27, 6);
    cout << endl << endl << "������� ����� ����� settime ����� ";
    t.printmilitary();
    cout << endl << "����������� ����� ����� settime ����� ";
    t.printstandard();
    t.setTime(99, 99, 99);
    cout << endl << endl << "����� ������� ������������ ���������: " << endl <<
        "������� �����: ";
    t.printmilitary();
    cout << endl << "����������� �����: ";
    t.printstandard();
    cout << endl;
    return 0;

}