#include <locale.h>
#include <iostream>
#include "Functions.h"
#include "Menu.h"
#include "Matrix.h"
using namespace std;

Matrix RandomMatrix(int rows, int cols) {
    Matrix matrix(rows, cols);
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            matrix(i, j) = rand() % 20;
    return matrix;
}

Matrix MatrixGeneration() {
    Matrix matrix;
    int rows, cols;
    cout << "Введите размерности матрицы:\n";
    cout << "Количество строк: ";
    cin >> rows;
    cout << "Количество столбцов: ";
    cin >> cols;

    matrix = RandomMatrix(rows, cols);
    return matrix;
}

int main() {
	setlocale(LC_ALL, "");

    Matrix A, B;

	while (true) {
        system("cls");
        int m1 = menu1();
        switch (m1) {
        case 27: return 0;
        case 49: {
            system("cls");
            cout << "\tГенерация двух случайных матриц указанных размеров для работы.\n\n";
           
            cout << "Генерация матрицы А.";
            A = MatrixGeneration();

            cout << "Генерация матрицы B.";
            B = MatrixGeneration();

            cout << "Матрицы успешно сгенерированы:\n";
            cout << A;
            cout << B;

            break;
        }
        case 50: {
            system("cls");
            cout << "\tСложение матриц.\n\n";

            break;
        }
        case 51: {
            system("cls");
            cout << "\tРазность матриц.\n\n";
            
            break;
        }
        case 52: {
            system("cls");
            cout << "\tПроизведение матриц.\n\n";
            
            break;
        }
        case 53: {
            system("cls");
            cout << "\tУмножение матрицы на скаляр.\n\n";

            break;
        }
        case 54: {
            system("cls");
            cout << "\tДеление матрицы на скаляр.\n\n";

            break;
        }
        case 55: {
            system("cls");
            cout << "\tВычисление следа матрицы.\n\n";
            
            break;
        }    

        }
        while (true)
        {
            int m2 = menu2();
            if (m2 == 13) break;
        }
	}
}