/**************************************************************************************
* Box Office:																		  *
* 																					  *
* A movie theater only keeps a percentage of the revenue earned from ticket sales. 	  *
* The remainder goes to the movie distributor. Write a program that calculates a 	  *
* theater’s gross and net box office profit for a night. The program should ask 	  *
* for the name of the movie, and how many adult and child tickets were sold. 		  *
* (The price of an adult ticket is $10.00 and a child’s ticket is $6.00.) 			  *
*																					  *
* It should display a report similar to												  *
* 																					  *
* Movie Name:						“Wheels of Fury”								  *
* Adult Tickets Sold:				382												  *
* Child Tickets Sold:				127												  *
* Gross Box Office Profit:			$ 4582.00										  *
* Net Box Office Profit:			$ 916.40										  *
* Amount Paid to Distributor:		$ 3665.60										  *
* 																					  *
* Assume the theater keeps 20 percent of the gross box office profit.				  *
**************************************************************************************/
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{

	//Constants
	const double ADULT_PRICE = 10.00;
	const double CHILD_PRICE = 6.00;
	const double THEATER_PERCENT = 0.20; //Percentage that the theater keeps from ticket sales

	//Variables
	string movieName; 

	double adultAmount = 0.0; //Number of adult tickets sold
	double childAmount = 0.0; //Number of children tickets sold
	double gross = 0.0; //How much the theater made on ticket sales
	double net = 0.0; //How much the theater kept after paying the distributor
	double distributorCut = 0.0; //How much is paid to the distributor

	//Ask for the name of the movie
	cout << "Enter the name of the movie: ";
	getline(cin, movieName);

	//Ask for the total of adult tickets sold
	cout << "Enter the number of adult tickets sold: ";
	cin >> adultAmount;

	//While the number of tickets sold is less than 0
	while (adultAmount < 0.0)
	{
		cout << "Enter 0 or a positive number.\n"
			<< "Adult tickets sold: ";
		cin >> adultAmount;

	}

	//Ask for the total of children tickets sold
	cout << "Enter the number of children tickets sold: ";
	cin >> childAmount;

	//While the number of tickets sold is less than 0
	while (childAmount < 0.0)
	{
		cout << "Enter 0 or a positive number.\n"
			<< "Children tickets sold: ";
			cin >> childAmount;
	}

	//Calculate how much was made on ticket sales
	gross = adultAmount * ADULT_PRICE + childAmount * CHILD_PRICE;
	//Calculate how much the theater kept
	net = THEATER_PERCENT * gross;
	//Calculate how much has to be paid to the distributor
	distributorCut = gross - net;
	
	//Display the movie report
	cout << "\nMovie Name:\t\t\t\t" << "\"" << movieName << "\"\n\n"
		<< "Adult Tickets Sold:\t\t\t" << adultAmount << endl
		<< "Child Tickets Sold:\t\t\t" << childAmount << endl
		<< fixed << showpoint << setprecision(2)
		<< "Gross Box Office Profit:\t\t" << gross << endl
		<< "Net Box Office Profit:\t\t\t" << net << endl
		<< "Amount Paid to Distributor:\t\t" << distributorCut << "\n\n";

	system("pause");
	return 0;
}

/////////////OUTPUT///////////

/*
Enter the name of the movie: Wheels of Fury
Enter the number of adult tickets sold: 382
Enter the number of children tickets sold: 127

Movie Name:                             "Wheels of Fury"

Adult Tickets Sold:                     382
Child Tickets Sold:                     127
Gross Box Office Profit:                4582.00
Net Box Office Profit:                  916.40
Amount Paid to Distributor:             3665.60

Press any key to continue . . .

*/