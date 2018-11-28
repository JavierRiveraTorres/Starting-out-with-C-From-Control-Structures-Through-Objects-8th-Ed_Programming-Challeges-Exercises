/**************************************************************************************
* Average Rainfall:																	  *
* 																					  *
* Write a program that calculates the average rainfall for three months. 			  *
* 																					  *
* The program should ask the user to enter the name of each month, such as 			  *
* June or July, and the amount of rain (in inches) that fell each month. 			  *
* 																					  *
* The program should display a message similar to the following:					  *
* The average rainfall for June, July, and August is 6.72 inches.					  *
* 																					  *
**************************************************************************************/
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{

	string month1;
	string month2;
	string month3;

	double rainAmount1 = 0.0;
	double rainAmount2 = 0.0;
	double rainAmount3 = 0.0;
	double totalAmount = 0.0;
	double average = 0.0;

	//Ask for the name of the first month
	cout << "Enter the name of the first month: ";
	cin >> month1;

	//
	cout << "Enter the amount of rain (in inches) for the month of " << month1 << ": ";
	cin >> rainAmount1;

	//While the amount of rainfall is less than 0
	while (rainAmount1 < 0.0)
	{
		cout << "Enter a positive value.\n"
			<< month1 << ": ";
		cin >> rainAmount1;
	}


	//Ask for the name of the second month
	cout << "Enter the name of the second month: ";
	cin >> month2;

	//Ask for the amount of rainfall for this month
	cout << "Enter the amount of rain (in inches) for the month of " << month2 << ": ";
	cin >> rainAmount2;

	//While the amount of rainfall is less than 0
	while (rainAmount2 < 0.0)
	{
		cout << "Enter a positive value.\n"
			<< month2 << ": ";
		cin >> rainAmount2;
	}


	//Ask for the name of the third month
	cout << "Enter the name of the third month: ";
	cin >> month3;

	//Ask for the amount of rainfall for this month
	cout << "Enter the amount of rain (in inches) for the month of " << month3 << ": ";
	cin >> rainAmount3;

	//While the amount of rainfall is less than 0
	while (rainAmount3 < 0.0)
	{
		cout << "Enter a positive value.\n"
			<< month3 << ": ";
		cin >> rainAmount3;

	}


	//Get the total rain amount
	totalAmount = rainAmount1 + rainAmount2 + rainAmount3;
	//Get the average rain amount
	average = totalAmount / 3.0;

	//Display the average rain amount
	cout << fixed << setprecision(3)
		<< "\nThe average rainfall for " << month1 << ", " <<
		month2 << ", and " << month3 << " is " << average << " inches.\n\n";


	system("pause");
	return 0;
}

/////////////OUTPUT///////////

/*
Enter the name of the first month: May
Enter the amount of rain (in inches) for the month of May: 3.4
Enter the name of the second month: June
Enter the amount of rain (in inches) for the month of June: 2.9
Enter the name of the third month: July
Enter the amount of rain (in inches) for the month of July: 2.2

The average rainfall for May, June, and July is 2.833 inches.

Press any key to continue . . .
*/