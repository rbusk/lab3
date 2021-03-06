/* Mary Connolly and Ryan Busk
 * Lab 3
 *
 * implementation file for OvernightPackage
 */

#include <iostream>
#include <string>
#include "Package.h"
#include "OvernightPackage.h"
using namespace std;

//nondefault constructor, which calls the Package constuctor
OvernightPackage::OvernightPackage(const string &n, const string &add, int zipCode, double w, double cPO, double ecpo)
	: Package(n, add, zipCode, w, cPO)
{
	//check if extraCostPerOunce will be negative -- if so, switch to positive
	if (ecpo < 0)
	{
		cout << "Extra cost per ounce will be switched a positive value." << endl;
		ecpo = -ecpo;
	}
	extraCostPerOunce = ecpo;
}

//cost of sending overnight package is regular cost plus an extra cost per ounce
double OvernightPackage::calculateCost()
{
	return Package::calculateCost() + extraCostPerOunce * getWeight();
}
