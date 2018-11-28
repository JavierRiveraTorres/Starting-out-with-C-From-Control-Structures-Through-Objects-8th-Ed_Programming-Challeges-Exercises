/********************************************************************************************
* Sales Tax:										    *
*											    *
* Write a program that will compute the total sales tax on a $95 purchase. Assume the       *
* state sales tax is 4 percent and the county sales tax is 2 percent.			    *
********************************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//Constants
	const double STATE_TAX = 0.04;
	const double COUNTY_TAX = 0.02;

	//Variables
	double purchase = 95.00; //Cost of purchase
	double totalCost = 0.0; //Total cost of purchase when taking into account taxes

	//Add the cost of the taxes to the purchase
	purchase += purchase * STATE_TAX + purchase * COUNTY_TAX;
	//Pass that amount to totalCost
	totalCost = purchase;

	//Display the total cost
	cout << fixed << showpoint << setprecision(2);
	cout << "The toal cost of the purchase is $" << totalCost << "\n\n";

	system("pause");
	return 0;
}


/////////////OUTPUT///////////

/*
The toal cost of the purchase is $100.70

Press any key to continue . . .

*/
