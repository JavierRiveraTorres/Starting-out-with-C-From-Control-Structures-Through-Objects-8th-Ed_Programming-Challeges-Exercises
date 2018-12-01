/**************************************************************************************
* Currency:																			  *
* 																					  *
* Write a program that will convert U.S. dollar amounts to Japanese yen and 		  *
* to euros, storing the conversion factors in the constants YEN_PER_DOLLAR and 		  *
* EUROS_PER_DOLLAR . To get the most up-to-date exchange rates, search the 			  *
* Internet using the term “currency exchange rate”. 								  *
* 																					  *
* If you cannot find the most recent exchange rates, use the following:				  *
* 	 1 Dollar = 98.93 Yen															  *
* 	 1 Dollar = 0.74 Euros															  *
* 																					  *
* Format your currency amounts in fixed-point notation, with two decimal 			  *
* places of precision, and be sure the decimal point is always displayed.			  *
**************************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//Constants
	const double YEN_PER_DOLLAR = 98.93; //Amount of yens per each dollar
	const double and EUROS_PER_DOLLAR = 0.74; //Amount of euros per each dollar

	//Variables
	double dollarAmount = 0.0; //How many dollars
	double dollarsToEuros = 0.0; //Gets how many euros is the amount of dollars 
	double dollarsToYen = 0.0; //Gets how many yens is the amount of dollars 

	//Ask for the dollar amount
	cout << "Enter the dollar amount: $";
	cin >> dollarAmount;

	//While the dollar amount is less than 0
	while (dollarAmount < 0.0)
	{
		cout << "Enter a positive number.\n"
			<< "Dollar amount: $";
		cin >> dollarAmount;
	}

	//Calculate how many yes is the dollar amount
	dollarsToYen = dollarAmount * YEN_PER_DOLLAR;
	//Calculate how many euros is the dollar amount
	dollarsToEuros = dollarAmount * EUROS_PER_DOLLAR;

	//Display how many yens and euros are equivalent to the specified dollar amount
	cout << fixed << showpoint << setprecision(2) << endl;
	cout << "$" << dollarAmount << " dollars is equivalent to " << dollarsToYen << " yen.\n";
	cout << "$" << dollarAmount << " dollars is equivalent to " << dollarsToEuros << " euros.\n\n";

	system("pause");
	return 0;
}

/////////////OUTPUT///////////

/*
Enter the dollar amount: $2000

$2000.00 dollars is equivalent to 197860.00 yen.
$2000.00 dollars is equivalent to 1480.00 euros.

Press any key to continue . . .
*/