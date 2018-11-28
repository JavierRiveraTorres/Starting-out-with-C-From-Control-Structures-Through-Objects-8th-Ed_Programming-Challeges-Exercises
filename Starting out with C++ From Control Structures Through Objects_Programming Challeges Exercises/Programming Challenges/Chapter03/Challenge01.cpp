/**************************************************************************************
* Miles per Gallon:																	  *
* 																					  *
* Write a program that calculates a car’s gas mileage. The program should ask the 	  *
* user to enter the number of gallons of gas the car can hold and the number of miles *
* it can be driven on a full tank. It should then display the number of miles that 	  *
* may be driven per gallon of gas.													  *
**************************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double tankLimit = 0.0; //Number of gallons of gas the car can hold
	double miles = 0.0; //The number of miles the car can be driven on a full tank
	double milesPerGallon = 0.0; //Number of miles that may be driven per gallon of gas

	//Ask the user howw many gallons the car can hold
	cout << "How many gallons the car can hold? ";
	cin >> tankLimit;

	//While the number of miles is negative
	while (tankLimit < 0.0)
	{
		cout << "Enter a positive amount.\n";
		cin >> tankLimit;
	}

	//Ask the user how many miles the car can go in a full tank
	cout << "How many miles the car can go in a full tank? ";
	cin >> miles;

	//While the number of miles is negative
	while (miles < 0.0)
	{
		cout << "Enter a positive amount.\n";
		cin >> miles;
	}

	//Get the number of miles per gallon
	milesPerGallon = (miles) / tankLimit;

	//Display how many miles the car can drive
	cout << fixed << setprecision(2)
		<< "The car can drive " << milesPerGallon << " miles per gallon.\n\n";

	system("pause");
	return 0;
}

/////////////OUTPUT///////////

/*
How many gallons the car can hold? 20
How many miles the car can go in a full tank? 150
The car can drive 7.50 miles per gallon.

Press any key to continue . . .

*/