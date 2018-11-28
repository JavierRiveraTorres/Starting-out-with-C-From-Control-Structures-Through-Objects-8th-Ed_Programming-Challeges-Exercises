/**************************************************************************************
* Test Average:																		  *
* 																					  *
* Write a program that asks for five test scores. The program should calculate 		  *
* the average test score and display it. The number displayed should be formatted 	  *
* in fixed-point notation, with one decimal point of precision.						  *
**************************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//Test scores
	int score1 = 0;
	int score2 = 0;
	int score3 = 0;
	int score4 = 0;
	int score5 = 0;

	//Average of the test scores
	double average = 0.0;

	//Ask for 5 scores
	cout << "Enter 5 scores in integers.\n"
		<< "Score 1: ";
	cin >> score1;

	//While the value of score 1 is negative
	while (score1 < 0)
	{
		cout << "Enter a positive value.\n"
			<< "Score 1: ";
		cin >> score1;
	}

	//Score 2
	cout << "Score 2: ";
	cin >> score2; 


	//While the value of score 1 is negative
	while (score2 < 0)
	{
		cout << "Enter a positive value.\n"
			<< "Score 2: ";
		cin >> score2;
	}

	//Score 3
	cout << "Score 3: ";
	cin >> score3;

	//While the value of score 3 is negative
	while (score1 < 0)
	{
		cout << "Enter a positive value.\n"
			<< "Score 3: ";
		cin >> score3;
	}

	//Score 4
	cout << "Score 4: ";
	cin >> score4;

	//While the value of score 4 is negative
	while (score1 < 0)
	{
		cout << "Enter a positive value.\n"
			<< "Score 4: ";
		cin >> score4;
	}

	//Score 5
	cout << "Score 5: ";
	cin >> score5;

	//While the value of score 5 is negative
	while (score1 < 0)
	{
		cout << "Enter a positive value.\n"
			<< "Score 5: ";
		cin >> score5;
	}


	//Get the average of the scores
	average = ((double)(score1 + score2 + score3 + score4 + score5)) / 5.0;

	//Display the scores and the average of all scores
	cout << fixed << setprecision(1)
		<< "\nScores\t\tAmount\n"
		<< "-----------------------\n"
		<< "Score 1:\t" << score1 << endl
		<< "Score 2:\t" << score2 << endl
		<< "Score 3:\t" << score3 << endl
		<< "Score 4:\t" << score4 << endl
		<< "Score 5:\t" << score5 << endl
		<< "-----------------------\n"
		<< fixed << setprecision(1)
		<< "Average:\t" << average << "\n\n";

	system("pause");
	return 0;
}

/////////////OUTPUT///////////

/*
Enter 5 scores in integers.
Score 1: 91
Score 2: 82
Score 3: 73
Score 4: 84
Score 5: 95

Scores          Amount
-----------------------
Score 1:        91
Score 2:        82
Score 3:        73
Score 4:        84
Score 5:        95
-----------------------
Average:        85.0

Press any key to continue . . .

*/