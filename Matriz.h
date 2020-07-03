#ifndef MATRIZ_H
#define MATRIZ_H
#include <string>

using namespace std;

#include "Object.h"

class Matriz : public Object
{
	public:
		Matriz();
		Matriz(int**,char);
		
		char getID();
		int** getMat();
		
		~Matriz();
	private:
		char id;
		int** mat;
};

#endif
