/********************************************************************************************
* Annual Pay:																				*
* 																							*
* Suppose an employee gets paid every two weeks and earns $2,200 each pay period.			*
* In a year the employee gets paid 26 times.												*
*																						    *
* Write a program that defines the following variables:										*
* 																							*
* payAmount This variable will hold the amount of pay the employee earns each				*
* pay period. Initialize the variable with 2200.0.											*
* 																							*
* payPeriods This variable will hold the number of pay periods in a year. Initialize		*
* the variable with 26.																		*
* 																							*
* annualPay This variable will hold the employee’s total annual pay, which will				*
* be calculated.																			*
* 																							*
* The program should calculate the employee’s total annual pay by multiplying the			*
* employee’s pay amount by the number of pay periods in a year and store the result in		*
* the annualPay variable. Display the total annual pay on the screen.						*
********************************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//Constants
	const double PAY_AMOUNT = 2200.00; //Amount of pay the employee gets each period
	const double PAY_PERIODS = 26.00; //Times a year the employee gets paid
	
	//Variable
	double annualPay = 0.0; //How much the employee gets paid every year

	//Get the annual pay
	annualPay = PAY_PERIODS * PAY_AMOUNT;

	//Display the amount of pay the employee gets paid every year
	cout << fixed << showpoint << setprecision(2)
		<< "The employee gets paid $" << annualPay << " annually.\n\n";

	system("pause");
	return 0;
}


/////////////OUTPUT///////////

/*
The employee gets paid $57200.00 annually.

Press any key to continue . . .
*/