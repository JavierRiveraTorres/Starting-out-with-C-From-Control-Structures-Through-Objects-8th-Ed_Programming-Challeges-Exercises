/********************************************************************************************
* Distance per Tank of Gas:								    *
* 											    *
* A car with a 20-gallon gas tank averages 23.5 miles per gallon when driven in town	    *
* and 28.9 miles per gallon when driven on the highway. Write a program that calculates	    *
* and displays the distance the car can travel on one tank of gas when driven in town	    *
* and when driven on the highway.							    *
* 											    *
* Hint: The following formula can be used to calculate the distance:			    *
* Distance = Number of Gallons * Average Miles per Gallon				    *
********************************************************************************************/
#include <iostream>
using namespace std;

int main()
{
	//Initialized Variables
	double numberOfGallons = 20; //Number of gallon the car has
	double AvgTownMilesPerGal = 23.5; //Average miles per gallon the car consumes when driving in a town
	double AvgHwyMilesPerGal = 28.9; //Average miles per gallon the car consumes when driving in a highway
	double distanceInTown = 0.0; //Gets the distance the car can travel with one tank of gas while in a town
	double distanceInHwy = 0.0; //Gets the distance the car can travel with one tank of gas while in a highway

	//Get the distance the car can drive while in a town
	distanceInTown = numberOfGallons * AvgTownMilesPerGal;
	//Get the distance the car can drive while using a highway
	distanceInHwy = numberOfGallons * AvgHwyMilesPerGal;

	//Display the results
	cout << "A car with 20 gallons of gasoline can drive " << distanceInTown
		<< " miles while in the town.\n"
		<< "A car with 20 gallons of gasoline can drive " << distanceInHwy
		<< " miles while in the highway.\n\n";

	system("pause");
	return 0;
}


/////////////OUTPUT///////////

/*
A car with 20 gallons of gasoline can drive 470 miles while in the town.
A car with 20 gallons of gasoline can drive 578 miles while in the highway.

Press any key to continue . . .
*/
