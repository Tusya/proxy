#include <iostream>

#ifndef MATAB_H
#define MATAB_H

//Субъект
class MatAB
{
public:
	virtual int multiplication() = 0;
};
//Реальный субъект
class Matrix:public MatAB
{
public:
	virtual int multiplication()
	{

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
	virtual int multiplication()
	{
		return matriza->multiplication();
	}
private:
	MatAB *matriza;
};

#endif