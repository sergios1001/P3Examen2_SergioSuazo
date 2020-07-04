#include "Node.h"

Node::Node()
{
}

Node::Node(Object* objeto)
{
	data=objeto;
}

Node* Node::getNext()
{
	return next_node;
}

void Node::setNext(Node* nodo)
{
	next_node=nodo;
}

Node::~Node()
{
}
