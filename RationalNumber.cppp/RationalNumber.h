/*
 * Name : Ishmeet Singh
 * Project Name : Ratioanl.cpp
 * Instructor : Kamil Samara
 *
 * Description: This program will cover the concept of operator
 *overloading in C++. Operator overloading is important concept
 *in C++. In C++ we can change the way operator works for user
 *defined types like objects and structures.
 *
 *In rational class you will overload multiple operators and
 *they will work for user defined types which will get tested
 *in main.
 *
 *This is the RationalNumber header file which will contain
 *all the conventions.
 *
 *
 *
 *  Known Bugs : None
 *
 */

#ifndef RationalNumber_H_
#define RationalNumber_H_
#include <iostream>
using namespace std;

class RationalNumber {


public:
	//construct with two arguments take int and int as a parameter.
	RationalNumber(int num, int  den);
	// Overloading the + operator.
	RationalNumber operator+(RationalNumber  &a);
	// Overloading the - operator.
	RationalNumber operator-(RationalNumber  &s);
	// Overloading the * operator.
	RationalNumber operator*(RationalNumber  &m);
	// Overloading the / operator.
	RationalNumber operator/(RationalNumber  &d);
	// Overloading the == operator.
	bool operator ==( RationalNumber &e);
	// Overloading the != operator.
	bool operator !=( RationalNumber &n);
	// to string to print the object
	string toString();


private:
	//declare class level variables.
	int numerator;
	int denominator;


};

#endif /* RationalNumber_H_ */
