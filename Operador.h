#ifndef OPERADOR_H
#define OPERADOR_H
#include <string>
using std::string;

#include "Object.h"

class Operador : public Object
{
	public:
		Operador();
		
		Operador(char op);
		
		~Operador();
	private:
		char operador;
		
};

#endif
