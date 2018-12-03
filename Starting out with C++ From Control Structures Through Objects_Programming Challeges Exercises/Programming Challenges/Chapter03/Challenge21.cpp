/********************************************************************************
* How Many Pizzas?																*
* 																				*
* Modify the program you wrote in Programming Challenge 18 (Pizza Pi) so that 	*
* it reports the number of pizzas you need to buy for a party if each person 	*
* attending is expected to eat an average of four slices. 						*
* 																				*
* The program should ask the user for the number of people who will be at the 	*
* party and for the diameter of the pizzas to be ordered. 						*
* 																				*
* It should then calculate and display the number of pizzas to purchase.		*
********************************************************************************/
#include <iostream>
using namespace std;

int main()
{
	//Constants
	const double AREA_OF_SLICE = 14.25; //Area of each slice of pizza
	const double PI = 3.14159; 
	const int AVERAGE_PER_PERSON = 4; //How many pizzas are going to eat each person

	//Variables
	double diameter = 0.0; //Diameter of the pizza
	double radius = 0.0; //Radius of the pizza
	int peopleAttending = 0; //How many people are attending the party
	double numberOfSlices = 0.0; //Number of slices of pizza
	double areaOfPizza = 0.0; //Area of the whole pizza
	double numberOfSlicesNeeded = 0.0; //How many slices are needed for the guests
	int numberOfPizzas = 1; //Total number of pizzas needed

	//Ask the what is the diameter of the pizza
	cout << "What is the diameter of the pizza (in inches)? ";
	cin >> diameter;

	//While the diameter of the pizza is less than 0, keep asking
	while (diameter < 0.0)
	{
		cout << endl << diameter << " ... that is a sorry pizza.\n"
			<< "Make a new one then tell me the diameter: ";
		cin >> diameter;
	}

	//Ask how many people are attending the party
	cout << "Enter the number of people attending the party: ";
	cin >> peopleAttending;

	//While the number of people attending is less than 0, keep asking
	while (peopleAttending < 0.0)
	{
		cout << "Enter a positive number or 0 for people attending the party\n"
			<< "People attending: ";
		cin >> peopleAttending;
	}



	//Calculate the radius of the pizza
	radius = diameter / 2.0;
	//Calculate the area of the pizza
	areaOfPizza = PI * radius * radius;
	//Calculate how many slices of pizza are needed
	numberOfSlices = areaOfPizza / AREA_OF_SLICE;

	//Making it round up if after adding 0.5 the decimal portion is greater 
	//than the actual amount. Otherwise round down
	if (numberOfSlices > (int)(numberOfSlices + 0.5))
		numberOfSlices = (int)numberOfSlices + 1;
	else
		numberOfSlices = (int)numberOfSlices;

	//Calculate how many slices will needed
	numberOfSlicesNeeded = peopleAttending * AVERAGE_PER_PERSON;

	//While the amount of pizzas needed is greater than the number of slices
	while (numberOfSlicesNeeded > numberOfSlices)
	{
		//Keep subtracting (distributing) from slices neeed and incrementing 
		//the number of pizzas until you get to the needed number of whole pizzas
		numberOfSlicesNeeded -= numberOfSlices;
		numberOfPizzas++;
	}

	//Display the size of the pizza, number of people attending, and how many pizzas are needed
	cout << "\nYou specified the diameter of the pizza to be " << diameter << " inches.\n"
		<< "For a party of " << peopleAttending << " people eating an average of 4 pizzas each,\n"
		<< "you need to buy " << numberOfPizzas << " pizza(s).\n\n";

	system("pause");
	return 0;
}

/*
What is the diameter of the pizza (in inches)? 24
Enter the number of people attending the party: 100

You specified the diameter of the pizza to be 24 inches.
For a party of 100 people eating an average of 4 pizzas each,
you need to buy 13 pizza(s).

Press any key to continue . . .
*/