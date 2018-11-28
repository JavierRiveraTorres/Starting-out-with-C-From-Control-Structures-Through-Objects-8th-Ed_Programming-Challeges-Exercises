/********************************************************************************************
* Circuit Board Price:																		*
* 																							*
* An electronics company sells circuit boards at a 35 percent profit. Write a program that	*
* will calculate the selling price of a circuit board that costs $14.95. Display the result	*
* on the screen.																			*
********************************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//Constants
	const double COST = 14.95; //Cost of the circuit board
	const double PROFIT_PERCENT = 0.35; //Profit the company makes when selling the circuit board
	
	//Variable
	double sellPrice = 0.0; //For how much the companny sells the circuit board

	//Get the sell price of the circuit board
	sellPrice = COST * PROFIT_PERCENT + COST;


	//Display how muchthe circuit bord cost and how much the circuit board was sold
	cout << fixed << showpoint << setprecision(2)
		<< "The circuit board cost $" << COST << ".\n"
		<< "The company sells it for $" << sellPrice << ".\n\n";

	system("pause");
	return 0;
}


/////////////OUTPUT///////////

/*

*/