/********************************************************************************************
* Ocean Levels:										    *
* 											    *
* Assuming the ocean’s level is currently rising at about 1.5 millimeters per year, write   *
* a program that displays:								    *
* 											    *
* • The number of millimeters higher than the current level that the ocean’s level will be  *
*   in 5 years										    *
* 											    *
* • The number of millimeters higher than the current level that the ocean’s level will be  *
*   in 7 years										    *
* 											    *
* • The number of millimeters higher than the current level that the ocean’s level will be  *
*   in 10 years										    *
********************************************************************************************/
#include <iostream>
using namespace std;

int main()
{
	//Constant
	const double MILLIMETERS_PER_YEAR = 1.5;

	//Variables
	double millisInFive = 0.0; //Gets the number of millimeters the oceans will rise in 5 years
	double millisInSeven = 0.0; //Gets the number of millimeters the oceans will rise in 7 years
	double millisInTen = 0.0; //Gets the number of millimeters the oceans will rise in 10 years


	//Calculate how much the oceans will rise in:
	millisInFive = MILLIMETERS_PER_YEAR * 5; // 5 years
	millisInSeven = MILLIMETERS_PER_YEAR * 7; // 7 years
	millisInTen = MILLIMETERS_PER_YEAR * 10; // 10 years

	//Display the rising levels by year
	cout << "In 5 years the ocean's levels will be " << millisInFive << " millimeters higher than"
		<< "\nthe current level.\n\n"

		<< "In 7 years the ocean's levels will be " << millisInSeven << " millimeters higher than"
		<< "\nthe current level.\n\n"

		<< "In 10 years the ocean's levels will be " << millisInTen << " millimeters higher than"
		<< "\nthe current level.\n\n";

	system("pause");
	return 0;
}


/////////////OUTPUT///////////

/*
In 5 years the ocean's levels will be 7.5 millimeters higher than
the current level.

In 7 years the ocean's levels will be 10.5 millimeters higher than
the current level.

In 10 years the ocean's levels will be 15 millimeters higher than
the current level.

Press any key to continue . . .
*/
