#include <stdlib.h> // для malloc
#include "Matrix.h"

Matrix::Matrix(int n, int m) {
	data = (double**)malloc(n * sizeof(double*));
	for (int i = 0; i < n; i++)
		data[i] = (double*)malloc(m * sizeof(double));
	// + как-то эту память заполнить
}
double& Matrix::operator () (int i, int j) {
	return data[i][j];
}
Matrix Matrix::operator + (Matrix & rhs) {
	if ((n == rhs.n) && (m == rhs.m)) {
		Matrix result(n, m); // память пока заполнена мусорными значениями
		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
				result.data[i][j] = data[i][j] + rhs.data[i][j];
	}
	throw "Размерности матриц не совпадают! Сложение матриц с разными размерностями недопустимо!";
	// return ??
}
Matrix Matrix::operator - (Matrix& rhs) {
	if ((n == rhs.n) && (m == rhs.m)) {
		Matrix result(n, m); // память пока заполнена мусорными значениями
		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
				result.data[i][j] = data[i][j] - rhs.data[i][j];
	}
	throw "Размерности матриц не совпадают! Вычитание матриц с разными размерностями недопустимо!";
	// return ??
}
Matrix Matrix::operator * (Matrix rhs) {
	if (m == rhs.n) {
		Matrix result(n, rhs.m);
		for(i = 0; i < n; i++)
			for(j = 0; j < rhs.m; j++)


	}
	throw "Матрицы не могут быть перемножены! Недопустимая размерность!";
	// return ??
}
Matrix Matrix::operator * (double h) {
	Matrix result(n, m); // память пока заполнена мусорными значениями
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			result.data[i][j] = data[i][j] * h;
}
Matrix Matrix::operator / (double h) {
	Matrix result(n, m); // память пока заполнена мусорными значениями
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			result.data[i][j] = data[i][j] / h;
}
double Matrix::tr() {
	// if(n == m) ?
	double trace = 0;
	for (int i = 0; i < n; i++)
		trace += data[i][i];
	return trace;
}