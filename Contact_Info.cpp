

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
This is the Contact_Info class implementation file 

*/



#include "Contact_Info.h"

Contact_Info::Contact_Info()
{
	IDnumber = 0;
	firstName = " ";
	middleName = " ";
	lastName = " ";
	companyName = " ";
	homePhone = " ";
	officePhone = " ";
	email = " ";
	mobileNumber = " ";
	streetAddress = " ";
	city = " ";
	state = " ";
	zipCode = " ";
	countyr = " ";
	contactAffiliates.clear();
}


void Contact_Info::setIDnumber(long int iIDnumber)
{
	IDnumber = iIDnumber;
}

void Contact_Info::setFirstName(string iFirstName)
{
	firstName = iFirstName;
}

void Contact_Info::setMiddleName(string iMiddleName)
{
	middleName = iMiddleName;
}

void Contact_Info::setLastName(string iLastName)
{
	lastName = iLastName;
}

void Contact_Info::setCompanyName(string iCompanyName)
{
	companyName = iCompanyName;
}

void Contact_Info::setHomePhone(string iHomePhone)
{
	homePhone = iHomePhone;
}

void Contact_Info::setOfficePhone(string iOfficePhone)
{
	officePhone = iOfficePhone;
}

void Contact_Info::setEmail(string iEmail)
{
	email = iEmail;
}

void Contact_Info::setMobileNumber(string iMobileNumber)
{
	mobileNumber = iMobileNumber;
}

void Contact_Info::setStreetAddress(string iStreetAddress)
{
	streetAddress = iStreetAddress;
}

void Contact_Info::setCity(string iCity)
{
	city = iCity;
}

void Contact_Info::setState(string iState)
{
	state = iState;
}

void Contact_Info::setZipCode(string iZipCode)
{
	zipCode = iZipCode;
}

void Contact_Info::setCountry(string iCountry)
{
	countyr = iCountry;
}

void Contact_Info::addContactAffiliates(Affiliate iAffiliate)
{
	contactAffiliates.push_back(iAffiliate);
}

void Contact_Info::removeContactAffiliates(int pos)
{
	contactAffiliates.erase(contactAffiliates.begin() + (pos));
}

void Contact_Info::editContactAffiliates(int pos, string iEdit, int field)
{
	//1:First Name, 2:Last Name 3:Email 4:Phone
	if (field == 1)//edit name
	{
		contactAffiliates[pos].firstName = iEdit;
	}

	else if (field == 2) //edit Last name
	{
		contactAffiliates[pos].lastName = iEdit;
	}

	else if (field == 3) //edit email
	{
		contactAffiliates[pos].email = iEdit;
	}

	else if (field == 4) //edit phone
	{
		contactAffiliates[pos].mobileNumber = iEdit;
	}

}

long int Contact_Info::getIDnumber()
{
	return IDnumber;
}

string Contact_Info::getFirstName()
{
	return firstName;
}

string Contact_Info::getMiddleName()
{
	return middleName;
}

string Contact_Info::getLastName()
{
	return lastName;
}

string Contact_Info::getCompanyName()
{
	return companyName;
}

string Contact_Info::getHomePhone()
{
	return homePhone;
}

string Contact_Info::getOfficePhone()
{
	return officePhone;
}

string Contact_Info::getEmail()
{
	return email;
}

string Contact_Info::getMobileNumber()
{
	return mobileNumber;
}

string Contact_Info::getStreetAddress()
{
	return streetAddress;
}

string Contact_Info::getCity()
{
	return city;
}

string Contact_Info::getState()
{
	return state;
}

string Contact_Info::getZipCode()
{
	return zipCode;
}

string Contact_Info::getCountry()
{
	return countyr;
}

size_t Contact_Info::getNumOfAffiliates()
{
	return contactAffiliates.size();
}

