/********************************************************************************************
* Sales Prediction									    *
*											    *
* The East Coast sales division of a company generates 58 percent of total sales.Based	    *
* on that percentage, write a program that will predict how much the East Coast division    *
* will generate if the company has $8.6 million in sales this year.			    *
********************************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double ECDiv = 0.58; //East Coast Div. percentage of total sales
	double sales = 8600000.00; //Company sales for this year
	long double thisYear = ECDiv * sales; //How much the East Coast Division will generate

	//Set the numeric output to 2 decimal places
	cout << fixed << showpoint << setprecision(2);
	cout << "Of the $" << sales << " million in sales this year,\n" 
		<< "the East Coast Division contribution will be $" << thisYear << " dollars.\n\n";

	system("pause");
	return 0;
}


//Output
/*
Of the $8600000.00 million in sales this year,
the East Coast Division contribution will be $4988000.00 dollars.

Press any key to continue . . .

*/
