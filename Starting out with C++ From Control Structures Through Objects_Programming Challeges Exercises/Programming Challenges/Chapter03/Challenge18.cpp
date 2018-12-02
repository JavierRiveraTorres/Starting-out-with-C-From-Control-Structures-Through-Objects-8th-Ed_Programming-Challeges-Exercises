/**************************************************************************************
* Interest Earned:																	  *
* 																					  *
* Assuming there are no deposits other than the original investment, the balance 	  *
* in a savings account after one year may be calculated as							  *
* 																					  *
* Amount = Principal *(1 + Rate / T) ^ T											  *
* 																					  *
* Principal is the balance in the savings account, Rate is the interest rate, and 	  *
* T is the number of times the interest is compounded during a year 				  *
* ( T is 4 if the interest is compounded quarterly).								  *
* 																					  *
* Write a program that asks for the principal, the interest rate, and the number 	  *
* of times the interest is compounded. It should display a report similar to		  *
* 																					  *
* Interest Rate:			4.25%													  *
* Times Compounded:			12														  *
* Principal:				$ 1000.00												  *
* Interest:					$ 43.34													  *
* Amount in Savings:		$ 1043.34												  *
**************************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
	//Variables
	double principal = 0.0; //Gets the original amount deposited
	double interestRate = 0.0; //Gets the investment's interest rate
	int timesCompounded = 0; //Gets the compunded interest
	double interest = 0.0; //Gets how much is gained on interests
	double amountInSavings = 0.0; //Gets the total amount in the investment account

	//Ask for the principal/original amount
	cout << "Enter the principal amount: $";
	cin >> principal;

	//While the principal amount is less than 0, keep asking for a correct amount
	while (principal < 0.0)
	{
		cout << "Enter a positive amount.\n"
			<< "Principal: ";
		cin >> principal;
	}

	//Ask for the interest rate
	cout << "\nEnter the interest rate as a percent.\n"
		<< "For example:\n"
		<< "\tFor 12.5% enter 12.5 or for 10% enter 10\n"
		<< "Interest Rate: ";
	cin >> interestRate;

	//While the interest rate  is less than 0, keep asking for a correct amount
	while (interestRate < 0.0)
	{
		cout << "Enter a positive number.\n"
			<< "Interest Rate: ";
		cin >> interestRate;
	}

	//Ask for the time compounded
	cout << "\nHow many times is the interest compounded: ";
	cin >> timesCompounded;

	//While the time compounded is less than 0, keep asking for a correct amount
	while (timesCompounded < 0.0)
	{
		cout << "Enter a positive number.\n"
			<< "Times Compounded: ";
		cin >> timesCompounded;
	}

	
	//Change interest rate percent to it's decimal equivalent 
	interestRate /= 100.0;

	//Calculate the amount of money made
	amountInSavings = principal * pow((1 + interestRate / timesCompounded), timesCompounded);

	//Get the how much was made on interests 
	interest = amountInSavings - principal;


	//Display the investment report
	cout << "\nInterest Rate:\t\t" << interestRate * 100 << "%\n"
		<< "Times Compounded:\t" << timesCompounded << endl
		<< fixed << showpoint << setprecision(2)
		<< "Principal:\t\t" << "$ " << principal << endl
		<< "Interest:\t\t" << "$ " << interest << endl
		<< "Amount in Savings:\t" << "$ " << amountInSavings << "\n\n";

	system("pause");
	return 0;
}


/////////////OUTPUT///////////

/*
Enter the principal amount: $1000

Enter the interest rate as a percent.
For example:
		For 12.5% enter 12.5 or for 10% enter 10
Interest Rate: 4.25

How many times is the interest compounded: 12

Interest Rate:          4.25%
Times Compounded:       12
Principal:              $ 1000.00
Interest:               $ 43.34
Amount in Savings:      $ 1043.34

Press any key to continue . . .
*/