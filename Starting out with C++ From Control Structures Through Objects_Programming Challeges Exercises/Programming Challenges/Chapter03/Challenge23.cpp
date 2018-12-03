/****************************************************************************
* Stock Transaction Program:												*
* 																			*
* Last month Joe purchased some stock in Acme Software, Inc. 				*
* Here are the details of the purchase:										*
* 																			*
* • The number of shares that Joe purchased was 1,000.						*
* • When Joe purchased the stock, he paid $45.50 per share.					*
* • Joe paid his stockbroker a commission that amounted to 2% of			*
*   the amount he paid for the stock.										*
* 																			*
* Two weeks later Joe sold the stock. Here are the details of the sale:		*
* 																			*
* • The number of shares that Joe sold was 1,000.							*
* • He sold the stock for $56.90 per share.									*
* • He paid his stockbroker another commission that amounted to 2% of 		*
*   the amount he received for the stock.									*
* 																			*
* Write a program that displays the following information:					*
* • The amount of money Joe paid for the stock.								*
* • The amount of commission Joe paid his broker when he bought the stock.	*
* • The amount that Joe sold the stock for.									*
* • The amount of commission Joe paid his broker when he sold the stock.	*
* • Display the amount of profit that Joe made after selling his stock 		*
*   and paying the two commissions to his broker. (If the amount of 		*
*   profit that your program displays is a negative number, then Joe 		*
*   lost money on the transaction.)											*
****************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int sharesPurchased = 1000; //Amount of shares bought by Joe
	double pricePerShareBought = 45.50; //Price of each share when bought
	double pricePerShareSold = 56.90; //Price of each stock when sold
	double amountPaid = 0.0; //Amount of money Joe spend buying the stock
	double amountSold = 0.0; //Amount that the stock sold for
	double brokercommission = 0.02; //Percent of taht the broker charges per transaction
	double commissionOnPurchase = 0.0; //Amount that Joe paid his broker when he bought the stock
	double commissionOnSale = 0.0; //Amount that Joe paid his broker when he sold the stock
	double totalPaidToBroker = 0.0; //Total amount paid to the broker for the transactions
	double profits = 0.0; //Gets the profits made by Joe after selling the stock

	//While the amount of shares bought is less than 0 keep asking for a correct value
	while (sharesPurchased < 0.0)
	{
		cout << "The amount of shares purchased cannot be less than 0.\n"
			<< "Enter an amount greater than 0: ";
		cin >> sharesPurchased;
	}

	//While the broker's commission is less than 0 keep asking for a correct value.
	while (brokercommission < 0.0)
	{
		cout << "The broker's commission cannot be less than 0.\n"
			<< "Enter an amount greater than 0: ";
		cin >> brokercommission;
	}

	//While the price of shares is less than 0 keep asking for a correct value
	while (pricePerShareBought < 0.0)
	{
		cout << "The price of the shares cannot be less than 0.\n"
			<< "Enter an amount greater than 0: ";
		cin >> pricePerShareBought;
	}

	//While the user is trying to sell the shares at less than 0 dollars 
	//keep asking for a correct value
	while (pricePerShareSold < 0.0)
	{
		cout << "The price of the shares cannot be negative.\n"
			<< "Enter an amount greater than 0: ";
		cin >> pricePerShareSold;
	}

	//Get the how much has to be paid to the broker for the aquisition of the stock
	commissionOnPurchase = ((double)sharesPurchased * pricePerShareBought) * brokercommission;

	//Get the amount spent obtaining the stock
	amountPaid = ((double)sharesPurchased * pricePerShareBought);

	//Get the how much has to be paid to the broker for selling the stock
	commissionOnSale = ((double)sharesPurchased * pricePerShareSold) * brokercommission;

	//Get the amount obtaining by selling the stock
	amountSold = ((double)sharesPurchased * pricePerShareSold);

	//Get the total amount paid to the broker for both transactions
	totalPaidToBroker = commissionOnPurchase + commissionOnSale;

	//Gets the amount of money Joe with the transactions after taking into account the costs
	profits = amountSold - (amountPaid + totalPaidToBroker);

	//Display the amounts of money spent and earned throughout the transactions
	cout << fixed << setprecision(2)
		<< "- Amount of money Joe paid for the stock: $" << amountPaid << endl
		<< "- Amount of commission Joe paid his broker when he bought the stock: $"
		<< commissionOnPurchase << endl
		<< "- Amount Joe sold the stock for: $" << amountSold << endl
		<< "- Amount of commission Joe paid his broker when he sold the stock: $"
		<< commissionOnSale << endl;

	//If the amount spent on aquisition is less than the amount Joe obtained at sell, 
	//Joe made some profit. Otherwise Joe lost money.
	if (amountPaid + commissionOnPurchase < amountSold + commissionOnSale)
		cout << "- Profit made by Joe: $" << profits << "\n\n";
	else
		cout << "- Joe lost $" << -1 * profits << " in this transaction\n\n";


	system("pause");
	return 0;

}

/*
- Amount of money Joe paid for the stock: $45500.00
- Amount of commission Joe paid his broker when he bought the stock: $910.00
- Amount Joe sold the stock for: $56900.00
- Amount of commission Joe paid his broker when he sold the stock: $1138.00
- Profit made by Joe: $9352.00

Press any key to continue . . .
*/