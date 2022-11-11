#ifndef NODE_H
#define NODE_H

#include <iostream>

template <class T>
class Node {
public:
	T data;
	Node* next;

	Node()
	{
		data = 0;
		next = NULL;
	}

	Node(T data)
	{
		this->data = data;
		this->next = NULL;
	}
};
#endif

