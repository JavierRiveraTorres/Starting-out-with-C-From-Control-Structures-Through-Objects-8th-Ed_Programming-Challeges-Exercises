/**************************************************************************************
* Monthly Sales Tax:								      * 																					  *
* A retail company must file a monthly sales tax report listing the sales for the     *
* month and the amount of sales tax collected. Write a program that asks for the      *
* month, the year, and the total amount collected at the cash register (that is,      *
* sales plus sales tax). Assume the state sales tax is 4 percent and the county       *
* sales tax is 2 percent. 							      *
* 										      *
* If the total amount collected is known and the total sales tax is 6 percent, 	      *
* the amount of product sales may be calculated as:				      *
* 	S = T / 1.06								      *
* 										      *
* S is the product sales and T is the total income (product sales plus sales tax).    *
* The program should display a report similar to				      *
* 										      *
* Month: October								      *
* --------------------								      *
* 										      *
* Total Collected:		$ 26572.89					      *
* Sales:			$ 25068.76				              *
* County Sales Tax:		$ 501.38					      *
* State Sales Tax:		$ 1002.75					      *
* Total Sales Tax:		$ 1504.13					      *
**************************************************************************************/
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	//Constants
	const double STATE_TAX = 0.04; //State tax percent
	const double COUNTY_TAX = 0.02; //County tax percent

	//Variables
	double totalCollected = 0.0; //How much money was collected 
	double monthlySales = 0.0; //How much was sold at the end of the month
	double countySalesTax = 0.0; //Amount collected of county sales tax
	double stateSalesTax = 0.0; //Amount collected of state sales tax
	double totalSalesTax = 0.0; //Total amount of collected tax
	string month; //Gets the month that is being reported 
	int year = 0; //No idea why the book want this

	//Ask for the name of the month
	cout << "Enter the name of the month: ";
	getline(cin, month);

	//Ask for the year
	cout << "Enter the year: ";
	cin >> year;

	//While the year is not equal to 2018
	while (year != 2018)
	{
		cout << "Enter a valid year: ";
		cin >> year;
	}

	//Ask how much was sold that month
	cout << "How much was sold this the month: ";
	cin >> monthlySales;


	//While the monthly sales are less than 0
	while (monthlySales < 0.0)
	{
		cout << "Enter a positive number or 0: $";
		cin >> monthlySales;
	}


	//Calculate how much is owed in state taxes
	stateSalesTax = monthlySales * STATE_TAX;
	//Calculate how much is owed in county taxes
	countySalesTax = monthlySales * COUNTY_TAX;
	//Add the county and state taxes
	totalSalesTax = countySalesTax + stateSalesTax;
	//Get the total amount of revenue
	totalCollected = monthlySales + totalSalesTax;


	//Display the monthly report
	cout << "Month: " << month << endl
		<< "---------------------------\n\n"
		<< fixed << showpoint << setprecision(2) << endl
		<< "Total Collected:\t$" << totalCollected << endl
		<< "Sales:\t\t\t$" << monthlySales << endl
		<< "County Sales Tax:\t$" << countySalesTax << endl
		<< "State Sales Tax:\t$" << stateSalesTax << endl
		<< "Total Sales Tax:\t$" << totalSalesTax << "\n\n";

	system("pause");
	return 0;
}

/////////////OUTPUT///////////

/*
Enter the name of the month: June
Enter the year: 2018
How much was sold this the month: 25068.76
Month: June
---------------------------


Total Collected:        $26572.89
Sales:                  $25068.76
County Sales Tax:       $501.38
State Sales Tax:        $1002.75
Total Sales Tax:        $1504.13

Press any key to continue . . .
*/
