#include <iostream>
#include "MatAB.h"

using namespace std;
#define N 3
int main()
{
	int A[N][N], B[N][N];
	MatAB *proxy = new MatrixProxy();
	cout<<"Vvedi";
	for(int i=0;i<N;i++)
		for(int j=0;j<N;j++)
			cin>>A[i][j];
	cout<<"Vvedi";
	for(int i=0;i<N;i++)
		for(int j=0;j<N;j++)
			cin>>B[i][j];
	proxy->multiplication();
	return 0;
}