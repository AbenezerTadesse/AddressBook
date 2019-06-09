# AddressBook
The program gives the user the ability to add contact information data from a text file or manually. 
Contacts can be sorted and searched using different fields. Add, remove, edit and read and export to a file functionalities are also included.

**Contact** object has 15 fields to store contact info. such as: unique ID, first, middle, and last name, company, home, office, and cell phone numbers, email, address (street, city, state, zip, country), and a list of affiliates. 

**Affiliate** has fields first and last name, cell number, and email.

Program can read in a list of contacts from a text file or manually from user input. Contacts can be sorted by either one of these six fields: first name, last name, company name, state, city, and zip. To search for a contact, user has the option to either perform the search on a specific contact field eg. search for contact with first name John or perform a search across all fields. Searching by a field results in the first encounter of target contact whereas searching across all fields results in all the matching hits of the searched phrase. In the case of the latter the user has the option to refine the search i.e search within the list of matching results.

``std::sort`` is used for sorting with overloaded ``>`` and ``<`` operators. Complexity ``O(N log(N))``

Contacts are stored using binary search tree based on thier unique ID. Adding and deleting costs ``O(logN)`` but for the purpose of implementing nodes and binary search tree this approach was taken. 

When searching by ID O(log N) and for all other fields, the contacts are first moved to a vector (``N operations``), then sorted by the desired field. At which point, binary search algorithm is used for ``O(logN)``.
All together searching by a specific field is ``O(logN) + N + N(log(N)) = N(log(N))``

The program is written in C++ as a data structure course final project. All the source files needed to run this program along with example input text file are provided here.  
