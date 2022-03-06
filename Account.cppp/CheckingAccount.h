/*
 *This class will derived class checking account should inherit
 *from the base class account. This class includes new data member
 * which represents the fees charged per transaction.
 */
#ifndef CHECKINGACCOUNT_H
#define CHECKINGACCOUNT_H
#include "Account.h" // Account class definition

class CheckingAccount : public Account{
public:
//Constructor takes two parameter initial balance and the fees.
	CheckingAccount(double balance , double fees);
//Declare the overide methods
	void credit(double amount);
	void debit (double amount);
//class level variable for fees charge per transaction
private:
	double fees;
};
#endif
