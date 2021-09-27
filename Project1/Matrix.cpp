#include <stdlib.h>
#include "Matrix.h"

Matrix::Matrix() {
	n = 0;
	m = 0;
	data = NULL;
}
Matrix::Matrix(int n, int m) {
	data = (double**)malloc(n * sizeof(double*));
	for (int i = 0; i < n; i++)
		data[i] = (double*)malloc(m * sizeof(double));
	// + как-то эту память заполнить
}
Matrix::Matrix(Matrix &rhs) {		// надо ли выделять память?
	n = rhs.n;
	m = rhs.m;
	/* data = (double**)malloc(n * sizeof(double*));
	for (int i = 0; i < n; i++)
		data[i] = (double*)malloc(m * sizeof(double)); */

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			data[i][j] = rhs.data[i][j];
}
int Matrix::GetRows() const {
	return n;
}
int Matrix::GetCols() const {
	return m;
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
		return result;
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
		return result;
	}
	throw "Размерности матриц не совпадают! Вычитание матриц с разными размерностями недопустимо!";
	// return ??
}
Matrix Matrix::operator * (Matrix rhs) {
	if (m == rhs.n) {
		Matrix result(n, rhs.m);
		for (int i = 0; i < n; i++)			// заменить на доступ по индексу?
			for (int j = 0; j < rhs.m; j++)
				result.data[i][j] = 0;
		for (int i = 0; i < n; i++)
			for (int j = 0; j < rhs.m; j++)
				for (int k = 0; k < m; k++)
					result.data[i][j] += data[i][k] * rhs.data[k][j];
		return result;
	}
	throw "Матрицы не могут быть перемножены! Недопустимая размерность!";
	// return ??
}
Matrix Matrix::operator * (double h) {
	Matrix result(n, m); // память пока заполнена мусорными значениями
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			result.data[i][j] = data[i][j] * h;
	return result;
}
Matrix Matrix::operator / (double h) {
	Matrix result(n, m); // память пока заполнена мусорными значениями
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			result.data[i][j] = data[i][j] / h;
	return result;
}
double Matrix::tr() {
	// if(n == m) ?
	double trace = 0;
	for (int i = 0; i < n; i++)
		trace += data[i][i];
	return trace;
}