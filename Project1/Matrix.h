#pragma once
class Matrix {
private:
	int n, m;
	double** data;

public:
	Matrix(int n = 0, int m = 0); // �������� ��� ����������? (������� � ������� ����������� ���?)
	double& operator () (int i, int j);
	Matrix operator + (Matrix& rhs); // 1) ����� �� ������ � ���������?; 2) ������� �������� �� ��������� ������������ (��� ���������� � ����� ������, �������� ������� ������� ������?)
	Matrix operator - (Matrix& rhs);
	Matrix operator * (Matrix rhs); // A(m x n) * B(n x k) = C(m x k)
	Matrix operator * (double h); // ��������� �� ������. ����� �� ����� ������ ���������� ���? + ���������� ���������������
	Matrix operator / (double h);
	double tr();
};
