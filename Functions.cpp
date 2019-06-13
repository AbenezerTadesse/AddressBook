



/*

Abenezer Tadesse
Nov 30, 2016

Address Book Program
Meets all requirement.
Compiles and runs successfuly on csegrid


Description:
This is the implemetation file for functions used to drive the Addess Book Program

*/


#include"Functions.h"



bool byID(Contact_Info Contact1, Contact_Info Contact2)
{
	return (Contact1.getIDnumber() < Contact2.getIDnumber());
}


bool byFName(Contact_Info Contact1, Contact_Info Contact2)
{
	return (Contact1.getFirstName() < Contact2.getFirstName());
}

bool byMName(Contact_Info Contact1, Contact_Info Contact2)
{
	return (Contact1.getMiddleName() < Contact2.getMiddleName());
}

bool byLName(Contact_Info Contact1, Contact_Info Contact2)
{
	return (Contact1.getLastName() < Contact2.getLastName());
}

bool byCompanyName(Contact_Info Contact1, Contact_Info Contact2)
{
	return (Contact1.getCompanyName() < Contact2.getCompanyName());
}

bool byHomePhone(Contact_Info Contact1, Contact_Info Contact2)
{
	return (Contact1.getHomePhone() < Contact2.getHomePhone());
}

bool byOfficePhone(Contact_Info Contact1, Contact_Info Contact2)
{
	return (Contact1.getOfficePhone() < Contact2.getOfficePhone());
}

bool byEmail(Contact_Info Contact1, Contact_Info Contact2)
{
	return (Contact1.getEmail() < Contact2.getEmail());
}

bool byMobileNumber(Contact_Info Contact1, Contact_Info Contact2)
{
	return (Contact1.getMobileNumber() < Contact2.getMobileNumber());

}

bool byStAddress(Contact_Info Contact1, Contact_Info Contact2)
{
	return (Contact1.getStreetAddress() < Contact2.getStreetAddress());

}

bool byCity(Contact_Info Contact1, Contact_Info Contact2)
{
	return (Contact1.getCity() < Contact2.getCity());

}

bool byState(Contact_Info Contact1, Contact_Info Contact2)
{
	return (Contact1.getState() < Contact2.getState());

}

bool byZipCode(Contact_Info Contact1, Contact_Info Contact2)
{
	return (Contact1.getZipCode() < Contact2.getZipCode());

}

bool byCountry(Contact_Info Contact1, Contact_Info Contact2)
{
	return (Contact1.getCountry() < Contact2.getCountry());

}