//***************************
//		Searches for affiliate by first or last or email or phone number 
//		depending on field.
//		Field values are phone = 0, fName = 1, lName = 2, emailAddress = 3
//		returns true if a match is found
//**************************

bool Contact_Info::searchAffiliateField(string target, int field)
{
	
	int phone = 0, fName = 1, lName = 2, emailAddress = 3;

	for (size_t pos = 0; pos < contactAffiliates.size(); pos++)
	{
		if (field == phone)
		{
			if (contactAffiliates[pos].mobileNumber == target)
			{
				return true;
			}
		}

		else if (field == fName)
		{
			if (contactAffiliates[pos].firstName == target)
			{
				return true;
			}
		}

		else if (field == lName)
		{
			if (contactAffiliates[pos].lastName == target)
			{
				return true;
			}
		}

		else if (field == emailAddress)
		{
			if (contactAffiliates[pos].email == target)
			{
				return true;
			}
		}
	}//end for-loop


	return false;
}



//***************************
//		Searches for affiliate using a key word and looks for all affiliate fields  
//		that contian a match. If key word is "no", notebook is considered a match 
//		because it contains the key word.
//		Field values are phone = 0, fName = 1, lName = 2, emailAddress = 3
//		returns true if a match is found
//**************************

bool Contact_Info::searchAffiliateContain(string target)
{

	for (size_t pos = 0; pos < contactAffiliates.size(); pos++)
	{
		if (contactAffiliates[pos].firstName.find(target) != string::npos)
		{
			return true;
		}

		else if (contactAffiliates[pos].lastName.find(target) != string::npos)
		{
			return true;
		}

		else if (contactAffiliates[pos].email.find(target) != string::npos)
		{
			return true;
		}

		else if (contactAffiliates[pos].mobileNumber.find(target) != string::npos)
		{
			return true;
		}
	}


	return false;
}



//prints the contact

void Contact_Info::displayContact()
{
	cout << "ID: " << IDnumber << endl
		<< "First name: " << firstName << endl
		<< "Middle name: " << middleName << endl
		<< "Last name: " << lastName << endl
		<< "Company name: " << companyName << endl
		<< "Home phone: " << homePhone << endl
		<< "Office phone: " << officePhone << endl
		<< "email: " << email << endl
		<< "Mobile: " << mobileNumber << endl
		<< "Street address: " << streetAddress << endl
		<< "City: " << city << endl
		<< "State: " << state << endl
		<< "Zip code: " << zipCode << endl
		<< "Country: " << countyr << endl;
	for (size_t pos = 0; pos < contactAffiliates.size(); pos++)
	{
		cout << contactAffiliates[pos].firstName << " " << contactAffiliates[pos].lastName;
		if (contactAffiliates[pos].mobileNumber != "-1")
		{
			cout << ", " << contactAffiliates[pos].mobileNumber;
		}

		if (contactAffiliates[pos].email != "-1")
		{
			cout << ", " << contactAffiliates[pos].email;
		}

		cout << ";" << endl;
	}

	cout << endl << endl;
}

void Contact_Info::printAffiliate()
{
	int count = 1;
	for (size_t pos = 0; pos < contactAffiliates.size(); pos++)
	{
		cout << count++<<": " << contactAffiliates[pos].firstName << " " <<contactAffiliates[pos].lastName;
		if (contactAffiliates[pos].mobileNumber != "-1")
		{
			cout << "," << contactAffiliates[pos].mobileNumber;
		}

		if (contactAffiliates[pos].email != "-1")
		{
			cout << "," << contactAffiliates[pos].email;
		}

		cout << ";" << endl;
	}
}

