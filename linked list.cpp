// linked list.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
//using namespace std;
struct Node
{
	int data;
	Node *link;
};

typedef Node* nodePtr;

void insert(nodePtr& head, int data)
{
	nodePtr tempPtr;
	tempPtr = new Node;
	tempPtr->data = data;
	tempPtr->link = head;
	//point header to a new/empty node
	head = tempPtr;
}

void insert_head(nodePtr& head, int data)
{
	nodePtr tempPtr;
	tempPtr = new Node;
	tempPtr->data = data;
	tempPtr->link = NULL;

	head = tempPtr;
}

int main()
{
	int count = 0;
	nodePtr head;
	head = new Node;
	//head->data = 20;
	//head->link = NULL;

	insert_head(head, 20);
	insert(head, 30);
	insert(head, 40);
	insert(head, 50);
	nodePtr tmp;
	tmp = head;

	while (tmp != NULL)
	{
		count += 1;
		std::cout << tmp->data << std::endl;
		tmp = tmp->link;
	}

	std::cout <<std::endl<< "the number of nodes is: " << count << std::endl;
}


