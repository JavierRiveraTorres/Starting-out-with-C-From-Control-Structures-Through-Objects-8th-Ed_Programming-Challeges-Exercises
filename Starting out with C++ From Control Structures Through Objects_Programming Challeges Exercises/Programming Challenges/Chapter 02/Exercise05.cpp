/********************************************************************************************
* Average of Values:																		*
* 																							*
* To get the average of a series of values, you add the values up and then divide the sum	*
* by the number of values. Write a program that stores the following values in five 		*
* different variables: 28, 32, 37, 24, and 33. The program should first calculate the sum	*
* of these five variables and store the result in a separate variable named sum. 			*
* Then, the program should divide the sum variable by 5 to get the average. 				*
* Display the average on the screen.														*
* 																							*
* TIP: Use the double data type for all variables in this program.							*
********************************************************************************************/
#include <iostream>
using namespace std;

int main()
{
	//Variables
	int num1 = 28;
	int num2 = 32;
	int num3 = 37;
	int num4 = 24;
	int num5 = 33;
	int sum = 0;
	double average = 0.0;

	//Get the sum of all the numbers
	sum = num1 + num2 + num3 + num4 + num5;
	//Get the average
	average = (double)sum / 5.0;

	//Display the average
	cout << "The average is " << average << "\n\n";

	system("pause");
	return 0;
}

/////////////OUTPUT///////////

/*
The average is 30.8

Press any key to continue . . .

*/