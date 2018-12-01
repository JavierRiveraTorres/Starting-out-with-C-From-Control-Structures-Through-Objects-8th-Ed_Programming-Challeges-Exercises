/**************************************************************************************
* Senior Citizen Property Tax:							      *
* 										      *
* Madison County provides a $5,000 homeowner exemption for its senior citizens.       *
* For example, if a senior’s house is valued at $158,000 its assessed value would     *
* be $94,800, as explained above. However, he would only pay tax on $89,800. 	      *
* At last year’s tax rate of $2.64 for each $100 of assessed value, the property      *
* tax would be $2,370.72.							      *
* 										      *
* In addition to the tax break, senior citizens are allowed to pay their property     *
* tax in four equal payments. The quarterly payment due on this property would        *
* be $592.68. 									      *
* 										      *
* Write a program that asks the user to input the actual value of a piece of 	      *
* property and the current tax rate for each $100 of assessed value.                  *
* 										      *
* The program should then calculate and report how much annual property tax a 	      *
* senior homeowner will be charged for this property and what the quarterly tax	      *
* bill will be.									      *
**************************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	// Constant
	const double PROPERTY_VALUE_PERCENT = 0.60; //Country assessment value of the properties
	const double EXEMPTION = 5000.0; //Senior's exemption
	const double TAX_RATE = 0.0264; //County tax rate

	//Variables
	double propertyValue = 0.0; //The actual value of the property
	double countyAssesement = 0.0; //What the county assess it for
	double propertyTax = 0.0; //How much is the tax for the porperty
	double quarterlyPayment = 0.0; //Quarterly tax payment 

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
	countyAssesement = propertyValue * PROPERTY_VALUE_PERCENT - EXEMPTION;
	//Calculate how much has to be paid in property taxes
	propertyTax = countyAssesement * TAX_RATE;
	//Calculate how much money would be a property tax quarterly payment
	quarterlyPayment = propertyTax / 4.0;


	//Display the senior homeowner property tax report
	cout << fixed << showpoint << setprecision(2) << endl;
	cout << "The value of the property is $" << propertyValue << " dollars.\n";
	cout << "The county assess value of the property is $" << countyAssesement << " dollars.\n";
	cout << "The annual propery tax is $" << propertyTax << " dollars.\n";
	cout << "The quarterly payment is $" << quarterlyPayment << " dollars.\n\n";

	system("pause");
	return 0;
}

/////////////OUTPUT///////////

/*
Enter the value of the property: $158000

The value of the property is $158000.00 dollars.
The county assess value of the property is $89800.00 dollars.
The annual propery tax is $2370.72 dollars.
The quarterly payment is $592.68 dollars.

Press any key to continue . . .
*/
