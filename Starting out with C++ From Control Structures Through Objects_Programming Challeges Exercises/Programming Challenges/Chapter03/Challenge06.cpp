/**************************************************************************************
* Ingredient Adjuster:																  *
* 																					  *
* A cookie recipe calls for the following ingredients:								  *
* 																					  *
* • 1.5 cups of sugar																  *
* • 1 cup of butter																	  *
* • 2.75 cups of flour																  *
* 																					  *
* The recipe produces 48 cookies with this amount of the ingredients. 				  *
* 																					  *
* Write a program that asks the user how many cookies he or she wants to make, 		  *
* and then displays the number of cups of each ingredient needed for the specified 	  *
* number of cookies.																  *
* 																					  *
**************************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//Constants
	int const FULLBATCH = 48; //Base amount of cookies that can be get with the base amounts
	const double CUPS_OF_SUGAR = 1.5; // Amount of a cups of sugar for the fullbatch
	const double CUPS_OF_BUTTER = 1.0; // Amount of a cups of butter for the fullbatch
	const double CUPS_OF_FLOUR = 2.75; //// Amount of a cups of flour for the fullbatch
	
	//Variables
	double sugarPerCookie = 0.0; //How much sugar per cookie is needed
	double sugarNeeded = 0.0; //Total amount of sugar needed

	double butterPerCookie = 0.0; //How much butter per cookie is needed
	double butterNeeded = 0.0; //Total amount of butter needed

	double flourPerCookie = 0.0; //How much flour per cookie is needed
	double flourNeeded = 0.0; //Total amount of flour needed

	int cookies = 0; //Gets how many cookies the user wants


	//Promt and get
	cout << "How many cookies you want to make? ";
	cin >> cookies;

	//While the number of cookies needed is less than 0
	while (cookies < 0)
	{
		cout << "Enter 0 or a positive number: ";
		cin >> cookies;
	}

	//Get how much sugar per cookies is needed
	sugarPerCookie = CUPS_OF_SUGAR / (double)FULLBATCH;
	//Get how much butter per cookies is needed
	butterPerCookie = CUPS_OF_BUTTER / (double)FULLBATCH;
	//Get how much flour per cookies is needed
	flourPerCookie = CUPS_OF_FLOUR / (double)FULLBATCH;
	//Get the total of sugar needed
	sugarNeeded = (double)cookies * sugarPerCookie;
	//Get the total of butter needed
	butterNeeded = (double)cookies * butterPerCookie;
	//Get the total of flour needed
	flourNeeded = (double)cookies * flourPerCookie;


	//Display how much of each ingridient is needed for the desired amount of cookies
	cout << "\nThe amount of ingredients needed for " << cookies << " cookies is:\n\n"
		<< "Ingredient\tAmount\n"
		<< fixed << showpoint << setprecision(2)
		<< "Sugar:\t\t" << sugarNeeded << " cups" << endl
		<< "Butter:\t\t" << butterNeeded << " cups" << endl
		<< "Flour:\t\t" << flourNeeded << " cups\n\n";


	system("pause");
	return 0;
}

/////////////OUTPUT///////////

/*
How many cookies you want to make? 24

The amount of ingredients needed for 24 cookies is:

Ingredient      Amount
Sugar:          0.75 cups
Butter:         0.50 cups
Flour:          1.38 cups

Press any key to continue . . .

*/