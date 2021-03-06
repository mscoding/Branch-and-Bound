#pragma once
class SquareMatrix
{
private:
	int** ptr;
	int size;

	void init(int size);
public:
	SquareMatrix(int size);
	SquareMatrix(const SquareMatrix &matrix);
	~SquareMatrix();
	int* operator[](int);
	SquareMatrix& operator = (const SquareMatrix& t);
	int getSize();
};

