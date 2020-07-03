#ifndef PILA_H
#define PILA_H
#include <iostream>
#include "Node.h"

using namespace std;

class Pila 
{
	public:
		Pila();
		
		Pila(Node* _head);
		Node* pop();
		Node* top();
		void push(Node* _node);
		void delete_stack(Node* _node);

		~Pila();
		
	protected:
		Node* head;
};

#endif
