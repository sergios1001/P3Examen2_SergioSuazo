#ifndef NODE_H
#define NODE_H
#include "Object.h"

class Node
{
	public:
		Node();
		
		Node* getNext();
		void setNext(Node*);
		
		~Node();
	private:
		Node* next_node;
		Object* data;
};

#endif
