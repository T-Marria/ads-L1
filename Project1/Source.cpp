//=)
//sheeeesh

#include <locale.h>
#include <iostream>
#include <ostream>
#include "Matrix.h"
using namespace std;

bool control(char* xn);
int checker();
ostream& operator << (ostream& s, Matrix& matrix);

int get_key();
int menu1();
int menu2();

Matrix RandomMatrix(int rows, int cols) {
    Matrix matrix(rows, cols);
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++) {
            int h = rand() % 20;
            matrix(i, j) = h;
        }
    return matrix;
}

//Matrix MatrixGeneration() {
//    Matrix matrix;
//    int rows, cols;
//    cout << "������� ����������� �������:\n";
//    cout << "���������� �����: ";
//    cin >> rows;
//    cout << "���������� ��������: ";
//    cin >> cols;
//
//    matrix = RandomMatrix(rows, cols);
//    return matrix;
//}

int main() {
	setlocale(LC_ALL, "");

    Matrix A(2, 2), B(2, 2), C(2, 2);
    A(0, 0) = 1;
    A(0, 1) = 2;
    A(1, 0) = 3;
    A(1, 1) = 4;

    B(0, 0) = 1;
    B(0, 1) = 2;
    B(1, 0) = 3;
    B(1, 1) = 4;

	while (true) {
        system("cls");
        int m1 = menu1();
        switch (m1) {
        case 27: return 0;
        case 49: {
            system("cls");
            cout << "\t��������� ���� ��������� ������ ��������� �������� ��� ������.\n\n";
           
           /* cout << "��������� ������� �.\n";
            A = MatrixGeneration();

            cout << "��������� ������� B.\n";
            B = MatrixGeneration();

            cout << "\n������� ������� �������������:\n";
            cout << A;
            cout << B;*/

            break;
        }
        case 50: {
            system("cls");
            cout << "\t�������� ������.\n\n";
            C = A + B;

            break;
        }
        case 51: {
            system("cls");
            cout << "\t�������� ������.\n\n";
            
            break;
        }
        case 52: {
            system("cls");
            cout << "\t������������ ������.\n\n";
            
            break;
        }
        case 53: {
            system("cls");
            cout << "\t��������� ������� �� ������.\n\n";

            break;
        }
        case 54: {
            system("cls");
            cout << "\t������� ������� �� ������.\n\n";

            break;
        }
        case 55: {
            system("cls");
            cout << "\t���������� ����� �������.\n\n";
            
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