int BinarySearchString(vector<Contact_Info>& ContactVec, string target, int first, int last, int field)
{
	int index = 0;

	// we are only searching common fields first name, last name, 
	//company name, email, city, state, zip code, and country

	

	if (field == F_NAME)
	{
		//sort the vector by First name
		sort(ContactVec.begin(), ContactVec.end(), byFName);

		if (first > last)	//if starting index > ending index the seach is over
		{					//element is not found
			index = -1;
		}

		else
		{
			//look for the mid section of the range to search in
			int mid = first + (last - first) / 2;
			//Now that we know where the halfway point is in the range. 
			//find out which half has the target

			if (target == ContactVec[mid].getFirstName()) //if target is the middleth element. set index to mid
			{
				index = mid;
			}
			else if (target < ContactVec[mid].getFirstName())
			{
				//if target is less than the middleth element set range to search to the left of middle
				index = BinarySearchString(ContactVec, target, first, mid - 1, field);
			}

			else
			{
				//if target is less than the middleth element set range to search to the right of middle
				index = BinarySearchString(ContactVec, target, mid + 1, last, field);
			}
		}

	}//end if F_NAME

	else if (field == L_NAME)
	{
		//sort the vector by Last name
		sort(ContactVec.begin(), ContactVec.end(), byLName);

		if (first > last)	//if starting index > ending index the seach is over
		{					//element is not found
			index = -1;
		}

		else
		{
			//look for the mid section of the range to search in
			int mid = first + (last - first) / 2;
			//Now that we know where the halfway point is in the range. 
			//find out which half has the target

			if (target == ContactVec[mid].getLastName()) //if target is the middleth element. set index to mid
			{
				index = mid;
			}
			else if (target < ContactVec[mid].getLastName())
			{
				//if target is less than the middleth element set range to search to the left of middle
				index = BinarySearchString(ContactVec, target, first, mid - 1, field);
			}

			else
			{
				//if target is less than the middleth element set range to search to the right of middle
				index = BinarySearchString(ContactVec, target, mid + 1, last, field);
			}
		}
	}//end if L_NAME

	else if (field == COMPANY_NAME)
	{
		//sort the vector by Company name
		sort(ContactVec.begin(), ContactVec.end(), byCompanyName);

		if (first > last)	//if starting index > ending index the seach is over
		{					//element is not found
			index = -1;
		}

		else
		{
			//look for the mid section of the range to search in
			int mid = first + (last - first) / 2;
			//Now that we know where the halfway point is in the range. 
			//find out which half has the target

			if (target == ContactVec[mid].getCompanyName()) //if target is the middleth element. set index to mid
			{
				index = mid;
			}
			else if (target < ContactVec[mid].getCompanyName())
			{
				//if target is less than the middleth element set range to search to the left of middle
				index = BinarySearchString(ContactVec, target, first, mid - 1, field);
			}

			else
			{
				//if target is less than the middleth element set range to search to the right of middle
				index = BinarySearchString(ContactVec, target, mid + 1, last, field);
			}
		}
	}//end if COMPANY_NAME

	else if (field == EMAIL)
	{
		//sort the vector by Email
		sort(ContactVec.begin(), ContactVec.end(), byEmail);

		if (first > last)	//if starting index > ending index the seach is over
		{					//element is not found
			index = -1;
		}

		else
		{
			//look for the mid section of the range to search in
			int mid = first + (last - first) / 2;
			//Now that we know where the halfway point is in the range. 
			//find out which half has the target

			if (target == ContactVec[mid].getEmail()) //if target is the middleth element. set index to mid
			{
				index = mid;
			}
			else if (target < ContactVec[mid].getEmail())
			{
				//if target is less than the middleth element set range to search to the left of middle
				index = BinarySearchString(ContactVec, target, first, mid - 1, field);
			}

			else
			{
				//if target is less than the middleth element set range to search to the right of middle
				index = BinarySearchString(ContactVec, target, mid + 1, last, field);
			}
		}
	}// end if EMIAL

	else if (field == CITY)
	{
		//sort the vector by City
		sort(ContactVec.begin(), ContactVec.end(), byCity);

		if (first > last)	//if starting index > ending index the seach is over
		{					//element is not found
			index = -1;
		}

		else
		{
			//look for the mid section of the range to search in
			int mid = first + (last - first) / 2;
			//Now that we know where the halfway point is in the range. 
			//find out which half has the target

			if (target == ContactVec[mid].getCity()) //if target is the middleth element. set index to mid
			{
				index = mid;
			}
			else if (target < ContactVec[mid].getCity())
			{
				//if target is less than the middleth element set range to search to the left of middle
				index = BinarySearchString(ContactVec, target, first, mid - 1, field);
			}

			else
			{
				//if target is less than the middleth element set range to search to the right of middle
				index = BinarySearchString(ContactVec, target, mid + 1, last, field);
			}
		}
	}//end if CITY

	else if (field == STATE)
	{
		//sort the vector by state
		sort(ContactVec.begin(), ContactVec.end(), byState);

		if (first > last)	//if starting index > ending index the seach is over
		{					//element is not found
			index = -1;
		}

		else
		{
			//look for the mid section of the range to search in
			int mid = first + (last - first) / 2;
			//Now that we know where the halfway point is in the range. 
			//find out which half has the target

			if (target == ContactVec[mid].getState()) //if target is the middleth element. set index to mid
			{
				index = mid;
			}
			else if (target < ContactVec[mid].getState())
			{
				//if target is less than the middleth element set range to search to the left of middle
				index = BinarySearchString(ContactVec, target, first, mid - 1, field);
			}

			else
			{
				//if target is less than the middleth element set range to search to the right of middle
				index = BinarySearchString(ContactVec, target, mid + 1, last, field);
			}
		}
	}//end of STATE

	else if (field == ZIPCODE)
	{
		//sort the vector by Company name
		sort(ContactVec.begin(), ContactVec.end(), byZipCode);

		if (first > last)	//if starting index > ending index the seach is over
		{					//element is not found
			index = -1;
		}

		else
		{
			//look for the mid section of the range to search in
			int mid = first + (last - first) / 2;
			//Now that we know where the halfway point is in the range. 
			//find out which half has the target

			if (target == ContactVec[mid].getZipCode()) //if target is the middleth element. set index to mid
			{
				index = mid;
			}
			else if (target < ContactVec[mid].getZipCode())
			{
				//if target is less than the middleth element set range to search to the left of middle
				index = BinarySearchString(ContactVec, target, first, mid - 1, field);
			}

			else
			{
				//if target is less than the middleth element set range to search to the right of middle
				index = BinarySearchString(ContactVec, target, mid + 1, last, field);
			}
		}
	}//end if ZIPCODE

	else if (field == COUNTRY)
	{
		//sort the vector by Country
		sort(ContactVec.begin(), ContactVec.end(), byCountry);

		if (first > last)	//if starting index > ending index the seach is over
		{					//element is not found
			index = -1;
		}

		else
		{
			//look for the mid section of the range to search in
			int mid = first + (last - first) / 2;
			//Now that we know where the halfway point is in the range. 
			//find out which half has the target

			if (target == ContactVec[mid].getCountry()) //if target is the middleth element. set index to mid
			{
				index = mid;
			}
			else if (target < ContactVec[mid].getCountry())
			{
				//if target is less than the middleth element set range to search to the left of middle
				index = BinarySearchString(ContactVec, target, first, mid - 1, field);
			}

			else
			{
				//if target is less than the middleth element set range to search to the right of middle
				index = BinarySearchString(ContactVec, target, mid + 1, last, field);
			}
		}
	}//end if COUNTRY



	return index;
}

int SearchAffiliates(vector<Contact_Info>& ContactVec, string target, int field)
{

	for (size_t pos = 0; pos < ContactVec.size(); pos++)
	{
		if (ContactVec[pos].searchAffiliateField(target, field))
		{
			return pos;
		}
	}

	return -1;
}

int SearchIDnum(vector<Contact_Info>& ContactVec, long int target, int first, int last)
{
	//first sort the vector by ID number
	sort(ContactVec.begin(), ContactVec.end(), byID);

	int index = 0;

	if (first > last)	//if starting index > ending index the seach is over
	{					//element is not found
		index = -1;
	}

	else
	{
		//look for the mid section of the range to search in
		int mid = first + (last - first) / 2;
		//Now that we know where the halfway point is in the range. 
		//find out which half has the target

		if (target == ContactVec[mid].getIDnumber()) //if target is the middleth element. set index to mid
		{
			index = mid;
		}
		else if (target < ContactVec[mid].getIDnumber())
		{
			//if target is less than the middleth element set range to search to the left of middle
			index = SearchIDnum(ContactVec, target, first, mid - 1);
		}

		else
		{
			//if target is less than the middleth element set range to search to the right of middle
			index = SearchIDnum(ContactVec, target, mid + 1, last);
		}
	}

	return index;
}

