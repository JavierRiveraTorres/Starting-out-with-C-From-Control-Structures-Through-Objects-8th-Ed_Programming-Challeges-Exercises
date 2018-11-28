/********************************************************************************************
* Personal Information:									    *
* 											    *
* Write a program that displays the following pieces of information, each on a separate     *
* line:											    *
* 											    *
* Your name										    *
* Your address, with city, state, and ZIP code						    *
* Your telephone number									    *
* Your college major									    *
* 											    *
* Use only a single cout statement to display all of this information.			    *
********************************************************************************************/
#include <iostream>
#include <string>
using namespace std;

int main()
{
	//Variables
	string name = "Javier Rivera Torres";
	string address = "URB. Estudiante Calle No Estudia. Apt F";
	string city = "Tutories. P.R";
	int zipCode = 1234;
	string phone = "(123) 612-2448";
	string collageMaj = "Youtube Binge Watching";

	//Display the information
	cout << "Name: " << name << "\n\n" 
		<< "Address: \n" << address << endl 
		<< city << " "<< zipCode << "\n\n" 
		<< "Phone: " << phone << "\n" 
		<< "Collage Major: " << collageMaj << "\n\n";

	system("pause");
	return 0;
}


/////////////OUTPUT///////////

/*
Name: Javier Rivera Torres

Address:
URB. Estudiante Calle No Estudia. Apt F
Tutories. P.R 1234

Phone: (123) 612-2448
Collage Major: Youtube Binge Watching

Press any key to continue . . .
*/
