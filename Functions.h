



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
This is the header file for functions used to drive the Addess Book Program

*/


#ifndef FUNCTIONS_
#define FUNCTIONS_



#include "BSTree.h"
#include "Contact_Info.h"
#include<fstream>
#include<algorithm>
#include<random>


enum Fields
{
	PHONE = 0, F_NAME = 1, L_NAME = 2, EMAIL = 3,
	COMPANY_NAME = 4, CITY = 5, STATE = 6, ZIPCODE = 7,
	COUNTRY = 8
};

bool byID(Contact_Info Contact1, Contact_Info Contact2);
bool byFName(Contact_Info Contact1, Contact_Info Contact2);
bool byMName(Contact_Info Contact1, Contact_Info Contact2);
bool byLName(Contact_Info Contact1, Contact_Info Contact2);
bool byCompanyName(Contact_Info Contact1, Contact_Info Contact2);
bool byHomePhone(Contact_Info Contact1, Contact_Info Contact2);
bool byOfficePhone(Contact_Info Contact1, Contact_Info Contact2);
bool byEmail(Contact_Info Contact1, Contact_Info Contact2);
bool byMobileNumber(Contact_Info Contact1, Contact_Info Contact2);
bool byStAddress(Contact_Info Contact1, Contact_Info Contact2);
bool byCity(Contact_Info Contact1, Contact_Info Contact2);
bool byState(Contact_Info Contact1, Contact_Info Contact2);
bool byZipCode(Contact_Info Contact1, Contact_Info Contact2);
bool byCountry(Contact_Info Contact1, Contact_Info Contact2);

int BinarySearchString(vector<Contact_Info>& ContactVec, string target, int first, int last, int field);
int SearchAffiliates(vector<Contact_Info>& ContactVec, string target, int field);
int SearchIDnum(vector<Contact_Info>& ContactVec, long int target, int first, int last);
void SearchContain(vector<Contact_Info>& ContactVec, string target, vector<Contact_Info>& SearchResults);

long int randomIDnumber();
void EditField(Node* NodePtr, string newWord, int field);
void addContacts(BSTree& ContactTree, string inFileName);
void addContacts(BSTree& ContactTree);

int menuChoiceValidator(int low, int high, int choice);
void fileNameValidator(string& fileName);
void printMainMenu();
void printSortFields();
void printCommonFields();
void printAllFields();

void printSortedVec(vector<Contact_Info>& ContactVec);
void printRefinedSearch(vector<Contact_Info>& ContactVec);

void AddContactMenu(BSTree& ContactTree);
void RemoveContactMenu(BSTree& ContactTree);
void EditContact(BSTree& ContactTree);
void SortMenu(BSTree& ContactTree);
void SortSearchResult(vector<Contact_Info>& ContactTreeVec);
void SearchMenu(BSTree& ContactTree);
void SaveToFile(BSTree& ContactTree, string inFile);

#endif // !FUNCTIONS_