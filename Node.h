#pragma once



/*

Abenezer Tadesse
CSCI 2421
Final Project
Nov 30, 2016
ID: 106102578

Address Book Program
Meets all requirement.
Compiles and runs successfuly on csegrid


Description:
This is the header and implementation file for Node class

*/


#ifndef NODE_
#define NODE_
#include <iostream>
#include"Contact_Info.h"
using namespace std;

// A generic tree node class


//Binary Tree Node
class Node 
{
private:
	Contact_Info Contact;
	Node* left;
	Node* right;
	Node* parent;
public:
	Node()
	{ //key = -1;  //Do not need this. Nodes are sorted by the Conctact's IDnumber
		left = nullptr; right = nullptr; parent = nullptr;
	};
	void setContact(Contact_Info& iContact) { Contact = iContact; };  //we have overloaded = operator
	void setLeft(Node* aLeft) { left = aLeft; };
	void setRight(Node* aRight) { right = aRight; };
	void setParent(Node* aParent) { parent = aParent; };
	Contact_Info getConatct() { return Contact; };   //we have overloaded = operator
	Contact_Info* getContactPtr() { Contact_Info* contactPtr = &Contact; return contactPtr; };
	Node* Left() { return left; };
	Node* Right() { return right; };
	Node* Parent() { return parent; };
};



#endif