/**************************************************************************************
* Male and Female Percentages:														  *
* 																					  *
* Write a program that asks the user for the number of males and the number of 		  *
* females registered in a class. The program should display the percentage of males   *
* and females in the class.															  *
* 																					  *
* Hint: Suppose there are 8 males and 12 females in a class. There are 20 students 	  *
* in the class. The percentage of males can be calculated as 8 ÷ 20 = 0.4, or 40%. 	  *
* The percentage of females can be calculated as 12 ÷ 20 = 0.6, or 60%.				  *
**************************************************************************************/
#include <iostream>
using namespace std;

int main()
{
	//Variables
	int males = 0; //Number of males in the class
	int females = 0; //Number of females in the class
	int classTotal = 0; //Total number of students in the class
	double malePercent = 0.0; //Percentage of male students in the class
	double femalePercent = 0.0; //Percentage of female students in the class


	//Ask how many males are in the class
	cout << "How many males are in the class? ";
	cin >> males;

	//While  the number of males is less than 0
	while (males < 0)
	{
		cout << "Enter 0 or a positive integer.\n"
			<< "Number of males: ";
		cin >> males;
	}

	//Ask how many females are in the class
	cout << "How many females are in the class? ";
	cin >> females;

	//While  the number of females is less than 0
	while (females < 0)
	{
		cout << "Enter 0 or a positive integer.\n"
			<< "Number of females: ";
		cin >> females;
	}


	//Get the total number of students in the class
	classTotal = males + females;

	//Get the male students percentge
	malePercent = static_cast<double>(males) / classTotal * 100;
	//Get the female students percentge
	femalePercent = static_cast<double>(females) / classTotal * 100;

	//Display the male and female student percentage in the class

	//If the male percent is greater than 1
	if (malePercent > 0)
		cout << "\nThe percentage of males in the class is " << malePercent << "%.\n";
	else
		cout << "\nThere is no males in the class.\n";


	//If the male percent is greater than 1
	if (femalePercent > 0)
		cout << "The percentage of females in the class is " << femalePercent << "%.\n";
	else
		cout << "\nThere is no females in the class.\n";

	cout << endl;

	system("pause");
	return 0;
}

/////////////OUTPUT///////////

/*
How many males are in the class? 8
How many females are in the class? 12

The percentage of males in the class is 40%.
The percentage of females in the class is 60%.

Press any key to continue . . .

*/