void SearchContain(vector<Contact_Info>& ContactVec, string target, vector<Contact_Info>& SearchResults)
{
	for (size_t pos = 0; pos < ContactVec.size(); pos++)
	{
		if (ContactVec[pos].getFirstName().find(target) != string::npos) 
		{
			SearchResults.push_back(ContactVec[pos]);
		}

		else if (ContactVec[pos].getMiddleName().find(target) != string::npos)
		{
			SearchResults.push_back(ContactVec[pos]);
		}

		else if (ContactVec[pos].getLastName().find(target) != string::npos)
		{
			SearchResults.push_back(ContactVec[pos]);
		}
		else if (ContactVec[pos].getCompanyName().find(target) != string::npos)
		{
			SearchResults.push_back(ContactVec[pos]);
		}
		else if (ContactVec[pos].getHomePhone().find(target) != string::npos)
		{
			SearchResults.push_back(ContactVec[pos]);
		}
		else if (ContactVec[pos].getOfficePhone().find(target) != string::npos)
		{
			SearchResults.push_back(ContactVec[pos]);
		}
		else if (ContactVec[pos].getEmail().find(target) != string::npos)
		{
			SearchResults.push_back(ContactVec[pos]);
		}

		else if (ContactVec[pos].getMobileNumber().find(target) != string::npos)
		{
			SearchResults.push_back(ContactVec[pos]);
		}

		else if (ContactVec[pos].getStreetAddress().find(target) != string::npos)
		{
			SearchResults.push_back(ContactVec[pos]);
		}

		else if (ContactVec[pos].getCity().find(target) != string::npos)
		{
			SearchResults.push_back(ContactVec[pos]);
		}

		else if (ContactVec[pos].getState().find(target) != string::npos)
		{
			SearchResults.push_back(ContactVec[pos]);
		}

		else if (ContactVec[pos].getZipCode().find(target) != string::npos)
		{
			SearchResults.push_back(ContactVec[pos]);
		}

		else if (ContactVec[pos].getCountry().find(target) != string::npos)
		{
			SearchResults.push_back(ContactVec[pos]);
		}

		else if (ContactVec[pos].searchAffiliateContain(target))
		{
			SearchResults.push_back(ContactVec[pos]);
		}
	}//end for-loop

	cout << SearchResults.size() << " Matching Contacts found\n" << endl;
}

long int randomIDnumber()
{
	
	std::random_device rd;     // only used once to initialise (seed) engine
	std::mt19937 rng(rd());    // random-number engine used (Mersenne-Twister in this case)
	std::uniform_int_distribution<int> uni(100000000, 999999999); // guaranteed unbiased

	long int ID = uni(rng);

	return ID;
}

void EditField(Node* NodePtr, string newWord, int field)
{
	//first we search for node in Tree that has the target Contact
	//since BSTree is ordered by ID number, we search using traget Contact's ID


/*	1:First Name, 2:Middle Name, 3:Last Name, 4:Company Name
	5:Home Phone, 6:Office Phone, 7:Email, 8:Mobile Number, 9:Street Address
	10:City, 11:State, 12:Zipcode, 13:Country, 14:Affiliates
*/
	//Node* NodePtr = ContactTree.findNode(IDnum, ContactTree.Root());
	//Contact_Info* ContactPtr = &NodePtr->getConatct();

	if (field == 1)//Edit First Name
	{
		NodePtr->getContactPtr()->setFirstName(newWord);
		
	}

	else if (field == 2) //Edit middle Name
	{
		NodePtr->getContactPtr()->setMiddleName(newWord);
	}

	else if (field == 3) //Edit Last Name
	{
		NodePtr->getContactPtr()->setLastName(newWord);
	}

	else if (field == 4) //Edit Company Name
	{
		NodePtr->getContactPtr()->setCompanyName(newWord);
	}

	else if (field == 5) //Edit Home Phone
	{
		NodePtr->getContactPtr()->setHomePhone(newWord);
	}

	else if (field == 6) //Edit Office Phone
	{
		NodePtr->getContactPtr()->setCompanyName(newWord);
	}

	else if (field == 7) //Edit Email
	{
		NodePtr->getContactPtr()->setEmail(newWord);
	}

	else if (field == 8) //Edit Mobile number
	{
		NodePtr->getContactPtr()->setMobileNumber(newWord);
	}

	else if (field == 9) //Edit Street
	{
		NodePtr->getContactPtr()->setStreetAddress(newWord);
	}

	else if (field == 10) //Edit City
	{
		NodePtr->getContactPtr()->setCity(newWord);
	}

	else if (field == 11) //Edit State
	{
		NodePtr->getContactPtr()->setState(newWord);
	}

	else if (field == 12) //Edit Zip
	{
		NodePtr->getContactPtr()->setZipCode(newWord);
	}

	else if (field == 13) //Edit Country
	{
		NodePtr->getContactPtr()->setCountry(newWord);
	}

}

void addContacts(BSTree& ContactTree, string inFileName)
{
	ifstream inFile;
	inFile.open(inFileName);
	Contact_Info* ContactPtr = new Contact_Info;

	while (inFile >> *ContactPtr)
	{
		ContactTree.addNode(*ContactPtr);
		ContactPtr = new Contact_Info;
	}

	//Delete the last dynamic Contact_Info 
	//delete ContactPtr;
}

