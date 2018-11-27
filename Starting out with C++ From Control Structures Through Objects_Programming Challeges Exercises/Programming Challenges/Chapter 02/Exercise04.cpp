/********************************************************************************************
* Restaurant Bill:																			*
* 																							*
* Write a program that computes the tax and tip on a restaurant bill for a patron with		*
* a $88.67 meal charge. The tax should be 6.75 percent of the meal cost. The tip should		*
* be 20 percent of the total after adding the tax. Display the meal cost, tax amount, tip	*
* amount, and total bill on the screen.														*
********************************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//Constant
	const double TAX = 0.0675;

	//Variables
	double bill = 88.67; //Cost of meal
	double billAfterTax = 0.0; //Cost of meal after tax
	double tipPercent = 0.20; //Percent of the cost/bill that the patron has to pay as a tip
	double tipAmount = 0.0;	//How much the patron has to tip for the meal
	double totalCost = 0.0; //Total cost of the meal

	//Get how much will be the cost after taxes
	billAfterTax = bill + bill * TAX;
	//Calculate how much the tip has to be
	tipAmount = billAfterTax * tipPercent;
	//Get the total cost for the meal
	totalCost = billAfterTax + tipAmount;

	//Display a breakdown of the final cost for the meal
	cout << fixed << showpoint << setprecision(2);
	cout << "The meal cost is $" << bill << endl
		<< "The tax amount is " << TAX * 100.00 << "%\n"
		<< "The tip amout is $" << tipAmount << endl
		<< "The total bill is $" << totalCost << "\n\n";

	system("pause");
	return 0;
}


/////////////OUTPUT///////////

/*
The meal cost is $88.67
The tax amount is 6.75%
The tip amout is $18.93
The total bill is $113.59

Press any key to continue . . .

*/