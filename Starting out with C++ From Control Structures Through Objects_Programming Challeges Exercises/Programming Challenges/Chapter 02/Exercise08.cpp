/********************************************************************************************
* Total Purchase:																			*
* 																							*
* A customer in a store is purchasing five items. The prices of the five items are			*
* 																							*
* Price of item 1 = $15.95																	*
* Price of item 2 = $24.95																	*
* Price of item 3 = $6.95																	*
* Price of item 4 = $12.95																	*
* Price of item 5 = $3.95																	*
* 																							*
* Write a program that holds the prices of the five items in five variables. Display each	*
* item’s price, the subtotal of the sale, the amount of sales tax, and the total. 			*
* Assume the sales tax is 7%.																*
********************************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//Constant
	const double TAX = 0.07; //Sale Tax in decimal (7%)
	const double ITEM1 = 15.95; 
	const double ITEM2 = 24.95;
	const double ITEM3 = 6.95;
	const double ITEM4 = 12.95;
	const double ITEM5 = 3.95;

	//Variables
	double subTotal = 0.0; //Gets the sum of all items prices
	double taxAmount = 0.0; //Gets the sum of all items prices times the TAX
	double total = 0.0; //Gets the sum of the taxAmount and the subTotal

	//Get the sum of all item's price
	subTotal = ITEM1 + ITEM2 + ITEM3 + ITEM4 + ITEM5;
	//Get how much the custumer have to pay in taxes
	taxAmount = subTotal * TAX;
	//Get the total cost of the purchase
	total = subTotal + taxAmount;
	

	//Display the item's cost, subtotal, amount of tax sales and the total of the purchase
	cout << "Item\t\tPrice\n"
		<< "=======================\n"
		<< fixed << showpoint << setprecision(2)
		<< "Item1\t\t$" << ITEM1 << endl
		<< "Item2\t\t$" << ITEM2 << endl
		<< "Item3\t\t$" << ITEM3 << endl
		<< "Item4\t\t$" << ITEM4 << endl
		<< "Item5\t\t$" << ITEM5 << endl
		<< "=======================\n"
		<< defaultfloat << noshowpoint
		<< "Tax:\t\t" << TAX * 100 << "%\n"
		<< fixed << showpoint << setprecision(2)
		<< "Subtotal\t$" << subTotal << endl
		<< "Tax Amount\t$" << taxAmount << endl
		<< "Total:\t\t$" << total << "\n\n";

	system("pause");
	return 0;
}


/////////////OUTPUT///////////

/*
Item            Price
=======================
Item1           $15.95
Item2           $24.95
Item3           $6.95
Item4           $12.95
Item5           $3.95
=======================
Tax:            7%
Subtotal        $64.75
Tax Amount      $4.53
Total:          $69.28

Press any key to continue . . .
*/