/********************************************************************************************
* Stock Commission:																			*
* 																							*
* Kathryn bought 750 shares of stock at a price of $35.00 per share. She must pay her		*
* stockbroker a 2 percent commission for the transaction. Write a program that calculates	*
* and displays the following:																*
* 																							*
* • The amount paid for the stock alone (without the commission)							*
* • The amount of the commission															*
* • The total amount paid (for the stock plus the commission)								*
* 																							*
********************************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//Constants
	int AMOUNT_OF_STOCK = 750; //How much stock was bought
	double COST_OF_STOCK = 35.00; //How much is the cost of each stock
	const double BROKER_PERCENT = 0.02; //What is the broker percent for transaction

	//Variables
	double costOfAllStock = 0.0; //Gets the cost of all the stock bought
	double brokerCommision = 0.0; //How much money was paid to the stock broker
	double totalCost = 0.0; //What was the total cost of the transaction

	//Get the cost of buying the stock
	costOfAllStock = AMOUNT_OF_STOCK * COST_OF_STOCK;
	//Get how much was paid to the stock broker
	brokerCommision = costOfAllStock * BROKER_PERCENT;
	//Get what was the total cost of the transaction
	totalCost = costOfAllStock + brokerCommision;

	//Display the cost of the purchase, the cost of paying the stock broker and the total cost
	//of the transaction
	cout << fixed << showpoint << setprecision(2)
		<< "The cost of the stock without the broker commission is $" << costOfAllStock << ".\n"
		<< "The broker commision is $" << brokerCommision << ".\n"
		<< "The total cost of the transaction is $" << totalCost << ".\n\n";

	system("pause");
	return 0;
}


/////////////OUTPUT///////////

/*
The cost of the stock without the broker commission is $26250.00.
The broker commision is $525.00.
The total cost of the transaction is $26775.00.

Press any key to continue . . .
*/