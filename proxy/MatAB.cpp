#include "MatAB.h"


int Matrix::multiplication(int A[N][N], int B[N][N])
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