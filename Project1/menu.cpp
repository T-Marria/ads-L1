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
    cout << "\nКласс Матрицы.\n\n"
        "1 - Генерация двух случайных матриц указанных размеров\n"
        "2 - Сложение матриц\n"
        "3 - Разность матриц\n"
        "4 - Произведение матриц\n"
        "5 - Умножение матрицы на скаляр\n"
        "6 - Деление матрицы на скаляр\n"
        "7 - Вычисление следа матрицы\n\n"
        "Выход: Esc";


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
    cout << "Продолжить: Enter";
    while (true)
    {
        int key = get_key();
        if (key == 13) return key;
    }
}