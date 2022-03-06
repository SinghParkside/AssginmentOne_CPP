/*
 * This class does all the implementation from savingsAccount
 * this class also calculates the interest from the balance
 */

#include <iostream>
using namespace std;
#include "SavingsAccount.h"
// Parameterized constructor set the ate
SavingsAccount :: SavingsAccount (double balance , double rate): Account (balance){
//Set variables and to pass the value.
	this->rate = rate;
	this->balance = balance;
}
//This method calculate the interest.
double SavingsAccount::calculateInterest(){
	return getBalance() * (rate);
}

