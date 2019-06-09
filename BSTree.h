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
This is the BSTree header file

*/

#ifndef BSTREE_
#define BSTREE_
#include <iostream>
#include "Node.h"

// Binary Search Tree class
class BSTree {
private:
	Node* root;
	void addNode(Contact_Info iContact, Node* leaf);
	Node* deleteNode(Node* node, int key);
	void freeNode(Node* leaf);
public:
	BSTree();
	~BSTree();
	Node* Root() { return root; }
	void setRoot(Node * _root) { root = _root; }
	void addNode(Contact_Info iContact);  // no Key just Contact_Info
	Node* findNode(int IDnum, Node* node);
	void printInorder(Node* node, ostream & out);
	void printToVector(Node* node, vector<Contact_Info>& ContactVec);
	Node* min(Node* node);


	void deleteNode(int IDnum);
};
#endif  //BST