void addContacts(BSTree & ContactTree)
{
	//first we generate a unique ID number for contact
	long int newID = randomIDnumber();
	
	//make sure the randomly generated ID is unique, i.e. no contacts in BSTree has is already

	while (ContactTree.findNode(newID, ContactTree.Root()) != nullptr)
	{//we keep generating a radom number until we find one that is not in BSTree
		newID = randomIDnumber(); 
	}

	Contact_Info* ContactPtr = new Contact_Info;
	Affiliate* AffiliatePtr;

	ContactPtr->setIDnumber(newID);

	string inWord;
	cout << " Please enter First Name: ";
	cin >> inWord;
	ContactPtr->setFirstName(inWord);
	
	cout << " Please enter Middle Name: ";
	cin >> inWord;
	ContactPtr->setMiddleName(inWord);

	cout << " Please enter Last Name: ";
	cin >> inWord;
	ContactPtr->setLastName(inWord);

	cout << " Please enter Company Name: ";
	cin.ignore();
	getline(cin, inWord);
	ContactPtr->setCompanyName(inWord);

	cout << " Please enter Home phone: ";
	cin >> inWord;
	ContactPtr->setHomePhone(inWord);

	cout << " Please enter Office phone: ";
	cin >> inWord;
	ContactPtr->setOfficePhone(inWord);

	cout << " Please enter Email: ";
	cin >> inWord;
	ContactPtr->setEmail(inWord);

	cout << " Please enter Mobile number: ";
	cin >> inWord;
	ContactPtr->setMobileNumber(inWord);

	cout << " Please enter Street Address: ";
	cin.ignore();
	getline(cin, inWord);
	ContactPtr->setStreetAddress(inWord);

	cout << " Please enter City: ";
	cin >> inWord;
	ContactPtr->setCity(inWord);

	cout << " Please enter State: ";
	cin >> inWord;
	ContactPtr->setState(inWord);

	cout << " Please enter ZipCode: ";
	cin >> inWord;
	ContactPtr->setZipCode(inWord);

	cout << " Please enter Country: ";
	cin >> inWord;
	ContactPtr->setCountry(inWord);

	

	int choice;

	cout << "\nWould you like to add Affiliates to this contact?\n "
		<< "Enter 1 yes or 2 No\n";
	cin >> choice;

	while (choice == 1)
	{
		AffiliatePtr = new Affiliate;
		cout << "Please enter Affiliates First Name\n";
		cin >> inWord;
		AffiliatePtr->firstName = inWord;

		cout << "Please enter Affiliates Last Name\n";
		cin >> inWord;
		AffiliatePtr->lastName = inWord;

		cout << "Please enter Affiliates Email or enter -1 if no Email\n";
		cin >> inWord;
		AffiliatePtr->email = inWord;

		cout << "Please enter Affiliates Mobile number or enter -1 if no number\n";
		cin >> inWord;
		AffiliatePtr->mobileNumber = inWord;

		//add affiliate to contact
		ContactPtr->addContactAffiliates(*AffiliatePtr);

		cout << "\nWould you like to enter more affiliates\n"
			<< "Enter 1 for Yes or 2 to return to main Menu\n";

		cin >> choice;
	}

	//add contact to tree
	ContactTree.addNode(*ContactPtr);

}

int menuChoiceValidator(int low, int high, int choice)
{
	int userInput = choice;
	while (high)
	{
		if (userInput >= low && userInput <= high)
		{
			return userInput;
		}

		else 
		{
			cout << "\nInvalid input!! Please enter numbers " << low << " to " << high << endl;
			cin >> userInput;
		}
	}
	
	return 0;
}

void fileNameValidator(string& fileName)
{
	ifstream inFile;
	inFile.open(fileName);

	while (!inFile)
	{
		cout << "\nFile Open Error!! Please check the following and try again\n"
			<<"\t**Please check spelling\n"
			<<"\t**Make sure the file is a txt file\n"
			<<"\t**Make sure to add '.txt' at the end of file name\n"
			<< "\teg. fileName.txt\n\n Please enter file name: ";
		cin >> fileName;

		inFile.open(fileName);
	}
}

void printMainMenu()
{
	cout 
		<<"\t  MAIN MENU\n"
		<< "\t1: Add Contact\n"
		<< "\t2: Remove Contact\n"
		<< "\t3: Edit Contact\n"
		<< "\t4: Search\n"
		<< "\t5: Sort Contacts\n"
		<< "\t6: Print\n"
		<< "\t7: Save to File\n"
		<< "\t8: Exit\n" << endl;
}

void printSortFields()
{
	cout << "\t1: ID Number\n"
		<< "\t2: First Name\n"
		<< "\t3: Last Name\n"
		<< "\t4: Company Name\n"
		<< "\t5: City\n"
		<< "\t6: State\n"
		<< "\t7: Zip code\n"
		<< endl;
}

void printCommonFields()
{
	cout << "\t1: ID Number\n"
		<< "\t2: First Name\n"
		<< "\t3: Last Name\n"
		<< "\t4: Email\n"
		<< "\t5: CompanyName\n"
		<< "\t6: Affiliates\n"
		<< endl;
}

void printAllFields()
{
	cout
		<< "\t1: First Name\n"
		<< "\t2: Middle Name\n"
		<< "\t3: Last Name\n"
		<< "\t4: Company Name\n"
		<< "\t5: Home Phone\n"
		<< "\t6: Office Phone\n"
		<< "\t7: Email\n"
		<< "\t8: Mobile Number\n"
		<< "\t9: Street Address\n"
		<< "\t10: City\n"
		<< "\t11: State\n"
		<< "\t12: Zip code\n"
		<< "\t13: Country\n"
		<< "\t14: Affiliates\n"
		<< endl;
}

void printSortedVec(vector<Contact_Info>& ContactVec)
{
	cout << "\nSelect from the menu below\n"
		<< "1: Print sorted Addressbook to screen\n"
		<< "2: Save sorted Addressbook to file\n"
		<< "3: Return to main menu. Discard sort\n";
	int pick;
	cin >> pick;

	pick = menuChoiceValidator(1, 3, pick);

	if (pick == 1)
	{
		for (size_t pos = 0; pos < ContactVec.size(); pos++)
		{
			cout << ContactVec[pos];
		}
	}

	else if (pick == 2)
	{
		ofstream outFile;
		string fileName;
		cout << "\nPlease enter a txt file name to save sorted list in. (fileName.txt)\n";
		cin >> fileName;
		outFile.open(fileName);

		for (size_t pos = 0; pos < ContactVec.size(); pos++)
		{
			outFile << ContactVec[pos];
		}
	}


	
}

void printRefinedSearch(vector<Contact_Info>& ContactVec)
{
	cout << "\nSelect from the menu below\n"
		<< "1: Print search results to screen\n"
		<< "2: Save search results to file\n"
		<< "3: Go back to previous menu\n";
	int pick;
	cin >> pick;

	pick = menuChoiceValidator(1, 3, pick);

	if (pick == 1)
	{
		for (size_t pos = 0; pos < ContactVec.size(); pos++)
		{
			cout << ContactVec[pos];
		}
	}

	else if (pick == 2)
	{
		ofstream outFile;
		string fileName;
		cout << "\nPlease enter a txt file name to save sorted list in. (fileName.txt)\n";
		cin >> fileName;
		outFile.open(fileName);

		for (size_t pos = 0; pos < ContactVec.size(); pos++)
		{
			outFile << ContactVec[pos];
		}
	}


}

