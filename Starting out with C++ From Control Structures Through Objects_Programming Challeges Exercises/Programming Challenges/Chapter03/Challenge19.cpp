/********************************************************************************
* Monthly Payments:								     							*
*																				*
* The monthly payment on a loan may be calculated by the following  formula:	*
*																				*
* N is the number of payments, L is the amount of the loan.						*
* Payment = ((Rate *((1 + Rate)^N)) / (((1 + Rate)^N) - 1) )* L					*
*																				*
* Rate is the monthly interest rate, which is the annual interest rate          *
* divided by 12. (12% annual interest would be 1 percent monthly interest.)     *
* N is the number of payments, and L is the amount of the loan.                 *
*																				*
* Write a program that asks for these values and displays a report similar to	*
*											   									*
* Loan Amount:				$ 10000.00											*
* Monthly Interest Rate:	1%													*
* Number of Payments:		36													*
* Monthly Payment:			$ 332.14											*
* Amount Paid Back:			$ 11957.15											*
* Interest Paid:			$ 1957.15											*
********************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//Constante
	const int MONTHS_IN_YEAR = 12;

	//Variables
	double loanAmount = 0.0; //Gets how much money the is the loan
	int timeToPayTheLoan = 0; //Gets how long will take to pay the loan
	double annualInterestRate = 0.0; //Gets the annual interest rate
	int numberOfPayments = 0; //Gets how many payments will have to be done to pay the loan
	double monthlyPayment = 0.0; //Gets how much the client has to pay monthly
	double amountPaidBack = 0.0; //Total amount the client will have to pay back
	double interestPaid = 0.0; //How much interest the client will have to pay
	double monthlyInterestRate = 0.0; //Gets the monthly interest rate


	//Ask for the loan amount
	cout << "Enter the loan amount: ";
	cin >> loanAmount;

	//While the loan amount is less than 0
	while (loanAmount < 0)
	{
		cout << "Enter a positive amount.\n"
			<< "Loan amount: ";
		cin >> loanAmount;

	}

	//Ask how long will take to pay the loan in years
	cout << "How many years to pay the loan: ";
	cin >> timeToPayTheLoan;

	//While the time to pay the loan is less than 0
	while (timeToPayTheLoan < 0)
	{
		cout << "Enter a positive amount.\n"
			<< "Time to pay the loan, in years: ";
		cin >> timeToPayTheLoan;
	}

	//Ask how much is the annual interest rate
	cout << "Enter the annual interest rate: ";
	cin >> annualInterestRate;

	//while the annual interest rate is less than 0
	while (annualInterestRate < 0)
	{
		cout << "Enter a positive amount.\n"
			<< "Annual interest rate: ";
		cin >> annualInterestRate;
	}


	//Calculate the number of payments in months = (years * months)
	numberOfPayments = timeToPayTheLoan * MONTHS_IN_YEAR;

	//Calculate the monthly interest rate = (% to decimal / months)
	monthlyInterestRate = (annualInterestRate / 100.0) / (double)MONTHS_IN_YEAR;


	//Calculate how much is the monthly payment
	monthlyPayment = (monthlyInterestRate * pow(1 + monthlyInterestRate, numberOfPayments)) /
		(pow(1 + monthlyInterestRate, numberOfPayments) - 1) * loanAmount;

	//Calculate the total amount the client has to pay back
	amountPaidBack = monthlyPayment * (double)numberOfPayments;
	//Calculate how much interest the client will pay for the loan
	interestPaid = amountPaidBack - loanAmount;

	//Display the report
	cout << fixed << showpoint << setprecision(2)
		<< "\nLoan Amount:\t\t" << "$" << loanAmount << endl
		<< defaultfloat << noshowpoint //Remove showpoint << setprecision(2) for
		<< "Monthly Interest Rate:\t" << monthlyInterestRate * 100.0 << "%\n"
		<< "Number of Payments:\t" << numberOfPayments << endl
		<< fixed << showpoint << setprecision(2) //Put showpoint and setpresicion back
		<< "Monthly Payment:\t" << "$" << monthlyPayment << endl
		<< "Amount Paid Back:\t" << "$" << amountPaidBack << endl
		<< "Interest Paid:\t\t" << "$" << interestPaid << endl;

	system("pause");
	return 0;
}

/*
Enter the loan amount: 10000
How many years to pay the loan: 3
Enter the annual interest rate: 12

Loan Amount:            $10000.00
Monthly Interest Rate:  1%
Number of Payments:     36
Monthly Payment:        $332.14
Amount Paid Back:       $11957.15
Interest Paid:          $1957.15
Press any key to continue . . .
*/

