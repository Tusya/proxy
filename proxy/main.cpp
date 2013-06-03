#include <iostream>
#include "MatAB.h"

using namespace std;

int main()
{
	int A[N][N], B[N][N], i, j;
	MatAB *proxy = new MatrixProxy();
	cout<<"Vvedi matrizu A:\n";
	for(int i=0;i<N;i++)
		for(int j=0;j<N;j++)
			cin>>A[i][j];
	cout<<"\n\nVvedi matrizu B:\n";
	for(int i=0;i<N;i++)
		for(int j=0;j<N;j++)
			cin>>B[i][j];
	proxy->multiplication(A,B);
	proxy->determinant(A,B);
	return 0;
}