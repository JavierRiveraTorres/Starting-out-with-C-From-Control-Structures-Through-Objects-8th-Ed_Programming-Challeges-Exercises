/**************************************************************************************
* How Many Calories?																  *
* 																					  *
* A bag of cookies holds 30 cookies. The calorie information on the bag claims 		  *
* that there are 10 “servings” in the bag and that a serving equals 300 calories. 	  *
* 																					  *
* Write a program that asks the user to input how many cookies he or she actually 	  *
* ate and then reports how many total calories were consumed.						  *
**************************************************************************************/
#include <iostream>
using namespace std;

int main()
{
	//Constants
	const int COOKIES = 30; //Number of cookies in the bad
	const int SERVINGS_IN_BAG = 10; //Number of servings in the bag
	const int CALORIES_PER_SERVING = 300; //Amount of calories per serving

	//Variables
	int cookiesPerServing = 0; //Gets how many cookies are in the serving
	double cookiesEaten = 0.0; //Gets how many cookies were eaten
	double caloriesPerCookie = 0.0; //Gets how many calories is 1 whole cookie
	double caloriesConsumed = 0.0; //Gets how many calories were consumed

	//Ask the user how many cookies they ate
	cout << "How many cookies you ate? ";
	cin >> cookiesEaten;

	//While the number of cookies is less than 0 or greater then 30
	while (cookiesEaten < 0.0 || cookiesEaten > COOKIES)
	{
		//If the user entered a number less than 0
		if (cookiesEaten < 0.0)
		{
			cout << "Enter a positive number for number of cookies eaten: ";
			cin >> cookiesEaten;
		}

		//If the user entered a number greater than 30
		if (cookiesEaten > COOKIES)
		{
			cout << "The bag only have 30 cookies.\n"
				<< "Re-enter the number of cookies eaten: ";
			cin >> cookiesEaten;
		}
	}
	
	//Calculate how many cookies per serving
	cookiesPerServing = COOKIES / SERVINGS_IN_BAG;
	//Calculate how many calories per cookie
	caloriesPerCookie = (double)CALORIES_PER_SERVING / (double)cookiesPerServing;
	//Calculate how many calories were consumed
	caloriesConsumed = cookiesEaten * caloriesPerCookie;


	//Display how many calories were consumed
	cout << "\nYou ate " << cookiesEaten << " cookies, that is equivalent to " 
		<< caloriesConsumed << " calories.\n\n";

	system("pause");
	return 0;
}

/////////////OUTPUT///////////

/*
How many cookies you ate? 4.5

You ate 4.5 cookies, that is equivalent to 450 calories.

Press any key to continue . . .

*/