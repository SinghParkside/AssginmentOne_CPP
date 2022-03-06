/*
 *This is a header class for building all the virtual methods gets
 *convention in this class.  This class also inherits the carbonFoot gets abstract
 *method from abstract class to calculate carbon footprint.
 */

#ifndef CARBONFOOTPRINT_BUILDING_H_
#define CARBONFOOTPRINT_BUILDING_H_
#include <string>

#include "CarbonFootprint.h"

class Building: public CarbonFootprint
{
public:
//Connstructor with parameter defining attribute
Building(int squareFeet ); //constructor

virtual ~Building()
{
} // destructor

//virtual method called from getCarbon class
virtual void getCarbonFootprint() ;

//Getter for the variable
double getSquareFeet() const;
//Setter for the variable
void setSquareFeet(double squareFeet);
//Declare all the class level variable for each attribute
private:
int squareFeet;


};

#endif /* CARBONFOOTPRINT_BUILDING_H_ */


