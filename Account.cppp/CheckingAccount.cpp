/*
*This class is checking account CPP. This class does all the implementation
*for checking account H. This class also calculates the fees charges per
* transaction
*/


#include <iostream>
using namespace std;
#include "CheckingAccount.h"
//Constructor that passes the value in fees variable
CheckingAccount :: CheckingAccount (double balance , double fees) : Account (balance){
	this-> fees = fees;
}
//This method subtract the fee from the account balance whenever either transaction is performed successfully
void CheckingAccount :: credit (double amount){
	Account :: credit (amount - fees);
}
// Debit function should charge a fee only if money is actually withdrawn
void CheckingAccount :: debit (double amount){
	double amt;
	amt = amount + fees;
	if (getBalance() < amt){
		cout<< "Debit exceeded"<< endl;
	}else {
		Account :: debit (amt);
	}

}
