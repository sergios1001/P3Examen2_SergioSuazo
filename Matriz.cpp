#include "Matriz.h"
#include <cmath>
#include <iostream>
using namespace std;

Matriz::Matriz()
{
}

Matriz::Matriz(string num,char _id)
{
	id=_id;
	numeros=num;
	mat=NULL;
	int size = sqrt(num.size());
	mat=new int*[size];
	int cont=0;


	for(int i=0;i<size;i++)
	{
		mat[i]=new int[size];
	}

	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size;j++)
		{
			//cout<<"aqui"<<endl;
			mat[i][j]=(int)num[cont]-48;
			cont++;
		}
	}
	
}

char Matriz::getID()
{
	return id;
}

int** Matriz::getMat()
{
	return mat;
}

Matriz::~Matriz()
{
}
