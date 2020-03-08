#include <iostream> //Programs uses  Input and Output Stream
#include "Bank_and_Customer_Prototypes.h"	// Include header file containing class Customer and class Bank
using namespace std;

// Definition of Class Bank's functions(methods) outside the file the class was defined

Bank::Bank() { //Default Constructor
		bankCustomer= Customer(" ", " ",0," "," ");
		accountType = "Savings";
		accountNumber = 0000000;
	amountInBank = 0; // Default Account Balance
	}

Bank::Bank( Customer myCustomer, string acct_type, long acct_numb, long amnt){
	bankCustomer = myCustomer;
	accountType = acct_type;
	accountNumber = acct_numb;
	amountInBank = amnt;
}

void Bank::welcome() {
	cout <<"\n**********************************************************";
	cout <<"\nWelcome to My Bank Plc\n";
	cout <<"Are you a new user? if yes press 1 otherwise press any other number \n";
	
}

void Bank::bankMenu() {
	cout <<"\n**********************************************************";
	cout << "\n1. Check balance" <<"    2. Account Info." <<"    3. Deposit(Save)" <<"\n4. Withdraw" <<"\t5. Exit\n";
	cout <<"\n**********************************************************\n";
	int bankTransaction; // Specify Bank Operation type
		cin>>bankTransaction; //let user choose transaction type based on prompt
		switch (bankTransaction) {
		case 1:
			balance();
			break;
		case 2:
			accountInformation(); break;
		case 3:
			deposit(); break;
		case 4:
			withdraw(); break;
		case 5:
			exitBank(); break;
		
		} //End Switch
	}


void Bank::balance() {
	cout<< "You have " << amountInBank << " in your " <<accountType <<" Account" <<endl;
	bankMenu();
}

void Bank::createAccount() {
	string acctMode;
	bankCustomer.setDetails();
	cout<< "\nAccount type: ";
		cin>>acctMode;
		cout << "You have created an Account with us succesfully! \n";
		accountType = acctMode;
		accountNumber = 100000000+ rand()%200000000; // Randomly generate an account number for the new user
		cout<<"\nWelcome " <<bankCustomer.getName()<<" !";
		bankMenu();
}

void Bank::deposit() {
	long int amount;
	cout << "\nEnter the Amount you want to deposit: ";
		cin >> amount;
		amountInBank += amount;
		cout <<"\nTransaction Processed" <<endl;
		bankMenu();
}

void Bank::withdraw() {
	long int amount;
	cout << "\nEnter the Amount you want to withdraw: ";
		cin >> amount;
		if (amount >= amountInBank){
			cout<< "\nSorry you have an insufficient Balance to Perform the Operation\n"
				<<"Please, perform another operation or you exit the Banking session";
				bankMenu();
		}
		amountInBank -= amount;
		cout <<"\nTransaction Processed\n" <<endl;
		bankMenu();
}

void Bank::accountInformation() {
	bankCustomer.display();
	cout <<"Account Number: 0" <<accountNumber<<"\nAmount Balance: " <<amountInBank
				<<"\nAccount Type: " <<accountType <<endl;
	bankMenu();
}

void Bank::exitBank() {
	cout <<"\nThank you "<< bankCustomer.getName() <<", For Banking with us!\n";
	exit(0); // Exit Program
	
}