void AddContactMenu(BSTree & ContactTree)
{
	int subMenu;
	cout << "\n How would you like to add Contacts. Enter 1, 2 or 3\n"
		<< "1: Manually\n"
		<< "2: From File\n"
		<< "3: Return to Main menu\n";

	cin >> subMenu;
	subMenu = menuChoiceValidator(1, 3, subMenu);

	if (subMenu == 1)
	{
		addContacts(ContactTree);
	}

	else if (subMenu == 2)
	{
		string fileName;
		cout << "Please enter File name\n";
		cin >> fileName;
		addContacts(ContactTree, fileName);
	}

}

void RemoveContactMenu(BSTree & ContactTree)
{
	int subMenu, fieldMenu;
	cout << "\nHow would you like to search for contact? Enter 1 or 2\n"
		<< "1: Search by Field\n"
		<< "2: Return to main menu\n";
	cin >> subMenu;

	subMenu = menuChoiceValidator(1, 2, subMenu);

	if (subMenu == 1)// we search by Field
	{
		printCommonFields();
		cin >> fieldMenu;

		fieldMenu = menuChoiceValidator(1, 6, fieldMenu); //input validation

		if (fieldMenu == 1) // search by ID number we use BSTree search
		{
			long int targetID;
			cout << "\nPlease enter Conatct ID: ";
			cin >> targetID;
			//look up contact and if found delete 

			if (ContactTree.findNode(targetID, ContactTree.Root()) == nullptr)
			{
				cout << "\nNo such contact found!! Returning to main menu...\n";

			}

			else
			{
				ContactTree.deleteNode(targetID);
				cout << "\nContact was deleted Successfully. Returning to main Menu...\n";
	
			}
		}//end search by ID number


		else if (fieldMenu >= 2 && fieldMenu <= 5)//search by 2)Fname, 3)Lname, 4)email or 5)company 
		{
			// copy BSTree to vector
			vector<Contact_Info>ContactTreeVec;
			ContactTree.printToVector(ContactTree.Root(), ContactTreeVec);

			//bineary search function takes 1=Fname, 2=Lname 3= Email 4=company
			//i.e fieldMenu -1 is field int for binarySearchString function

			cout << "\nPlease enter target\n";
			string target;
			cin.ignore();
			getline(cin, target); //read the whole line because company name could multilple words

			int pos = BinarySearchString(ContactTreeVec, target, 0, ContactTreeVec.size() - 1, fieldMenu - 1);

			if (pos == -1)
			{//contact not found
				cout << "Contact was not found!! Returning to main Menu\n";
				ContactTreeVec.clear(); // clear the vector
			}

			else
			{
				cout << "\nContact deleted Successfully!! Returning to main Menu...\n";
				ContactTreeVec.clear(); // clear the vector

			}
		}//end search by F/L/Company name and email


		else if (fieldMenu == 6) //search by Affiliate
		{
			// copy BSTree to vector
			vector<Contact_Info>ContactTreeVec;
			ContactTree.printToVector(ContactTree.Root(), ContactTreeVec);

			cout << "\nSearch Affiliate by:\n"
				<< "1: First Name\n"
				<< "2: Last Name\n"
				<< "3: Email\n"
				<< "4: Phone number\n"
				<< "5: Return to main Menu\n";
			int affiliateSubMenu;
			cin >> affiliateSubMenu;

			//validate user's choice input
			affiliateSubMenu = menuChoiceValidator(1, 5, affiliateSubMenu);

			if (affiliateSubMenu == 1) //search by first Name
			{
				string Fname;
				cout << "\nPlease enter first name of Affiliate: ";
				cin >> Fname;
				//field: 0 = phoneNumber, 1 = first name, 2 = last name, 3 = email

				int pos = SearchAffiliates(ContactTreeVec, Fname, 1);  //searching by First name
		//pos contains position of the Contact in AddressBookVec that has the targeted Affiliate

				if (pos != -1)
				{//contact with targeted affiliate is found

				 //since the main ADT is BSTree. we delete from BSTree not vector

					ContactTree.deleteNode(ContactTreeVec[pos].getIDnumber());

					//clear out the vector
					ContactTreeVec.clear();
					cout << "\nContact deleted Successfuly. Returning to main Menu...\n";
				}

				else
				{
					//target affiliate is not found
					cout << "Contact was not found!! Returning to main Menu\n";
					ContactTreeVec.clear(); // clear the vector
				}

			}//end search by Affiliate First Name

			else if (affiliateSubMenu == 2) // search by last Name
			{
				string Lname;
				cout << "\nPlease enter last name of Affiliate: ";
				cin >> Lname;
				//field: 0 = phoneNumber, 1 = first name, 2 = last name, 3 = email
				
				int pos = SearchAffiliates(ContactTreeVec, Lname, 2);  //searching by last name
			//pos contains position of the Contact in AddressBookVec that has the targeted Affiliate
				
				if (pos != -1)
				{//contact with targeted affiliate is found

				 //since the main ADT is BSTree. we delete from BSTree not vector

					ContactTree.deleteNode(ContactTreeVec[pos].getIDnumber());

					//clear out the vector
					ContactTreeVec.clear();
					cout << "\nContact deleted Successfuly. Returning to main Menu...\n";
				}

				else
				{
					//target affiliate is not found
					cout << "Contact was not found!! Returning to main Menu\n";
					ContactTreeVec.clear(); // clear the vector
				}
			}//end search by Affiliate Last name


			else if (affiliateSubMenu == 3) // search by email
			{
				string email;
				cout << "\nPlease enter affiliate email: ";
				cin >> email;
				//field: 0 = phoneNumber, 1 = first name, 2 = last name, 3 = email
				
				int pos = SearchAffiliates(ContactTreeVec, email, 3);  //searching by email
				//pos contains position of the Contact in AddressBookVec that has the targeted Affiliate
				
				if (pos != -1)
				{//contact with targeted affiliate is found

				 //since the main ADT is BSTree. we delete from BSTree not vector

					ContactTree.deleteNode(ContactTreeVec[pos].getIDnumber());

					//clear out the vector
					ContactTreeVec.clear();
					cout << "\nContact deleted Successfuly. Returning to main Menu...\n";
				}

				else
				{
					//target affiliate is not found
					cout << "Contact was not found!! Returning to main Menu\n";
					ContactTreeVec.clear(); // clear the vector
				}
			}//end search by Affiliate email


			else if (affiliateSubMenu == 4) // search by phone number
			{
				string phone;
				cout << "\nPlease enter last name of Affiliate: ";
				cin >> phone;
				//field: 0 = phoneNumber, 1 = first name, 2 = last name, 3 = email
				int pos = SearchAffiliates(ContactTreeVec, phone, 0);  //searching by phone number
																	  //pos contains position of the Contact in AddressBookVec that has the targeted Affiliate
				if (pos != -1)
				{//contact with targeted affiliate is found

				 //since the main ADT is BSTree. we delete from BSTree not vector

					ContactTree.deleteNode(ContactTreeVec[pos].getIDnumber());

					//clear out the vector
					ContactTreeVec.clear();
					cout << "\nContact deleted Successfuly. Returning to main Menu...\n";
				}

				else
				{
					//target affiliate is not found
					cout << "Contact was not found!! Returning to main Menu\n";
					ContactTreeVec.clear(); // clear the vector
				}
			}//end search by Affiliate phone number

		}//end Search by Affiliate


	}//end Search by Field

}

