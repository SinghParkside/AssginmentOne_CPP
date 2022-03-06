/*
 *This class is called a Account.CPP in which
 *contains all the implementations from Account h
 *
 *For implementations you must include account.H
 *
 */

#include <iostream>
using namespace std;
#include "Account.h"
//One argument constructor
Account :: Account(double balance)
{
	//Receives an initial balance and uses it to initialize the data member
	if (this->balance >= 0.0){
		//if the balance is zero provide a error
		this->balance = balance;
	}else {
		this->balance = 0.0;
		cout<< "Initial balance was invalid";
	}
}
//Getter for get balance
double Account ::getBalance()
{
		return this-> balance;
}
// This method add the amount to the balance
void Account :: credit(double amount)
{
balance = balance + amount;
}
// This method make sure the amount does not exceed if it does
void Account :: debit(double amount)
{
	// if the balance is less then amount then subtract it. If not print a error
	if (balance > amount){
		balance = balance - amount;
	} else {
		cout << "Debit amount exceded account balance" << endl;	}
}





