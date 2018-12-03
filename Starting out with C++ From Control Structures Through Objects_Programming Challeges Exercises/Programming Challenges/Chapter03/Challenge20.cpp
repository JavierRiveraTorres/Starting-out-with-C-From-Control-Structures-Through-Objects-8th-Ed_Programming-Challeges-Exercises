/****************************************************************************************
* Pizza Pi:										*
*											*
* Joe’s Pizza Palace needs a program to calculate the number of slices a pizza of	*
* any size	can be divided into. The program should perform the following steps:	*
*											*
* A) Ask the user for the diameter of the pizza in inches.				*
* B) Calculate the number of slices that may be taken from a pizza of that size.	*
* C) Display a message telling the number of slices.					*
*											*
* To calculate the number of slices that may be taken from the pizza, you must know	*
* the following facts:									*
* • Each slice should have an area of 14.125 inches.					*
* • To calculate the number of slices, simply divide the area of the pizza by 14.125.	*
* • The area of the pizza is calculated with this formula:				*
*											*
* Area = PI * r^2									*
*											*
* Note: PI is the Greek letter pi. 3.14159 can be used as its value. The variable r	*
* is the radius of the pizza. Divide the diameter by 2 to get the radius.		*
*											*
* Make sure the output of the program displays the number of slices in fixed point	*
* notation,	rounded to one decimal place of precision. Use a named constant for pi.	*
****************************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//Constants
	const double AREA_OF_SLICE = 14.125; //Area of each slice of pizza
	const double PI = 3.14159;

	//Variables
	double diameter = 0.0; //Gets the diameter of the pizza
	double radius = 0.0; //Gets the radius of the pizza
	double areaOfPizza = 0.0; //Gets the area of the pizza
	double numberOfSlices = 0; //Gets how many slices the pizza will have
							  //Though slices should be ints the program specifies
							 // they be treated as doubles (because of thier dimensions)

	//Ask the user how long in the diamer of the pizza
	cout << "What is the diameter of the pizza (in inches)? ";
	cin >> diameter;

	//Validation
	while (diameter < 0.0)
	{
		cout << "The diameter needs to be greater than 0.\n"
			<< "Diameter: ";
		cin >> diameter;
	}

	//Get the radius of the pizza
	radius = diameter / 2.0;

	//Get the area of the pizza (circle ;)
	areaOfPizza = PI * radius * radius;

	//Get how many slices can be get from this pizza
	numberOfSlices = areaOfPizza / AREA_OF_SLICE;

	//Using fixed notation and rounding to one decimal place
	cout << fixed << setprecision(1);

	//Making it round up if the decimal portion is greater than 0.5
	if (numberOfSlices > numberOfSlices + 0.5)
		cout << "You can get " << numberOfSlices + 1.0 << " slices from this pizza.\n\n";
	else
		cout << "You can get " << numberOfSlices << " slices from this pizza.\n\n";

	system("pause");
	return 0;
}


/*
What is the diameter of the pizza (in inches)? 24
You can get 32.0 slices from this pizza.

Press any key to continue . . .
*/
