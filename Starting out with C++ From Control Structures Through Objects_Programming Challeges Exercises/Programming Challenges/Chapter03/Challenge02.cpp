/**************************************************************************************
* Stadium Seating:																	  *
* 																					  *
* There are three seating categories at a stadium. For a softball game, Class A 	  *
* seats cost $15, Class B seats cost $12, and Class C seats cost $9. 				  *
* 																					  *
* Write a program that asks how many tickets for each class of seats were sold, 	  *
* then displays the amount of income generated from ticket sales. 					  *
* 																					  *
* Format your dollar amount in fixed-point notation, with two decimal places of 	  *
* precision, and be sure the decimal point is always displayed.						  *
**************************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//Constants
	const double CLASS_A = 15.00;
	const double CLASS_B = 12.00;
	const double CLASS_C = 9.00;
	
	//Variables
	int classASeats = 0; //Number of tickets for class A seats 
	int classBSeats = 0; //Number of tickets for class B seats
	int classCSeats = 0; //Number of tickets for class C seats
	double ticketRevenue = 0.0; //Amount of revenue made

	//Ask how many tickets for Class A seats were sold
	cout << "How many Class A seats were sold: ";
	cin >> classASeats;

	//While the amount of tickets sold is negative
	while (classASeats < 0)
	{
		cout << "Enter 0 or a positive integer.\n"
			<< "Number of tickets: ";
		cin >> classASeats;
	}

	//Ask how many tickets for Class B seats were sold
	cout << "How many Class B seats were sold: ";
	cin >> classBSeats;

	//While the amount of tickets sold is negative
	while (classBSeats < 0)
	{
		cout << "Enter 0 or a positive integer.\n"
			<< "Number of tickets: ";
		cin >> classBSeats;
	}

	//Ask how many tickets for Class C seats were sold
	cout << "How many Class C seats were sold: ";
	cin >> classCSeats;

	//While the amount of tickets sold is negative
	while (classCSeats < 0)
	{
		cout << "Enter 0 or a positive integer.\n"
			<< "Number of tickets: ";
		cin >> classCSeats;
	}

	//Get how much revenue was made with ticket sales
	ticketRevenue = classASeats * CLASS_A + classBSeats * CLASS_B + classCSeats * CLASS_C;

	//Display how many seats were sold by class and how much revenue was made
	cout << "\nClass" << setw(22) << "# of Seats\n"
		<< "---------------------------------\n"
		<< "Class A:" << setw(11) << classASeats << endl
		<< "Class B:" << setw(11) << classBSeats << endl
		<< "Class C:" << setw(11) << classCSeats << endl
		<< "----------------------------------\n\n"
		<< fixed << showpoint << setprecision(2)
		<< "Total Revenue: $" << ticketRevenue << "\n\n";

	system("pause");
	return 0;
}

/////////////OUTPUT///////////

/*
How many Class A seats were sold: 500
How many Class B seats were sold: 4567
How many Class C seats were sold: 5432

Class           # of Seats
---------------------------------
Class A:        500
Class B:       4567
Class C:       5432
----------------------------------

Total Revenue: $111192.00

Press any key to continue . . .

*/