




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
		This is the driver file for Address Book Program
	
*/



#include"Functions.h"


int main()
{
	string inFileName; //file name to read in from
	
	BSTree AddressBook; //the main data struct that holds the database 
	int mainMenuChoice;

	//Print out welcome message
	cout << "\n\n\tAddress Book Program\n"
		<< "This program allows users manage an Address book database.\n"
		<< "Please enter file name to read in Contacts from file\n" << endl;
	cin >> inFileName;

	fileNameValidator(inFileName);
	addContacts(AddressBook, inFileName);

	//print main menu
	printMainMenu();
	cin >> mainMenuChoice;
	mainMenuChoice = menuChoiceValidator(1, 8, mainMenuChoice); //validate input

	while (mainMenuChoice != 8)
	{
		if (mainMenuChoice == 1) //add contact
		{
			AddContactMenu(AddressBook);
			printMainMenu();
			cin >> mainMenuChoice;
			mainMenuChoice = menuChoiceValidator(1, 8, mainMenuChoice); //validate input

		}//end if Add Contact/////////////////////////////////////////////////////////////////////////////////////

		else if (mainMenuChoice == 2) //Remove contact
		{
			RemoveContactMenu(AddressBook);
			printMainMenu();
			cin >> mainMenuChoice;
			mainMenuChoice = menuChoiceValidator(1, 8, mainMenuChoice); //validate input

		}//end Remove contact/////////////////////////////////////////////////////////////////////////////////////


		else if (mainMenuChoice == 3)//Edit contact
		{
			EditContact(AddressBook);
			printMainMenu();
			cin >> mainMenuChoice;
			mainMenuChoice = menuChoiceValidator(1, 8, mainMenuChoice); //validate input

		}//end Edit Contact////////////////////////////////////////////////////////////////////////////////////////


		else if (mainMenuChoice == 4)
		{
			SearchMenu(AddressBook);
			printMainMenu();
			cin >> mainMenuChoice;
			mainMenuChoice = menuChoiceValidator(1, 8, mainMenuChoice); //validate input

		}//end Search Contacts/////////////////////////////////////////////////////////////////////////////////////

		else if (mainMenuChoice == 5)//Sort Contact
		{
			SortMenu(AddressBook);
			printMainMenu();
			cin >> mainMenuChoice;
			mainMenuChoice = menuChoiceValidator(1, 8, mainMenuChoice); //validate input
		}//end Sort Contact///////////////////////////////////////////////////////////////////////////////////////

		else if (mainMenuChoice == 6) //Print all contacts
		{
			AddressBook.printInorder(AddressBook.Root(), cout);
			cout << endl << endl;
			printMainMenu();
			cin >> mainMenuChoice;
			mainMenuChoice = menuChoiceValidator(1, 8, mainMenuChoice); //validate input
		}//end of print contacts///////////////////////////////////////////////////////////////////////////////////


		else if (mainMenuChoice == 7) //Print to File
		{
			SaveToFile(AddressBook, inFileName);
			cout << endl << endl;
			printMainMenu();
			cin >> mainMenuChoice;
			mainMenuChoice = menuChoiceValidator(1, 8, mainMenuChoice); //validate input
		}//end of Print to File////////////////////////////////////////////////////////////////////////////////////

	}//end main menu While-loop
	
	cout << "Thank you for using AddressBook Database\n\tGoodBye!!";

	cin.ignore();
	cin.ignore();
	return 0;
}