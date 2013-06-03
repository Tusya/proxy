#include "MatAB.h"


int Matrix::multiplication(int A[N][N], int B[N][N])
{
int C[N][N];
		cout<<"matriza C\n";
		for(int i=0;i<N;i++)
		{
			for(int j=0;j<N;j++)
			{
				C[i][j]=0;
				for(int o=0;o<N;o++)
					C[i][j]=C[i][j]+B[o][j]*A[i][o];
				cout<<C[i][j]<<"  ";
			}
			cout<<endl;
		}
		return 0;
}

int Matrix::determinant(int A[N][N], int B[N][N])
{
	int D=0, d=0, detA=0, detB=0;
	D=A[0][0]*A[1][1]*A[2][2] + A[0][1]*A[1][2]*A[2][0] + A[1][0]*A[0][2]*A[2][1];
	d=A[2][0]*A[1][1]*A[0][2] + A[0][0]*A[2][1]*A[1][2] + A[1][0]*A[0][1]*A[2][2];
	detA=D-d;
	cout<<"\n determinant = "<<detA;
	D=d=0;
	D=B[0][0]*B[1][1]*B[2][2] + B[0][1]*B[1][2]*B[2][0] + B[1][0]*B[0][2]*B[2][1];
	d=B[2][0]*B[1][1]*B[0][2] + B[0][0]*B[2][1]*B[1][2] + B[1][0]*B[0][1]*B[2][2];
	detB=D-d;
	cout<<"\n determinant = "<<detB;
	return 0;
}
