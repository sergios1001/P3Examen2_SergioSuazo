#ifndef OPERADOR_H
#define OPERADOR_H
#include <string>
using std::string;

#include "Object.h"

class Operador : public Object
{
	public:
		Operador();
		
		Operador(string op);
		
		~Operador();
	private:
		string operador;
		
};

#endif
