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
This is the implemetation file for Contact_Info Class

*/

#ifndef CONTACT_INFO_
#define CONTACT_INFO

#include"Affiliate.h"
#include<vector>
#include<iostream>
#include<cctype>

using std::string;
using std::istream;
using std::ostream;
using std::vector;
using std::endl;
using std::cout;
using std::cin;
using std::getline;


class Contact_Info
{
private:
	long int IDnumber;
	string firstName;
	string middleName;
	string lastName;
	string companyName;
	string homePhone;
	string officePhone;
	string email;
	string mobileNumber;
	string streetAddress;
	string city;
	string state;
	string zipCode;
	string countyr;
	vector<Affiliate>contactAffiliates;

public:
	Contact_Info();
	//~Contact_Info();
	void setIDnumber(long int iIDnumber);
	void setFirstName(string iFirstName);
	void setMiddleName(string iMiddleName);
	void setLastName(string iLastName);
	void setCompanyName(string iCompanyName);
	void setHomePhone(string iHomePhone);
	void setOfficePhone(string iOfficePhone);
	void setEmail(string iEmail);
	void setMobileNumber(string iMobileNumber);
	void setStreetAddress(string iStreetAddress);
	void setCity(string iCity);
	void setState(string iState);
	void setZipCode(string iZipCode);
	void setCountry(string iCountry);
	void addContactAffiliates(Affiliate iAffiliate);
	void removeContactAffiliates(int pos);
	void editContactAffiliates(int pos, string iEdit, int field);


	long int getIDnumber();
	string getFirstName();
	string getMiddleName();
	string getLastName();
	string getCompanyName();
	string getHomePhone();
	string getOfficePhone();
	string getEmail();
	string getMobileNumber();
	string getStreetAddress();
	string getCity();
	string getState();
	string getZipCode();
	string getCountry();
	size_t getNumOfAffiliates();

	bool searchAffiliateField(string target, int field);
	bool searchAffiliateContain(string target);

	void displayContact();
	void printAffiliate();

	Contact_Info& operator = (const Contact_Info& iContact);
	friend ostream& operator << (ostream& out, Contact_Info& Contact);
	friend istream& operator >> (istream& in, Contact_Info& Contact);
	
	
};



#endif