#include "Pila.h"
#include <iostream>
using namespace std;

Pila::Pila()
{
	head = nullptr;
}

Pila::Pila(Node* _head)
{
	head = _head;
}

Node* Pila::pop()
{
	Node* temp_head = head;
    head = head->getNext();
    return temp_head;
}

void Pila::push(Node* _node)
{
	_node->setNext(head);
    head = _node;
}

Node* Pila::top()
{
	return head;
}

void Pila::delete_stack(Node* _node)
{
	if (_node->getNext() != nullptr)
	{
        delete_stack(_node->getNext());
    }            
    delete _node;
}

Pila::~Pila()
{
	delete_stack(head);
}

