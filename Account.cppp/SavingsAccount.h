/*
*Derived-class SavingsAccount should inherit the functionality of an Account,
*but also include a data member of type double indicating the interest rate
*(percentage) assigned to the Account.
*/
#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H
#include "Account.h" // Account class definition

class SavingsAccount : public Account {


public :
//Two argument constructor which takes intial balance and the interest rate
SavingsAccount(double balance, double rate);
// Declare the method calculate interest
double calculateInterest();
//Class level variable for interest rate
private :
double rate;
};
#endif
