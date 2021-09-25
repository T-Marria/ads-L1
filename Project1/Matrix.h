#pragma once
class Matrix {
private:
	int n, m;
	double** data;

public:
	Matrix(int n = 0, int m = 0); // значения для заполнения? (функция с неопред количеством арг?)
	double& operator () (int i, int j);
	Matrix operator + (Matrix& rhs); // 1) нужна ли ссылка в аргументе?; 2) сделать проверку на равенство размерностей (или прибавлять в любом случае, дополняя меньшую матрицу нулями?)
	Matrix operator - (Matrix& rhs);
	Matrix operator * (Matrix rhs); // A(m x n) * B(n x k) = C(m x k)
	Matrix operator * (double h); // умножение на скаляр. нужно ли через ссылку передавать арг? + обеспечить коммутативность
	Matrix operator / (double h);
	double tr();
};
