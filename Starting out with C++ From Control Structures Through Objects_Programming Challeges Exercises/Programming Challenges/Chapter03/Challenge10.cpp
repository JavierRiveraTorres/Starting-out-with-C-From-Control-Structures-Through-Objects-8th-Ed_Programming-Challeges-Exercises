/**************************************************************************************
* How Much Insurance?																  *
* 																					  *
* Many financial experts advise that property owners should insure their homes or 	  *
* buildings for at least 80 percent of the amount it would cost to replace the 		  *
* structure. 																		  *
* 																					  *
* Write a program that asks the user to enter the replacement cost of a building 	  *
* and then displays the minimum amount of insurance he or she should buy for the 	  *
* property.																			  *
**************************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//Constant
	const double INSURANCE_PERCENT = 0.80; //Recomended amount of insurance

	//Variables
	double costOfStructure = 0.0; //Gets the cost of the structure
	double insurance = 0.0; //Gets for how much the owner should insure the structure

	//Ask for the cost of the structure
	cout << "Enter the cost of the structure: ";
	cin >> costOfStructure;

	//While the cost of the structure is less than 0
	while (costOfStructure < 0.0)
	{
		cout << "Enter a positive amount.\n"
			<< "Cost: ";
		cin >> costOfStructure;
	}

	//Calculate for how much the onwer should insurance the structure 
	insurance = costOfStructure * INSURANCE_PERCENT;

	//Display the minimum amount of insurance recomended
	cout << fixed << showpoint << setprecision(2) << endl
		<< "The minimum insurance you buy is $" << insurance << "\n\n";

	system("pause");
	return 0;
}

/////////////OUTPUT///////////

/*
Enter the cost of the structure: 245000

The minimum insurance you buy is $196000.00

Press any key to continue . . .

*/