/*
 * Name : Ishmeet Singh
 * Project Name : Ratioanl.cpp
 * Instructor : Kamil Samara
 *
 * Description: In this project you will make using an abstract class with only pure virtual functions,
 * you can specify similar behaviors for possibly disparate classes.
 *
 * In this project you will be creating three small classes by inheritance—classes Building, Car and Bicycle. Give each
 * class some unique appropriate attributes and behaviors that it does not have in common with other classes.
 * Write an abstract class CarbonFootprint with only a pure virtual getCarbonFootprint member function. Have each of your
 * classes inherit from that abstract class and implement the getCarbonFootprint member function to calculate an appropriate
 * carbon footprint for that class.
 *
 *
 *
 *
 *  Known Bugs : None
 *
 */

#ifndef CARBONFOOTPRINT_CARBONFOOTPRINT_H_
#define CARBONFOOTPRINT_CARBONFOOTPRINT_H_
#include <string>
//
class CarbonFootprint {
public:

//abstract function for calculating carbon footprint
virtual void getCarbonFootprint() = 0 ;

};

#endif /* CARBONFOOTPRINT_CARBONFOOTPRINT_H_ */

