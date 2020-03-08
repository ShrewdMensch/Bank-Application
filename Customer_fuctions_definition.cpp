#include <iostream> //Programs uses  Input and Output Stream
#include "Bank_and_Customer_Prototypes.h"	// Include header file containing class Customer and class Bank
using namespace std;

// Definition of Class Customer's functions(methods) outside the file the class was defined
Customer::Customer() {
	firstName = " ";
	surName = " ";
	age = 0;
	address = " ";
	telNumber = "80000000000";
}

Customer::Customer( string fName, string sName, int yourAge, string tel, string addrs) {
	firstName = fName;
	surName = sName;
	age = yourAge;
	telNumber = tel;
	address = addrs;

}

	void Customer::setDetails() {
	string fName;
	string sName;
	int yourAge;
	string tel;
	string addrs;
	cout << "\nEnter your First Name: "; // Prompt for name
		cin.get();	// Prevents program from exiting Input
		cin>>fName;

		cout << "\nEnter your SurName: "; // Prompt for name
		cin.get();	// Prevents program from exiting Input
		cin>>sName;

		cout <<"\nEnter your age: ";
		cin >> yourAge; 

		cout << "\nEnter your Telephone Number: ";
		cin.get();	// Prevents program from exiting Input
		cin >> tel;

		cout << "\nEnter you Home address: ";
		cin.get();	// Prevents program from exiting Input

			getline( cin, addrs,'\n');
			address = addrs;
			firstName = fName;
			surName = sName;
			age = yourAge;
			telNumber = tel;
}

	string Customer::getFirstName() {
	return firstName;
}

	string Customer::getSurName() {
	return surName;
}

string Customer::getName() {
	return (getSurName()+ " "+getFirstName());
}

int Customer::getAge() {
	return age;
}

string Customer::getTelNumber() {
	return telNumber;
}

string Customer::getAddress() {
	return address;
}

void Customer::display() {
	cout<< "\nAccount Name: " <<getName()<<"\nAge: " << getAge() <<"\nTelephone Number: " 
		<< getTelNumber() <<"\nAddress: "<< getAddress() <<endl;
}
