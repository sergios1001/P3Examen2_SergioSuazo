#ifndef NODE_H
#define NODE_H
#include "Object.h"

class Node
{
	public:
		Node();
		Node(Object* objeto);
		Node* getNext();
		void setNext(Node*);
		Object* getData();
		
		~Node();
	private:
		Node* next_node;
		Object* data;
};

#endif
