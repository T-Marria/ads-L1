#pragma once
class Matrix
{
private:
	int n, m;
	float** data;

public:
	Matrix(int n = 0, int m = 0); // �������� ��� ����������?
	// ������/������ ����� ()
	Matrix operator + (Matrix& rhs); // 1) ����� �� ������ � ���������?; 2) ������� �������� �� ��������� ������������
	Matrix operator - (Matrix& rhs);
	Matrix operator * (Matrix& rhs); // A(m x n) * B(n x k) = C(m x k)
	Matrix operator * (float h); // ��������� �� ������. ����� �� ����� ������ ���������� ���? + ���������� ���������������
	Matrix operator / (float h);
	float tr(Matrix& matrix);



};