void EditContact(BSTree& AddressBook)
{
	int subMenu, fieldMenu, fieldToEdit;

	cout << "\n1: Search by ID number\n"
		<< "\n2: Return to main menu\n";
	cin >> subMenu;

	subMenu = menuChoiceValidator(1, 2, subMenu); //input validation

	if (subMenu == 1) //we are searching by ID
	{
	
		long int targetID;
		cout << "\nPlease enter Conatct ID: ";
		cin >> targetID;
		//look up contact if found print fields to edit
		Node* targetContactNodePtr = AddressBook.findNode(targetID, AddressBook.Root());
		Affiliate* AffiliatePtr;
		string inWord;
		if (targetContactNodePtr == nullptr)
		{
			cout << "\nNo such contact found!! Returning to main menu...\n";
			
		}

		else
		{//target contact found. 
			//print contact
			cout << "\nContact found!!\n";
			targetContactNodePtr->getContactPtr()->displayContact();
			cout<< endl << endl;

			//print list of fields to edit
			cout << "Please enter number 1 - 14 to pick a field\n";
			printAllFields();
			cin >> fieldToEdit;
			fieldMenu = menuChoiceValidator(1, 14, fieldToEdit);

			if (fieldToEdit == 14)//edit affiliate 
			{
				int choice;
				cout << "1: Add affiliate\n"
					<< "2: Remove Affiliate\n"
					<< "3: Edit affiliate First Name\n"
					<< "4: Edit affiliate Last Name\n"
					<< "5: Edit affiliate Email\n"
					<< "6: Edit affiliate Phone\n";
				cin >> choice;

				choice = menuChoiceValidator(1, 6, choice);
				if (choice == 1)//add affiliate
				{
					
					AffiliatePtr = new Affiliate;
					cout << "Please enter Affiliates First Name\n";
					cin >> inWord;
					AffiliatePtr->firstName = inWord;

					cout << "Please enter Affiliates Last Name\n";
					cin >> inWord;
					AffiliatePtr->lastName = inWord;

					cout << "Please enter Affiliates Email or enter -1 if no Email\n";
					cin >> inWord;
					AffiliatePtr->email = inWord;

					cout << "Please enter Affiliates Mobile number or enter -1 if no number\n";
					cin >> inWord;
					AffiliatePtr->mobileNumber = inWord;
					//add affiliate to target Contact
					targetContactNodePtr->getContactPtr()->addContactAffiliates(*AffiliatePtr);

					cout << "\nConatct affiliate updated\n";
	
				}//end add affiliate

				else
				{
					//print affiliates
					cout << endl;
					targetContactNodePtr->getConatct().printAffiliate();
					int pickAffiliate;
					cin >> pickAffiliate;

					pickAffiliate = menuChoiceValidator(1, targetContactNodePtr->getContactPtr()->getNumOfAffiliates(), pickAffiliate);
						
					if (choice == 2)//remove affiliate
					{
						targetContactNodePtr->getContactPtr()->removeContactAffiliates(pickAffiliate - 1);
						cout << "\nAffiliate removed.\n";

					}

					else
					{
						cout << "\nPlease enter new data\n";
						string iEdit;
						cin >> iEdit;
						targetContactNodePtr->getContactPtr()->editContactAffiliates(pickAffiliate - 1, iEdit, choice - 2);
						cout << "\nAffiliate updated.\n";

					}
				}//end remove/edit affiliate attributes

			}//end edit affiliate

			else //edit using the first 13 fields
			{
				string iEdit;
				cout << "\nPlease enter new data\n";
				if (fieldToEdit == 4)
				{
					cin.ignore();
					getline(cin, iEdit);
				}
				else
				{
					cin >> iEdit;
				}

				EditField(targetContactNodePtr, iEdit, fieldToEdit);
			}//end edit on 13 fields
				
		}
		}//end search by ID number

	
}

