/*
 * This class (header class)  shows all the convention which will be getting used for
 * car.cpp. This class also inherits the carbonFoot gets abstract method from abstract
 * class to calculate carbon footprint.
 */

#ifndef CARBONFOOTPRINT_CAR_H_
#define CARBONFOOTPRINT_CAR_H_
#include <string>
#include "CarbonFootprint.h"
//Class inherits carbonFootprint
class Car: public CarbonFootprint
{
public:
//Three argument constructor passes the value of attribute
Car(double gallonsOfGas); //constructor
virtual ~Car()
{
} //destructor
//virtual method from carbon footprint
virtual void getCarbonFootprint() ;

//Getter for the variable
double getGallonsOfGas() const;
//Setter for the varibale
void setGallonsOfGas(double gallonsOfGas);

//Declare the attributes as class level variable.
private:
double gallonsOfGas;


};

#endif /* CARBONFOOTPRINT_CAR_H_ */

