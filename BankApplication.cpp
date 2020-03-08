#include <iostream> //Programs uses  Input and Output Stream
#include <string>
#include "Bank_and_Customer_Prototypes.h"

using namespace std;

int main() {
	
	int userDeterminant; //test if user is new or existing
	string accountName; // determines the user to deal with
	 
	// Bank Customer Personal Data
	Customer *Customers = new Customer [100]; // Over declaration of Bank Records to size 100
	
	Customers[0] = Customer("ABDULAZEEZ", "BOLARINWA",20,"08185983096","10 Morakinyo, Street, Ajasa-Command, Lagos");
	Customers[1] = Customer("ADEOLA","BOLARINWA", 26,"07064287808","10 Morakinyo, Street, Ajasa-Command, Lagos");
	Customers[2] = Customer("SHAKIRAH","ABDULAZEEZ", 20,"08185806739","Behind Bekandims Hotels, Tanke-OkeOdo, Ilorin");
	Customers[3] = Customer("ABISOLA","LAWAL", 28,"08180647159","10 Morakinyo, Street, Ajasa-Command, Lagos");
	Customers[4] = Customer("ABDULKABIR","BOLARINWA", 30,"08099579483","10 Morakinyo, Street, Ajasa-Command, Lagos");
	Customers[5] = Customer("NASIRU","FOLARANMI", 16,"09033493537","Lamodi Area, Offa, Kwara");
	Customers[6] = Customer("BOLAJI","OMOSANYA",22,"07066291448","22 Karim Laka Street, Egbeda, Lagos");
	Customers[7] = Customer("NASIRAT","FOLARANMI",20,"08078447807","Lamodi Area, Offa, Kwara");
	Customers[8] = Customer("SODIQ","LAWAL", 25,"08099579483","122,Allen Avenue, Ikeja, Lagos");
	Customers[9] = Customer("IBIYEMI","ADEYEMI", 30,"08099579483","10 ogungbite, Street, Banana Island, Lagos");
	
	// Existing Bank Customer Records
		Bank *myBank = new Bank[100];
		myBank[0]= Bank(Customers[0],"Savings",116767005,10000);
		myBank[1]= Bank (Customers[1],"Savings",116767414,6000);
		myBank[2]= Bank (Customers[2],"Savings",116767411,8000);
		myBank[3]= Bank (Customers[3],"Savings",116767314,8000);
		myBank[4]= Bank (Customers[4],"Savings",116766003,7000);
		myBank[5]= Bank (Customers[5],"Current",116767009,4500);
		myBank[6]= Bank (Customers[6],"Current",116767002,8600);
		myBank[7]= Bank (Customers[7],"Current",116767112,6500);
		myBank[8]= Bank (Customers[8],"Current",116767244,3500);
		myBank[9]= Bank (Customers[9],"Current",116767300,2000);

		MENU: //Label name to use go to with
	Bank::welcome(); //Display the welcome message
	
	cin>>userDeterminant; //test if user is new or existing
	if (userDeterminant != 1){
		cout<<"Enter  your First Name (in Upper Case only): ";
	
		cin>>accountName;
		for(int i = 0; i<= 100; i++) {
			if ( accountName == Customers[i].getFirstName() ) {
				
			// give a welcome message to the user
				cout <<"\nWelcome! " << Customers[i].getName();

				// Display the particular User Banking Menu
			myBank[i].bankMenu();
		} // END inner IF
			} // for-loop

		} // End outer 

	
	else
	{
		// User is new create an account
		myBank[10+ rand() % 100].createAccount(); //generate random numbers between 10 and 100
		
	} //End else

	 // If Customer's Name does not match any Record
	if ( (accountName != Customers[0].getFirstName() ) || (accountName != Customers[1].getFirstName() ) ||
				(accountName != Customers[2].getFirstName() ) || (accountName != Customers[3].getFirstName()) 
				|| (accountName != Customers[4].getFirstName() ))  {   // if Name entered is not in Bank record
				cout << "\n" <<accountName <<" is not My Bank Plc Customer\n"
					<<"Please re-select the appropriate Action\n";
				goto MENU;
			} // End if
	delete Customers; // Release dynamic Memory allocate
	delete myBank; // Release dynamic Memory allocate

	return 0; //Inidicate Program Ended Successfully

	} //End function main