void SortMenu(BSTree & ContactTree)
{
	vector<Contact_Info>ContactTreeVec;
	ContactTree.printToVector(ContactTree.Root(), ContactTreeVec);

	cout << "\nSort contacts by:\n"
		<< "\t1: First Name\n"
		<< "\t2: Last Name\n"
		<< "\t3: Company Name\n"
		<< "\t4: State\n"
		<< "\t5: City\n"
		<< "\t6: Zipcode\n";
	int pick;
	cin >> pick;

	pick = menuChoiceValidator(1, 6, pick);

	switch (pick) 
	{
	case 1:
		sort(ContactTreeVec.begin(), ContactTreeVec.end(), byFName);
		printSortedVec(ContactTreeVec);
		break;
	case 2:
		sort(ContactTreeVec.begin(), ContactTreeVec.end(), byLName);
		printSortedVec(ContactTreeVec);
		break;
	case 3:
		sort(ContactTreeVec.begin(), ContactTreeVec.end(), byCompanyName);
		printSortedVec(ContactTreeVec);
		break;
	case 4:
		sort(ContactTreeVec.begin(), ContactTreeVec.end(), byState);
		printSortedVec(ContactTreeVec);
		break;
	case 5:
		sort(ContactTreeVec.begin(), ContactTreeVec.end(), byCity);
		printSortedVec(ContactTreeVec);
		break;
	case 6:
		sort(ContactTreeVec.begin(), ContactTreeVec.end(), byZipCode);
		printSortedVec(ContactTreeVec);
		break;
	}

}

void SortSearchResult(vector<Contact_Info>& ContactTreeVec)
{
	cout << "\nSort contacts by:\n"
		<< "\t1: First Name\n"
		<< "\t2: Last Name\n"
		<< "\t3: Company Name\n"
		<< "\t4: State\n"
		<< "\t5: City\n"
		<< "\t6: Zipcode\n";
	int pick;
	cin >> pick;

	pick = menuChoiceValidator(1, 6, pick);

	switch (pick)
	{
	case 1:
		sort(ContactTreeVec.begin(), ContactTreeVec.end(), byFName);
		printSortedVec(ContactTreeVec);
		break;
	case 2:
		sort(ContactTreeVec.begin(), ContactTreeVec.end(), byLName);
		printSortedVec(ContactTreeVec);
		break;
	case 3:
		sort(ContactTreeVec.begin(), ContactTreeVec.end(), byCompanyName);
		printSortedVec(ContactTreeVec);
		break;
	case 4:
		sort(ContactTreeVec.begin(), ContactTreeVec.end(), byState);
		printSortedVec(ContactTreeVec);
		break;
	case 5:
		sort(ContactTreeVec.begin(), ContactTreeVec.end(), byCity);
		printSortedVec(ContactTreeVec);
		break;
	case 6:
		sort(ContactTreeVec.begin(), ContactTreeVec.end(), byZipCode);
		printSortedVec(ContactTreeVec);
		break;
	}

}

