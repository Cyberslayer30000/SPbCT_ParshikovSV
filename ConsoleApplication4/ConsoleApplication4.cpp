#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <vector>
#include <ctime>
#include <fstream>
#include <locale.h>
#include <Windows.h>
#include <string>
#include <stdio.h>



using namespace std;



int main()
{
	string fio;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "rus");
	cout << "Введите фамилию" << endl;
	cin >> fio;
	cout << endl << endl << "Пользователь:\n" << fio << endl;
	time_t seconds = time(NULL);
	tm* timeinfo = localtime(&seconds);
	cout << "Current Datetime:" << asctime(timeinfo) << endl;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "rus");
	string path = "symbols.txt";
	fstream file;
	string pathSort = "sort.txt";
	file.open(path, fstream::in | fstream::out | fstream::app);
	string s;
	string test;
	int i;
	cout << "100 русских букв из текстового файла: " << endl;
	while (getline(file, s)) {
		cout << s << endl;
		test = s;
		file.close();
	}

	char* Str;
	Str = new char[100];
	strcpy(Str, test.c_str());
	cout << endl << endl << "Отсортированный файл с помощью STL sort" << endl;
	vector<char> arra;
	for (i = 0; i < 100; i++) {
		arra.push_back(Str[i]);
	}
	sort(arra.begin(), arra.end());
	for (i = 0; i < arra.size(); i++)
	{
		cout << arra[i];
	}

	cout<<endl<< endl<<"Массив:"<< endl;
	int k = 0;
	vector<char> sr(10);
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			sr[j] = s[k];
			k++;
		}

		sort(sr.begin(), sr.end());
		for (int j = 0; j < 10; j++) {
			cout << sr[j] << " ";

		}
		cout << endl;
	};
}