#include <iostream>

#ifndef MATAB_H
#define MATAB_H
const int N=3;
using namespace std;
//�������
class MatAB
{
public:
	virtual int multiplication(int A[N][N], int B[N][N]) = 0;
};
//�������� �������
class Matrix:public MatAB
{
public:
	virtual int multiplication(int A[N][N], int B[N][N]);
};
//����������� - Proxy
class MatrixProxy:public MatAB
{
public:
	MatrixProxy(){ matriza = new Matrix(); }
	virtual ~MatrixProxy() { delete matriza; }
	virtual int multiplication(int A[N][N], int B[N][N])
	{
		return matriza->multiplication(A,B);
	}
private:
	MatAB *matriza;
};

#endif