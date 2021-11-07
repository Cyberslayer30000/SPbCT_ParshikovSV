
#include <iostream>
#include <Windows.h>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    FILE* stream;
    wchar_t ch;
    string dot;
    cout << "Введите имя файла:";
    cin >> dot;
    cout << endl << endl << endl;
    fopen_s(&stream, dot.data(), "r, ccs=UTF-8");
    if (stream == NULL)
    {
        cout << "ОШИБОЧКА";
        exit(0);
    }

    ch = fgetwc(stream);
    while (ch != WEOF)
    {
        wcout.put(ch);
        if (ch != '\n' && ch != ' ')
            wcout.put(' ');
        ch = fgetwc(stream);
    }
    cout << endl << endl << endl;
    fclose(stream);
}
