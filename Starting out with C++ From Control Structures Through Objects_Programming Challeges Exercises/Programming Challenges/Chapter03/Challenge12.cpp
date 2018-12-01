/**************************************************************************************
* Celsius to Fahrenheit:							      *
* 										      *
* Write a program that converts Celsius temperatures to Fahrenheit temperatures.      *
* 										      *
* The formula is:								      *
* 	F = 9/5 * C + 32							      *
* 	F is the Fahrenheit temperature, and C is the Celsius temperature.	      *
**************************************************************************************/
#include <iostream>
using namespace std;

int main()
{
	//Variables
	double celsius = 0.0; //Temperature in celsius
	double fahrenheit = 0.0; //Gets the conversion from celsius to fahrenheit

	//Ask the user to enter the temperature in celsius
	cout << "Enter the temperature in celsius: ";
	cin >> celsius;

	//Conver from celsius to fahrenheit
	fahrenheit = celsius * 9.0 / 5.0 + 32.0;

	//Display the temperature in fahrenheit
	cout << "Th temperarute in fahrenheit is " << fahrenheit << endl;

	system("pause");
	return 0;
}

/////////////OUTPUT///////////

/*
Enter the temperature in celsius: 92
Th temperarute in fahrenheit is 197.6
Press any key to continue . . .
*/
