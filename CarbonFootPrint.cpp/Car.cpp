/*
 * In this class you will be performing all the implementations from car.H
 * In this class you also will be calculating carbon footprint for car using
 * the abstract class.
 */

#include <iostream>
#include "Car.h"
#include <string>
using namespace std;
//Three variable constructor which takes different attributes and set the carbonfootprint to aa value
Car::Car (double g) {
	this->gallonsOfGas = g;

}

//CarbonFootprint’s virtual function
void Car::getCarbonFootprint() {
//Calculate the carbon footprint

double myCarbonFootPrint = gallonsOfGas * 20 ;
cout << "Car that used " << gallonsOfGas << " gallons of gas : " << myCarbonFootPrint << endl;
}

//Getter for gallons of gas
double Car::getGallonsOfGas() const {
	return gallonsOfGas;
}
//Setter for gallon of gas
void Car::setGallonsOfGas(double gallonsOfGas) {
	this->gallonsOfGas = gallonsOfGas;
}
