/**************************************************************************************
* Property Tax:							                      *
* 									              *
* A county collects property taxes on the assessment value of property, which is      *
* 60 percent of the property’s actual value. If an acre of land is valued at 	      *
* $10,000, its assessment value is $6,000. The property tax is then 75¢ for each      *
* $100 of the assessment value. The tax for the acre assessed at $6,000 will be $45.  *
* 										      *
* Write a program that asks for the actual value of a piece of property and displays  *
* the assessment value and property tax.					      *
**************************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//Constant
	const double PROPERTY_VALUE_PERCENT = 0.60; //Country assessment value of the propertie

	//Variables
	double propertyValue = 0.0; //The actual value of the property
	double countyAssesement = 0.0; //What the county assess it for
	double propertyTax = 0.0; //How much is the tax for the porperty

	//Ask for the value of the property
	cout << "Enter the value of the property: $";
	cin >> propertyValue;

	//While the value of the property is less than 0
	while (propertyValue < 0.0)
	{
		cout << "Enter a positive amount: $";
		cin >> propertyValue;
	}

	//Calculate the county assessment value of the property
	countyAssesement = propertyValue * PROPERTY_VALUE_PERCENT;
	//Calculate how much has to be paid in property taxes
	propertyTax = countyAssesement * 0.0075;


	//Display the county assessment value and the amount to pay in property taxes
	cout << fixed << showpoint << setprecision(2) << endl
		<< "The county assessed value of the property is $" << countyAssesement << " dollars.\n"
		<< "The propery tax is $" << propertyTax << " dollars.\n\n";

	system("pause");
	return 0;
}

/////////////OUTPUT///////////

/*
Enter the value of the property: $245000.01

The county assessed value of the property is $147000.01 dollars.
The propery tax is $1102.50 dollars.

Press any key to continue . . .
*/
