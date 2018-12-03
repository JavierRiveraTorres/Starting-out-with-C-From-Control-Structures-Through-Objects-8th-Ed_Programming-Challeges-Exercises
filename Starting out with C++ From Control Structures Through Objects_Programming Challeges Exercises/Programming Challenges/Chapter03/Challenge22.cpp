/******************************************************************************
* Angle Calculator:							      *
* 									      *
* Write a program that asks the user for an angle, entered in radians. 	      *
*                                                                             *
* The program should then display the sine, cosine, and tangent of the angle. *
* (Use the sin, cos, and tan library functions to determine these values.)    *
* 									      *
* The output should be displayed in fixed-point notation, rounded to four     *
* decimal places of precision.                                                *
******************************************************************************/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	//Variables
	double angleInRadians = 0.0;
	double sine = 0.0;
	double cosine = 0.0;
	double tangent = 0.0;


	//Ask for the angle 
	cout << "Enter the angle in radians: ";
	cin >> angleInRadians;

	//While the angle is less than 0, keep asking
	while (angleInRadians < 0.0)
	{
		cout << "Enter a positive number: ";
		cin >> angleInRadians;
	}

	//Calculate the sine, cosine and tangent
	sine = sin(angleInRadians);
	cosine = cos(angleInRadians);
	tangent = tan(angleInRadians);

	//Display the results
	cout << fixed << setprecision(4)
		<< "The sine of the angle is " << sine << endl
		<< "The cosine of the angle is " << cosine << endl
		<< "The tangent of the angle is " << tangent << "\n\n";


	system("pause");
	return 0;
}

/*
Enter the angle in radians: 77
The sine of the angle is 0.9995
The cosine of the angle is -0.0310
The tangent of the angle is -32.2686

Press any key to continue . . .
*/
