/* Mary Connolly and Ryan Busk
 * Lab 3
 *
 * driver file for Package's derived classes
 * Also #3 part 2
 * Two packages are instantiated with negative values, which results in messages for the user that the values will be switched to positive ones
 */

#include <iostream>
#include <iomanip>
#include <string>
#include "Package.h"
#include "TwoDayPackage.h"
#include "OvernightPackage.h"
using namespace std;

int main()
{
	Package *array[6]; //create array with six pointers to Package
	Package *ptr; //pointer to type Package

	//instantiate three two day packages and place pointers in array 
	TwoDayPackage TwoDay1("Mary", "California", 90210, 6, .6, 2);
	array[0] = &TwoDay1;

	TwoDayPackage TwoDay2("Ariel", "Florida", 12345, 8, .5, 3);
	array[1] = &TwoDay2;

	//Note that because the weight, costPerOunce, and extraCost are input as negative numbers, the constructor will switch the values to positive
	TwoDayPackage TwoDay3("John", "Texas", 33333, -10, -.5, -2);
	array[2] = &TwoDay3;

	//instantiate three overnight packages and place pointers in array
	OvernightPackage Overnight1("Colleen", "Maryland", 21228, 5, .4, .1);
	array[3] = &Overnight1;

	OvernightPackage Overnight2("Charles", "Carmel", 95923, 13, .4, .1);
	array[4] = &Overnight2;

	//Note that because the weight, costPerOunce, and extraCostPerOunce are input as negative numbers, the constructor will switch the values to positive
	OvernightPackage Overnight3("Ryan", "South Bend", 46556, -8, -.3, -.05);
	array[5] = &Overnight3;

	cout << setw(8) << "Name" << setw(12) << "Address" << setw(8) << "Zip" << setw(14) << "Cost to ship" << endl << endl;
	
	double totalCost = 0; //total cost to send all packages

	//iterate through array of pointers, printing information for each package
	for (int i=0; i<6; i++)
	{
		ptr = array[i];

		totalCost += ptr->calculateCost(); //update totalCost

		//display information for each package
		cout << setw(8) << ptr->getName() << setw(12) << ptr->getAddress() << setw(8) << ptr->getZip() << "         " << "$" << fixed << setprecision(2) << ptr->calculateCost() << endl;
	}

	cout << endl << "Total cost to send all packages: $" << totalCost << endl; //display total cost
}
