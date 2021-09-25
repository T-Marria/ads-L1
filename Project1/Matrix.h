#pragma once
class Matrix
{
private:
	int n, m;
	float** data;

public:
	Matrix(int n = 0, int m = 0); // значения для заполнения?
	// чтение/запись через ()
	Matrix operator + (Matrix& rhs); // 1) нужна ли ссылка в аргументе?; 2) сделать проверку на равенство размерностей
	Matrix operator - (Matrix& rhs);
	Matrix operator * (Matrix& rhs); // A(m x n) * B(n x k) = C(m x k)
	Matrix operator * (float h); // умножение на скаляр. нужно ли через ссылку передавать арг? + обеспечить коммутативность
	Matrix operator / (float h);
	float tr(Matrix& matrix);



};
