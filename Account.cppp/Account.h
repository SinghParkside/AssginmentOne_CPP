/*
 * Name : Ishmeet Singh
 * Project Name : Account.cpp
 * Instructor : Kamil Samara
 *
 * Description: This program will cover the concept of inheritance.
 * In this program you will be inheriting multiple classes. In java
 * multiple inheritance is not allowed in java but in c++  it is.
 *
 * This is the account class (base class) and it derived the classes
 * Savings and checkings. This program will make you understand the detail
 * of inheritance how multiple classes work together
 *
 * This is the header class and it cantains the conventions. All the implementations
 * will happen in account cpp class
 *
 * Known Bugs : None
 *
 */
#ifndef ACCOUNT_H_
#define ACCOUNT_H_

class Account {
public:
//Account class constructor with one argument takes balance
	Account (double balance);
//getter for balace
	double getBalance();
// Declare all the methods credit and debit
	void credit(double amount);
	void debit(double amount);
//class level variable balance
protected :
	double balance;



};
