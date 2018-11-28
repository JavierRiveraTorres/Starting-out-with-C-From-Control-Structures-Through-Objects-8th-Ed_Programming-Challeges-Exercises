/********************************************************************************************
* Miles per Gallon:									    *
* 											    *
* A car holds 15 gallons of gasoline and can travel 375 miles before refueling. Write a	    *
* program that calculates the number of miles per gallon the car gets. Display the result   *
* on the screen.									    *
* 											    *
* Hint: Use the following formula to calculate miles per gallon (MPG):			    *
* MPG  Miles Driven/Gallons of Gas Used						    *
********************************************************************************************/
#include <iostream>
using namespace std;

int main()
{
	//Variables
	double milesDriven = 375.0; //How many miles the car has driven
	double gallons = 15.0; //How many miles per gallons the car can hold
	double milesPerGallon = 0.0;

	//Get the miles per gallon
	milesPerGallon = milesDriven / gallons;


	//Display the results
	cout << "A car that can drive 375 miles with 15 gallons can drive " << milesPerGallon
		<< " miles per gallon.\n\n";

	system("pause");
	return 0;
}


/////////////OUTPUT///////////

/*
A car that can drive 375 miles with 15 gallons can drive 25 miles per gallon.

Press any key to continue . . .
*/
