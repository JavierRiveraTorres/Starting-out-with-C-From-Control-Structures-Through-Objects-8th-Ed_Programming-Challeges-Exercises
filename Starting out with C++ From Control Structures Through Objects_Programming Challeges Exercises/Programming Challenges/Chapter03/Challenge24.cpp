/******************************************************************************
* Word Game:								      *
* 									      *
* Write a program that plays a word game with the user. The program should    *
* ask the user to enter the following:					      *
* 								              *
* • His or her name							      *
* • His or her age							      *
* • The name of a city							      *
* • The name of a college						      *
* • A profession							      *
* • A type of animal							      *
* • A pet’s name							      *
* 									      *
* After the user has entered these items, the program should display the      *
* following story, inserting the user’s input into the appropriate locations: *
* 									      *
* There once was a person named NAME who lived in CITY . At the age of	      *
* AGE , NAME went to college at COLLEGE . NAME graduated and went to work     *
* as a PROFESSION . Then, NAME adopted a(n) ANIMAL named PETNAME . They	      *
* both lived happily ever after!				              *
******************************************************************************/
#include <iostream>
#include <string>
using namespace std;

int main()
{
	//Variables
	int age = 0;
	string name;
	string cityName;
	string collegeName;
	string profession;
	string typeOfAnimal;
	string petName;

	//Ask for the name
	cout << "Enter a name: ";
	getline(cin, name);

	//Ask for the age
	cout << "Enter an age: ";
	cin >> age;

	cin.ignore();

	//Ask for the city name
	cout << "Enter a city name: ";
	getline(cin, cityName);

	//Ask for the collage name
	cout << "Enter a college name: ";
	getline(cin, collegeName);

	////Ask for the profession
	cout << "Enter a profession: ";
	getline(cin, profession);

	////Ask for the type of animal
	cout << "Enter a type of animal: ";
	getline(cin, typeOfAnimal);

	//Ask for the pet name
	cout << "Enter a petName: ";
	getline(cin, petName);

	//Output
	cout << "\nThere once was a person named " << name << " who lived in " << cityName << ".\n"
		<< "At the age of " << age << " " << name << " went to college at " << collegeName << ".\n"
		<< name << " graduated and went to work as a " << profession << ".\n"
		<< "Then, " << name << " adopted a(n) " << typeOfAnimal << " named " << petName << ".\n"
		<< "They both lived happily ever after!\n\n";


	system("pause");
	return 0;

}

/*
Enter a name: Javier
Enter an age: 38
Enter a city name: San Juan
Enter a college name: School of Life
Enter a profession: Wanderer
Enter a type of animal: Water Bear
Enter a petName: Data

There once was a person named Javier who lived in San Juan.
At the age of 38 Javier went to college at School of Life.
Javier graduated and went to work as a Wanderer.
Then, Javier adopted a(n) Water Bear named Data.
They both lived happily ever after!

Press any key to continue . . .
*/
