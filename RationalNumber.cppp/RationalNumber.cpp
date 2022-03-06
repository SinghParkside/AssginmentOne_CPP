/*
 *This is the rational CPP class. This class will contain
* Implementations from rational h. This class also should
* include rational h in order to recognize all the conventions.
 */
#include <iostream>
#include <string>
using namespace std;
#include "RationalNumber.h"

//Implementation on the rational number to argument constructor
RationalNumber::RationalNumber(int num, int den)
{
// Set the arguments to the class level variables
	this->numerator = num;
//
	if (den > 0 && den != 0 ){
	   this->denominator = den;
	}else {
		cout <<"Can't divide by zero"<<endl;
	}

}
//This method will overload the plus operator and perform calculations.
RationalNumber RationalNumber::operator +(RationalNumber &a) {
	//Perform calculations in order to find one rational plus another rational
	   RationalNumber temp((this->numerator * a.denominator) + (a.numerator * this->denominator) , this->denominator * a.denominator);
	   return temp;
}
//This method will overload the subtract operator and implement the method.
RationalNumber RationalNumber::operator -(RationalNumber &s) {
//Perform calculations in order to find one rational minus other rational
	  RationalNumber temp((this->numerator * s.denominator) + (s.numerator * this->denominator),
	 this->denominator * s.denominator);
	  	 return temp;
}
//This method will overload the multiply operator and perform calculations
RationalNumber RationalNumber::operator *(RationalNumber &m) {
	//Perform calculations in order to find one rational multiplied by other rational
	RationalNumber temp ((this->numerator * m.numerator),
	     (this->denominator * m.denominator));
	   	   return temp;
}
//This method will overload the divide operator and perform calculations.
RationalNumber RationalNumber::operator /(RationalNumber &d) {
//Perform calculations in order to find one rational divided by the rational
	   RationalNumber temp ((this->numerator * d.denominator),
	   (this->denominator * d.numerator));
	   return temp;
}
//This method find out if the fraction is not equal to each other
bool RationalNumber ::operator !=(RationalNumber & n){
	//Declare a boolean
	bool result;
	//declare two temp to check if the rational are equal
		double temp, tempOne;
		//perform calculations
		temp = numerator / n.numerator;
		tempOne = denominator / n.denominator;
		//if they are store it in the result
		if (temp == tempOne){
			result = true;;
		}
		else {
			result = false;
		}
		return result;
}
//This method finds that the fraction is equal to reach other or not
bool RationalNumber ::operator ==(RationalNumber & e){
	//Declare a boolean
	bool result;
	//declare two temp to check if the rational are not equal
	double temp, tempOne;
	//perform calculations
	temp = numerator / e.numerator;
	tempOne = denominator / e.denominator;
	//if they are not store it in the result
	if (temp != tempOne){
		result = true;;
	}
	else {
		result = false;
	}
	return result;

}
//This method prints the object information
string RationalNumber :: toString()
{
 	return to_string(this->numerator) + '/' + to_string(this->denominator);
}

