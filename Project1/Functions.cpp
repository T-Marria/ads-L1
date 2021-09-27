#include <iostream>
#include <string.h>
#include "Matrix.h"
using namespace std;

//      Контроль ввода
bool control(char* xn)
{
    char* tmp = xn;
    int zap_p = 0;
    const char mask[] = "1234567890";
    int checker = 0;
    while (*tmp)
    {
        if (strchr(mask, *tmp)) checker++;
        tmp++;
    }
    if (checker != strlen(xn))
        return false;
    if (checker == 0)
        return false;

    if (*xn == '-' && *(xn + 1) == '\0')
    {
        return false;
    }
    if ((*xn == ','))
        return false;

    tmp = xn;
    while (*tmp)
    {
        if ((*tmp == ','))
        {
            zap_p++;
        }
        if ((*(tmp + 1) == '-') || (*tmp == '\0'))
        {
            return false;
        }
        tmp++;
    }
    if (zap_p > 1) return false;
    return true;
}

int checker()
{
    char n_data[64];
    while (true) {
        gets_s(n_data);
        bool check = control(n_data);
        if (check == true) break;
        else
        {
            printf("Неверный формат данных! Повторите попытку: ");
        }
    }
    int data = (int)atoi(n_data);
    return data;
}


//      Вывод матрицы
ostream& operator << (ostream& s, Matrix& matrix) {
    for (int i; i < matrix.GetRows(); i++) {
        for (int j; j < matrix.GetCols(); j++)
            s << matrix(i, j)<<"  ";
        s << "\n";
    }
}