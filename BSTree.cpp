




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
This is the BSTree implemetation file provided by Dr Augustine.

Edited: BSTree is sorted based on Contact_Info private memeber IDnumber 

*/




#include "BSTree.h"

// Constructor
BSTree::BSTree() {
	root = nullptr;
	
}

// Destructor
BSTree::~BSTree() {
	if (root != nullptr)
		freeNode(root);
}

// Free the node
void BSTree::freeNode(Node* leaf)
{
	if (this->Root() == leaf)
	{

	}
	else if (leaf != nullptr)

	{
		freeNode(leaf->Left());
		freeNode(leaf->Right());
		delete leaf;
	}

}


// Add a node
void BSTree::addNode(Contact_Info iContact)
{
	// No elements. Add the root
	if (root == nullptr) {
		Node* n = new Node();
		n->setContact(iContact);
		root = n;
		
	}
	else {
		addNode(iContact, root);
	}
}


// Add a node (private)
void BSTree::addNode(Contact_Info iContact, Node* leaf) {
	if (iContact.getIDnumber() <= leaf->getConatct().getIDnumber())
	{
		if (leaf->Left() != nullptr)
		{
			addNode(iContact, leaf->Left());
			
		}
			
		else 
		{
			Node* n = new Node();
			n->setContact(iContact);
			n->setParent(leaf);
			leaf->setLeft(n);
			
		}
	}

	else
	{
		if (leaf->Right() != nullptr)
			addNode(iContact, leaf->Right());
		else {
			Node* n = new Node();
			n->setContact(iContact);
			n->setParent(leaf);
			leaf->setRight(n);
		}
	}
}


// Find a node
Node* BSTree::findNode(int IDnum, Node* node)
{
	Node* found = nullptr; //node pointer that will be returned
						   //Base case#1
	if (node == nullptr) //if Node does not exist return nullptr
	{
		cout << "\nNode " << IDnum << " not found\n";
		return found;
	}
	//Base case#2
	else if (IDnum == node->getConatct().getIDnumber()) //Node exists and contains the number target
	{
		found = node; //target is found copy the node's to found. 
	}

	else if (IDnum > node->getConatct().getIDnumber()) //target(key) is greater the current node's key 
	{							//so we look at the right child of the current Node
		found = findNode(IDnum, node->Right());
	}

	else if (IDnum < node->getConatct().getIDnumber()) //target(key) is less than the current node's key
	{							//so we search the left child of the current Node
		found = findNode(IDnum, node->Left());
	}

	return found; //return address  of Node that conatins target or a nullptr if target isnt found
}


void BSTree::printInorder(Node* node, ostream & out)
{
	if (node != nullptr) //if node exists
	{
		printInorder(node->Left(), out); //visit the left tree
		//out << node->getConatct().getIDnumber() << " "; //print the parent node(i.e. visit root)
		out << *(node->getContactPtr());

		printInorder(node->Right(), out);//visit the right tree
	}


}


void BSTree::printToVector(Node* node, vector<Contact_Info>& ContactVec)
{
	if (node != nullptr) //if node exists
	{
		printToVector(node->Left(), ContactVec); //visit the left tree
		
		ContactVec.push_back(node->getConatct());

		printToVector(node->Right(), ContactVec);//visit the right tree
	}
}



// Find the node with min key
// Traverse the left sub-BSTree recursively
// till left sub-BSTree is empty to get min
Node* BSTree::min(Node* node)
{
	Node* tempNode = node;
	if (node == nullptr)
		tempNode = nullptr;
	else if (node->Left())
	{
		tempNode = min(node->Left());
	}
	else
		tempNode = node;

	return tempNode;
}





Node* BSTree::deleteNode(Node* root, int IDnum)
{

	/* Given a binary search tree and a key, this function deletes the key
	and returns the new root */

	// base case
	if (root == nullptr)
		return root;

	// If the key to be deleted is smaller than the root's key,
	// then it lies in left subtree
	if (IDnum < root->getConatct().getIDnumber())
	{
		root->setLeft(deleteNode(root->Left(), IDnum));
	}
	// If the key to be deleted is greater than the root's key,
	// then it lies in right subtree
	else if (IDnum > root->getConatct().getIDnumber())
		root->setRight(deleteNode(root->Right(), IDnum));

	// if key is same as root's key, then This is the node
	// to be deleted
	else
	{
		// node with only one child or no child
		if (root->Left() ==  nullptr)
		{
			Node *temp = root->Right();
			free(root);
			return temp;
		}
		else if (root->Right() == nullptr)
		{
			Node *temp = root->Left();
			free(root);
			return temp;
		}

		// node with two children: Get the inorder successor (smallest
		// in the right subtree)
		Node* temp = min(root->Right());

		// Copy the inorder successor's content to this node
		root->getConatct().setIDnumber((temp->getConatct().getIDnumber()));

		// Delete the inorder successor
		root->setRight(deleteNode(root->Right(), temp->getConatct().getIDnumber()));
	}
	return root;

}



void BSTree::deleteNode(int IDnum)
{
	if (deleteNode(Root(), IDnum) == nullptr)
		setRoot(nullptr);
}