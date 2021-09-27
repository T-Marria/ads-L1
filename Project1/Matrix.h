#pragma once
class Matrix {
private:
	int n, m;
	double** data;

public:
	Matrix();
	Matrix(int n, int m); // �������� ��� ����������? (������� � ������� ����������� ���?)
	Matrix(Matrix &rhs);
	int GetRows() const;
	int GetCols() const;
	double& operator () (int i, int j);
	Matrix operator + (Matrix& rhs); // 1) ����� �� ������ � ���������?
	Matrix operator - (Matrix& rhs);
	Matrix operator * (Matrix rhs);
	Matrix operator * (double h); // ��������� �� ������. ����� �� ����� ������ ���������� ���? + ���������� ���������������
	Matrix operator / (double h);
	friend Matrix operator * (Matrix &matrix, double h);
	friend Matrix operator / (Matrix& matrix, double h);
	double tr();

	friend ostream& operator << (ostream& s, const Matrix& matrix);
};
