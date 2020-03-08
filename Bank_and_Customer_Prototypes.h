#ifndef BANK_AND_CUSTOMER_PROTOTYPE_H  // to prevent multiple inclusion of this header file
#define BANK_AND_CUSTOMER_PROTOTYPE_H
#include <string>
#include <cstdlib> // C++ standard library(for rand)
using namespace std;


// Class Customer definition
class Customer {
	// class Customer Data Members Declarations
	string firstName; // customer's  first name
	string surName; // customer's  last name
	int age; // Customer's age
	string telNumber; // Customer's telephone Number
	string address; // Customers address 

	// Member Fuctions' prototypes
public:
	Customer();
	Customer( string,string,int,string,string );
	void setDetails();	//Function that set Customer's Details
	string getFirstName();	// Function that get Customer's first Name
	string getSurName();	// Function that get Customer's last Name
	string getName();	// Function that get Customer's Full  Name
	int getAge();		// Function that get Customer's Age
	string getTelNumber();	// Function that get Customer's Telephone Number
	string getAddress();   // Function that get Customer's Address
	void display();       // Function that get Customer's Bio-Data
}; // End Class Definition

// Class Bank Definition
class Bank {
	// Data Members' declarations
	long int amountInBank;
	Customer bankCustomer;
	int userPin;
	long int accountNumber;
	string accountType;

	// Member Fuctions' prototypes
public:
	Bank(); // Default Constructor
	Bank( Customer, string, long , long ); // Constructor with 4 Parameters
	static void welcome(); // Function for welcome page
	void bankMenu(); // Function for bank menu
	void balance(); // Function to get balance
	void createAccount(); // Fuction to create new Bank account
	void accountInformation(); // Function to Display Customer's Bank Account Information
	void deposit(); // Function for Deposit
	void withdraw(); // Function for Withdraw
	void exitBank(); // Fuction to exit from the Banking session
	/*void savings();		// Fucntion for savings account
	void current();		// Fucntion for Current account */


}; // End class Bank
#endif
