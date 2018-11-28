/********************************************************************************************
* Land Calculation:																			*
* 																							*
* One acre of land is equivalent to 43,560 square feet. Write a program that calculates		*
* the number of acres in a tract of land with 391,876 square feet.							*
********************************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//Constant
	const double ACRE = 43560.0; //How much is an acre
	const double squareFeetOfLand = 391876.0; //Square per feet in the land

	//Variable
	double acresInLand = 0.0; //Gets how many acres are in the land

	//Get the the number of acres in the land
	acresInLand = squareFeetOfLand / ACRE;

	//Display the number of acres
	cout << fixed << setprecision(3)
		<< "The land has " << acresInLand << " acres.\n\n";

	system("pause");
	return 0;
}


/////////////OUTPUT///////////

/*
The land has 8.996 acres.

Press any key to continue . . .
*/