Contact_Info & Contact_Info::operator=(const Contact_Info & iContact)
{
	IDnumber = iContact.IDnumber;
	firstName = iContact.firstName;
	middleName = iContact.middleName;
	lastName = iContact.lastName;
	companyName = iContact.companyName;
	homePhone = iContact.homePhone;
	officePhone = iContact.officePhone;
	email = iContact.email;
	mobileNumber = iContact.mobileNumber;
	streetAddress = iContact.streetAddress;
	city = iContact.city;
	state = iContact.state;
	zipCode = iContact.zipCode;
	countyr = iContact.countyr;
	contactAffiliates.clear();

	for (size_t pos = 0; pos < iContact.contactAffiliates.size(); pos++)
	{
		contactAffiliates.push_back(iContact.contactAffiliates[pos]);
	}

	return *this;
}

istream & operator >> (istream & in, Contact_Info& Contact)
{
	string inWord;

	in >> Contact.IDnumber
		>> Contact.firstName
		>> Contact.middleName
		>> Contact.lastName;
	in.ignore();
	getline(in,Contact.companyName);
	getline(in, Contact.homePhone);
	getline(in, Contact.officePhone);
	getline(in, Contact.email);
	getline(in, Contact.mobileNumber);
	getline(in, Contact.streetAddress);
	getline(in, Contact.city);
	getline(in, Contact.state);
	getline(in, Contact.zipCode);
	getline(in, Contact.countyr);

	in >> inWord;
	while (!inWord.empty() &&  inWord != "|")
	{
		Affiliate* newAffiliate = new Affiliate;
		newAffiliate->firstName = inWord;
		in.ignore();
		getline(in, inWord);
		string outName, outNumber, outEmail;
		outName.clear();
		outNumber.clear();
		outEmail.clear();
		int pos = 0;
		
		while (isalpha(inWord[pos]))
		{
			outName.push_back(inWord[pos]);
			pos++;
		}
		newAffiliate->lastName = outName;

		if (inWord[pos] == ';')
		{
			Contact.addContactAffiliates(*newAffiliate);
		}

		else if (inWord[pos] == ',')
		{
			pos++;
			if (inWord[pos] == '(' && isdigit(inWord[pos + 1]))
			{
				for (pos; pos < inWord.length(); pos++)
				{
					if (inWord[pos] == ',' || inWord[pos] == ';')
					{
						break;
					}
					outNumber.push_back(inWord[pos]);
				}
			}
			
			if (inWord[pos] == ';')
			{
				//do nothing its end of line
				outEmail = "-1";
			}
			if (inWord[pos] == ',')//FIX HERE
			{
				pos++;

				for(pos; pos < inWord.length(); pos++)
				{
					if (inWord[pos] == ';')
					{
						break;
					}
					outEmail.push_back(inWord[pos]);
					
				}
			}
			newAffiliate->mobileNumber = outNumber;
			newAffiliate->email = outEmail;
			Contact.addContactAffiliates(*newAffiliate);
		}

		in >> inWord;
	}



	return in;
}



ostream & operator<<(ostream & out, Contact_Info& Contact)
{
	out << Contact.IDnumber << endl
		<< Contact.firstName << endl
		<< Contact.middleName << endl
		<< Contact.lastName << endl
		<< Contact.companyName << endl
		<< Contact.homePhone << endl
		<< Contact.officePhone << endl
		<< Contact.email << endl
		<< Contact.mobileNumber << endl
		<< Contact.streetAddress << endl
		<< Contact.city << endl
		<< Contact.state << endl
		<< Contact.zipCode << endl
		<< Contact.countyr << endl;
	for (size_t pos = 0; pos < Contact.contactAffiliates.size(); pos++)
	{
		out << Contact.contactAffiliates[pos].firstName << " " << Contact.contactAffiliates[pos].lastName;
		if (Contact.contactAffiliates[pos].mobileNumber != "-1")
		{
			out << "," << Contact.contactAffiliates[pos].mobileNumber;
		}

		if (Contact.contactAffiliates[pos].email != "-1")
		{
			out << "," << Contact.contactAffiliates[pos].email;
		}

		out << ";" << endl;
	}

	out << "|" << endl;

	return out;
}