void SearchMenu(BSTree & ContactTree)
{
	int searchMainChoice, searchSubChoice;
	vector<Contact_Info> ContactTreeVec;
	
	cout << "\nPlease select Search mode\n"
		<< "1: Search by field for an exact match\n"
		<< "2: Search a key word across all fields\n"
		<< "3: Return to main Menu\n";
	cin >> searchMainChoice;

	searchMainChoice = menuChoiceValidator(1, 3, searchMainChoice);

	if (searchMainChoice == 1) //search by field
	{
		printCommonFields();
		cin >> searchSubChoice;

		searchSubChoice = menuChoiceValidator(1, 6, searchSubChoice);

		if (searchSubChoice == 1) //searching by ID
		{
			long int targetID;
			cout << "\nPlease enter Conatct ID: ";
			cin >> targetID;
			//look up contact 

			if (ContactTree.findNode(targetID, ContactTree.Root()) == nullptr)
			{
				cout << "\nNo such contact found!! Returning to main menu...\n";

			}

			else
			{//contact found
				
				cout << "\nContact found!!\n";
					ContactTree.findNode(targetID, ContactTree.Root())->getContactPtr()->displayContact();
			}
		}//end Search by ID

		else if (searchSubChoice >= 2 && searchSubChoice <= 5)
		{//Search by 2)Fname, 3)Lname, 4)Email, 5)Company

		 //Clear the vector and copy BSTree to vector
			ContactTreeVec.clear();
			ContactTree.printToVector(ContactTree.Root(), ContactTreeVec);

			//bineary search function takes 1=Fname, 2=Lname 3= Email 4=company
			//i.e fieldMenu -1 is field int for binarySearchString function

			cout << "\nPlease enter target\n";
			string target;
			cin.ignore();
			getline(cin, target); //read the whole line because company name could multilple words

			int pos = BinarySearchString(ContactTreeVec, target, 0, ContactTreeVec.size() - 1, searchSubChoice - 1);

			if (pos == -1)
			{//contact not found
				cout << "Contact was not found!! Returning to main Menu\n";
				ContactTreeVec.clear(); // clear the vector
			}

			else
			{
				cout << "\nContact found!!\n"
					<< ContactTreeVec[pos];
				ContactTreeVec.clear(); // clear the vector
			}
		}//end Search by 2)Fname, 3)Lname, 4)Email, 5)Company


		else //search by Affiliate
		{
			//convert the BSTree to vect.
			ContactTreeVec.clear();
			ContactTree.printToVector(ContactTree.Root(), ContactTreeVec);
			cout << "\nSearch Affiliate by:\n"
				<< "1: First Name\n"
				<< "2: Last Name\n"
				<< "3: Email\n"
				<< "4: Phone number\n"
				<< "5: Return to main Menu\n";
			int affiliateSubMenu;
			cin >> affiliateSubMenu;

			//validate user's choice input
			affiliateSubMenu = menuChoiceValidator(1, 5, affiliateSubMenu);

			if (affiliateSubMenu == 1) //search by Affiliate first Name/////////////////////////////
			{
				string Fname;
				cout << "\nPlease enter first name of Affiliate: ";
				cin >> Fname;
				//field: 0 = phoneNumber, 1 = first name, 2 = last name, 3 = email

				int pos = SearchAffiliates(ContactTreeVec, Fname, 1);
				//searching by First name pos contains position of the Contact
				// in AddressBookVec that has the targeted Affiliate

				if (pos != -1)
				{//contact with targeted affiliate is found

					cout << "\nContact found!!\n"
						<< ContactTreeVec[pos];
					ContactTreeVec.clear(); // clear the vector
				}

				else
				{
					//target affiliate is not found
					cout << "Contact was not found!! Returning to main Menu\n";
					ContactTreeVec.clear(); // clear the vector
				}

			}//end search by Affiliate First name///////////////////////////////////////////////////////

			
			else if (affiliateSubMenu == 2) // search by Affiliate last Name
			{
				ContactTreeVec.clear();
				ContactTree.printToVector(ContactTree.Root(), ContactTreeVec);

				string Lname;
				cout << "\nPlease enter last name of Affiliate: ";
				cin >> Lname;
				//field: 0 = phoneNumber, 1 = first name, 2 = last name, 3 = email
				int pos = SearchAffiliates(ContactTreeVec, Lname, 2); //searching by Last name 			
			//pos contains position of the Contact
		    // in AddressBookVec that has the targeted Affiliate

				if (pos != -1)
				{//contact with targeted affiliate is found

					cout << "\nContact found!!\n"
						<< ContactTreeVec[pos];
					ContactTreeVec.clear(); // clear the vector
				}

				else
				{
					//target affiliate is not found
					cout << "Contact was not found!! Returning to main Menu\n";
					ContactTreeVec.clear(); // clear the vector
				}

			}//end search by Affiliate last name ///////////////////////////////////////////////////////


			else if (affiliateSubMenu == 3) //search by Affiliate email
			{

				ContactTreeVec.clear();
				ContactTree.printToVector(ContactTree.Root(), ContactTreeVec);

				string email;
				cout << "\nPlease enter affiliate email: ";
				cin >> email;
				//field: 0 = phoneNumber, 1 = first name, 2 = last name, 3 = email
				int pos = SearchAffiliates(ContactTreeVec, email, 3);
				//searching by email. 
				//pos contains position of the Contact
				// in AddressBookVec that has the targeted Affiliate

				if (pos != -1)
				{//contact with targeted affiliate is found

					cout << "\nContact found!!\n"
						<< ContactTreeVec[pos];
					ContactTreeVec.clear(); // clear the vector
				}

				else
				{
					//target affiliate is not found
					cout << "Contact was not found!! Returning to main Menu\n";
					ContactTreeVec.clear(); // clear the vector
				}

			}//end search by Affiliate eamail ///////////////////////////////////////////////////////////


			else if (affiliateSubMenu == 4) //search by Affiliate phone
			{
				ContactTreeVec.clear();
				ContactTree.printToVector(ContactTree.Root(), ContactTreeVec);

				string phone;
				cout << "\nPlease enter last name of Affiliate: ";
				cin >> phone;
				//field: 0 = phoneNumber, 1 = first name, 2 = last name, 3 = email
				int pos = SearchAffiliates(ContactTreeVec, phone, 0);  //searching by phone number
			//pos contains position of the Contact
		    // in AddressBookVec that has the targeted Affiliate

				if (pos != -1)
				{//contact with targeted affiliate is found

					cout << "\nContact found!!\n"
						<< ContactTreeVec[pos];
					ContactTreeVec.clear(); // clear the vector
				}

				else
				{
					//target affiliate is not found
					cout << "Contact was not found!! Returning to main Menu\n";
					ContactTreeVec.clear(); // clear the vector
				}

			}//end search by Affiliate phone ////////////////////////////////////////////////////////////

		}//end Search by Affiliate

	}//End search by Common fields

	else if (searchMainChoice == 2) //whole search across every field*********************************
	{
		ContactTreeVec.clear();
		ContactTree.printToVector(ContactTree.Root(), ContactTreeVec);
		vector<Contact_Info> SearchResult;
		bool flip = true;
		string target;

		cout << "\nPlease enter word/phrase to seach across all fields\n"
			<< "\nAny contact with fields that match or contain the phrase will be out put\n"
			<< "Enter phrase/word: ";
		cin.ignore();
		getline(cin, target);

		SearchContain(ContactTreeVec, target, SearchResult);
		flip = false;
		ContactTreeVec.clear();

		cout << "\n" << SearchResult.size() << " matching contacts found\n";

		int subMenu = 1;
		while (subMenu)
		{
			cout << "\n1: Refine Search\n"
				<< "2: Print search result to file or screen\n"
				<< "3: Sort search result\n"
				<< "4: Return to main Menu\n";

			cin >> subMenu;

			subMenu = menuChoiceValidator(1, 4, subMenu);

			if (subMenu == 1) //refine search
			{
				cout << "Enter phrase/word: ";
				cin.ignore();
				getline(cin, target);

				if (flip)
				{
					SearchContain(ContactTreeVec, target, SearchResult);
					flip = false;
					ContactTreeVec.clear();

				}
				else
				{
					SearchContain(SearchResult, target, ContactTreeVec);
					flip = true;
					SearchResult.clear();
				}
			}//end refine seach


			else if (subMenu == 2) //Print result
			{
				if (flip)
				{
					printRefinedSearch(ContactTreeVec);
				}

				else
				{
					printRefinedSearch(SearchResult);
				}
			}//end print result


			else if (subMenu == 3) //sort search result
			{
				if (flip)
				{
					SortSearchResult(ContactTreeVec);
				}

				else
				{
					SortSearchResult(SearchResult);
				}
			}//end sort

			else //return to main menu
			{
				
				ContactTreeVec.clear();
				SearchResult.clear();
				subMenu = 0;
			}

		}//end sunMenu while-loop
		
	}//end of whole search
}

void SaveToFile(BSTree & ContactTree, string inFile)
{
	ofstream outFile;
	cout << "\nPlease enter 1 or 2 to choose from the options below\n"
		<< "1: Save as(Save to an new file)\n"
		<< "2: Save(overide the original file)\n";
	int pick;
	cin >> pick;
	pick = menuChoiceValidator(1, 2, pick);

	if (pick == 1)// save to a new File
	{
		cout << "Enter text file name (fileName.txt): ";
		string fileName;
		cin >> fileName;
		outFile.open(fileName);
	}

	else
	{
		outFile.open(inFile);

	}
	ContactTree.printInorder(ContactTree.Root(), outFile);
}





