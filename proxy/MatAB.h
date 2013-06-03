#include <iostream>

#ifndef MATAB_H
#define MATAB_H
const int N=3;
using namespace std;
//Субъект
class MatAB
{
public:
	virtual int multiplication(int A[N][N], int B[N][N]) = 0;
};
//Реальный субъект
class Matrix:public MatAB
{
public:
	virtual int multiplication(int A[N][N], int B[N][N])
	{
		int C[N][N];
		cout<<"matriza C\n";
		for(int i=0; i<N; i++)
		{
			for(int j=0; j<N; j++)
			{
				C[i][j]=0;
				for(int o=0; o<N; o++)
					C[i][j]=C[i][j]+B[o][j]*A[i][o];
				cout<<C[i][j]<<"  ";
			}
			cout<<endl;
		}
		return 0;
	}
};
//Заместитель - Proxy
class MatrixProxy:public MatAB
{
public:
	MatrixProxy()
	{
		matriza = new Matrix();
	}
	virtual ~MatrixProxy()
	{
		delete matriza;
	}
	virtual int multiplication(int A[N][N], int B[N][N])
	{
		return matriza->multiplication(A,B);
	}
private:
	MatAB *matriza;
};

#endif