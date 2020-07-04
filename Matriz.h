#ifndef MATRIZ_H
#define MATRIZ_H
#include <string>

using namespace std;

#include "Object.h"


class Matriz : public Object
{
	public:
		Matriz();
		Matriz(string,char);
		
		char getID();
		int** getMat();
		
		~Matriz();
	private:
		char id;
		int** mat;
		string numeros;
		friend class Archivo;
};

#endif
