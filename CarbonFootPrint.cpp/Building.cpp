/*
 * This class has all the implementation from Building.H . This class also
 * inherits the get Carbon to calculate
 *
 */

#include <iostream>
#include "Building.h"

using namespace std;

//constructor for Building object
Building :: Building (int sF){

this->squareFeet = sF;
}

//GetCarbonFootprint virtual function
void Building::getCarbonFootprint() {
	//calculates the carbonFootprint
double myCarbonFootPrint = squareFeet * 134;
cout<< "Building with " << squareFeet <<" square feet : "<<myCarbonFootPrint << endl;
}

//getter for square feet
double Building::getSquareFeet() const {
	return squareFeet;
}
//Setter for square Feet
void Building::setSquareFeet(double squareFeet) {
	this->squareFeet = squareFeet;
}
