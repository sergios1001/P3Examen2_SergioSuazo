#include "Matriz.h"

Matriz::Matriz()
{
}

Matriz::Matriz(int** _mat,char _id)
{
	mat=_mat;
	id=_id;
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
