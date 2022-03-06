/*
 * This class is  a header class for bicycle. In this class you will have
 * all the conventions and all the virtual methods. This class also inherits the  carbonFoot gets abstract
 * method from abstract class to calculate carbon footprint.
 */

#ifndef CARBONFOOTPRINT_BICYCLE_H_
#define CARBONFOOTPRINT_BICYCLE_H_
#include "CarbonFootprint.h"
#include <string>

class Bicycle: public CarbonFootprint {
public:
//virtual method called from getCarbon class
virtual void getCarbonFootprint() ;

};

#endif /* CARBONFOOTPRINT_BICYCLE_H_ */


