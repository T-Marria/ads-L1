#include <conio.h>
#include <iostream>
using namespace std;

int get_key()
{
    int key = _getch();
    if ((key == 0) || (key == 224))
        key = _getch();
    return key;
}

int menu1()
{
    cout << "\n����� �������.\n\n"
        "1 - ��������� ���� ��������� ������ ��������� ��������\n"
        "2 - �������� ������\n"
        "3 - �������� ������\n"
        "4 - ������������ ������\n"
        "5 - ��������� ������� �� ������\n"
        "6 - ������� ������� �� ������\n"
        "7 - ���������� ����� �������\n\n"
        "�����: Esc";


    while (true)
    {
        int key = get_key();
        if ((key == 27) || (key > '0' && key <= '7'))
            return key;
    }
}

int menu2()
{
    cout << "\n\n";
    cout << "����������: Enter";
    while (true)
    {
        int key = get_key();
        if (key == 13) return key;
    }
}