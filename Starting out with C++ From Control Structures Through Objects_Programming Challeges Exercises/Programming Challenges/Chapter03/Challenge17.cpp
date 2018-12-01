/**************************************************************************************
* Math Tutor:									      *
* 										      *
* Write a program that can be used as a math tutor for a young student. 	      *
* 										      *
* The program should display two random numbers to be added, such as		      *
* 	 247 + 129								      *
* 										      *
* The program should then pause while the student works on the problem. 	      *
* When the student is ready to check the answer, he or she can press a key and 	      *
* the program will display the correct solution:		                      *
* 	 247 + 129 = 376							      *
**************************************************************************************/
#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main()
{
	//Creating a random seed
	srand((unsigned)time(0));

	//Constants
	int ONE_NUM_PROBLEM_MAX = 9; //Higest number in a single digit problem
	int ONE_NUM_PROBLEM_MIN = 1; //Lowest number in a single digit problem
	int TWO_NUM_PROBLEM_MAX = 99; //Higest number in a double digit problem
	int TWO_NUM_PROBLEM_MIN = 10; //Lowest number in a double digit problem
	int THREE_NUM_PROBLEM_MAX = 999; //Higest number in a triple digit problem
	int THREE_NUM_PROBLEM_MIN = 100; //Lowest number in a triple digit problem
	int FOUR_NUM_PROBLEM_MAX = 9999; //Higest number in a four digit problem
	int FOUR_NUM_PROBLEM_MIN = 1000; //Lowest number in a four digit problem

	double randomNumber = 0.0; //The random generated number to be assigned to num1 and num2
	int randomDecimal = 0; //Gets a value from 4 to 1. Used to create the decimal number problems
	double num1 = 0.0; //Value of the first number (the left or upper number)
	double num2 = 0.0; //Value of the second number (the right or bottom number)
	long double answer = 0.0; //gets the user answer
	int typeOfProblem = 0; //Allows the user to pick they type of problem they want
	int numOfDigits = 0; //Gets the user choice of number of digits of each operand
	char decimals; //Gets the user choice for problems with decimal numbers
	bool isDone = false; //Keeps the program running while is false
	char done; //Allows the user to stay or exit the program


	//Begin the loop
	do
	{

		//Ask the user what type of problem they would like to do
		cout << "What type of problem you woud like to do?\n"
			<< "\tEnter 1 for Addition\n"
			<< "\tEnter 2 for Subtraction\n"
			<< "\tEnter 3 for Multiplication\n"
			<< "\tEnter 4 for Division\n"
			<< "\tType of problem: ";
		cin >> typeOfProblem;

		//While the typeOfProblem is less than 1 or greater than 4
		while (typeOfProblem < 1 || typeOfProblem > 4)
		{
			cout << "Enter a number from 1 to 4 for the type of problem.\n"
				<< "\tEnter 1 for Addition\n"
				<< "\tEnter 2 for Subtraction\n"
				<< "\tEnter 3 for Multiplication\n"
				<< "\tEnter 4 for Division\n"
				<< "\tType of problem: ";
			cin >> typeOfProblem;
		}

		switch (typeOfProblem)
		{
		case 1: //Addition option
			cout << "\nADDITION PROBLEM!\n\n"
				<< "Of how many digits you want your problem to be?\n"
				<< "\tEnter 1 for 1 digit\n"
				<< "\tEnter 2 for 2 digits\n"
				<< "\tEnter 3 for 3 digits\n"
				<< "\tEnter 4 for 4 digits\n"
				<< "\tEnter 5 for a random amount of digits\n"
				<< "\tHow many digits? ";
			cin >> numOfDigits;

			//While the number of digits is less than 0
			while (numOfDigits < 1 || numOfDigits > 5)
			{
				cout << "Enter a number from 1 to 5: ";
				cin >> numOfDigits;
			}


			if (numOfDigits == 1)
			{

				//Get the value of the first number
				randomNumber = (rand() % ONE_NUM_PROBLEM_MAX) + ONE_NUM_PROBLEM_MIN + 1;
				//Assign the first value to num1
				num1 = (double)randomNumber;

				//Get the value of the second number
				randomNumber = (rand() % ONE_NUM_PROBLEM_MAX) + ONE_NUM_PROBLEM_MIN + 1;
				//Assign the second value to num2
				num2 = (double)randomNumber;

				cout << "\nEnter the answer to the following problem.\n\n";

				//Dislay the problem
				cout << setw(5) << num1 << endl
					<< "+ " << setw(3) << num2 << endl
					<< "______\n";

				//Get the answer
				cin >> answer;

				//If the user gets the incorrect answer display the result
				if (answer != (num1 + num2))
				{
					answer = num1 + num2;
					cout << "\nThe answer is " << answer << endl;
				}
				else
					cout << "\nExellent!\n";
			}
			//If the user wants to do 2 digit problems
			else if (numOfDigits == 2)
			{
				//Ask if they would like to do the problem with decimal numbers
				cout << "\nWould you like the problem to have decimal numbers? (Y/N) ";
				cin >> decimals;

				//With decimals
				if (decimals == 'Y' || decimals == 'y')
				{
					//Get the value of the first number
					randomNumber = (rand() % TWO_NUM_PROBLEM_MAX) + TWO_NUM_PROBLEM_MIN + 1;
					//Assign the first value to num1
					num1 = (double)randomNumber;

					//Get how many decimal places num1 will have
					randomDecimal = (rand() % 2) + 1;

					//Make num1 a decimal
					if (randomDecimal == 2)
						num1 /= 100.0;
					else if (randomDecimal == 1)
						num1 /= 10.0;

					//Get the value of the second number
					randomNumber = (rand() % TWO_NUM_PROBLEM_MAX) + TWO_NUM_PROBLEM_MIN + 1;
					//Assign the second value to num2
					num2 = (double)randomNumber;

					//Get how many decimal places num2 will have
					randomDecimal = (rand() % 2) + 1;

					//Make num2 a decimal
					if (randomDecimal == 2)
						num2 /= 100.0;
					else if (randomDecimal == 1)
						num2 /= 10.0;

					cout << "\nEnter the answer to the following problem.\n\n";

					//Dislay the problem
					cout << setw(5) << num1 << endl
						<< "+ " << setw(3) << num2 << endl
						<< "_______\n";

					//Get the answer
					cin >> answer;

					//If the user gets the incorrect answer display the result
					if (answer != (num1 + num2))
					{
						answer = num1 + num2;
						cout << "\nThe answer is " << answer << endl;
					}
					else
						cout << "\nExellent!\n";
				}
				//Without decimals
				else
				{
					//Get the value of the first number
					randomNumber = (rand() % TWO_NUM_PROBLEM_MAX) + TWO_NUM_PROBLEM_MIN + 1;
					//Assign the first value to num1
					num1 = (double)randomNumber;

					//Get the value of the second number
					randomNumber = (rand() % TWO_NUM_PROBLEM_MAX) + TWO_NUM_PROBLEM_MIN + 1;
					//Assign the second value to num2
					num2 = (double)randomNumber;

					cout << "\nEnter the answer to the following problem.\n\n";

					//Dislay the problem
					cout << setw(5) << num1 << endl
						<< "+ " << setw(3) << num2 << endl
						<< "______\n";

					//Get the answer
					cin >> answer;

					//If the user gets the incorrect answer display the result
					if (answer != (num1 + num2))
					{
						answer = num1 + num2;
						cout << "\nThe answer is " << answer << endl;
					}
					else
						cout << "\nExellent!\n";
				}
			}
			//If the user wants to do 3 digit problems
			else if (numOfDigits == 3)
			{
				//Ask if they would like to do the problem with decimal numbers
				cout << "\nWould you like the problem to have decimal numbers? (Y/N) ";
				cin >> decimals;

				//With decimals
				if (decimals == 'Y' || decimals == 'y')
				{
					//Get the value of the first number
					randomNumber = (rand() % THREE_NUM_PROBLEM_MAX) + THREE_NUM_PROBLEM_MIN;
					//Assign the first value to num1
					num1 = (double)randomNumber;

					//Get how many decimal places num1 will have
					randomDecimal = (rand() % 3) + 1;

					//Make num1 a decimal
					if (randomDecimal == 3)
						num1 /= 1000.0;
					else if (randomDecimal == 2)
						num1 /= 100.0;
					else if (randomDecimal == 1)
						num1 /= 10.0;

					//Get the value of the second number
					randomNumber = (rand() % THREE_NUM_PROBLEM_MAX) + THREE_NUM_PROBLEM_MIN;
					//Assign the second value to num2
					num2 = (double)randomNumber;

					//Get how many decimal places num2 will have
					randomDecimal = (rand() % 3) + 1;

					//Make num2 a decimal
					if (randomDecimal == 3)
						num2 /= 1000.0;
					else if (randomDecimal == 2)
						num2 /= 100.0;
					else if (randomDecimal == 1)
						num2 /= 10.0;

					cout << "\nEnter the answer to the following problem.\n\n";

					//Dislay the problem
					cout << setw(7) << num1 << endl
						<< "+ " << setw(3) << num2 << endl
						<< "________\n";

					//Get the answer
					cin >> answer;

					//If the user gets the incorrect answer display the result
					if (answer != (num1 + num2))
					{
						answer = num1 + num2;
						cout << "\nThe answer is " << answer << endl;
					}
					else
						cout << "\nExellent!\n";
				}
				//Without decimals
				else
				{
					//Get the value of the first number
					randomNumber = (rand() % THREE_NUM_PROBLEM_MAX) + THREE_NUM_PROBLEM_MIN;
					//Assign the first value to num1
					num1 = (double)randomNumber;

					//Get the value of the second number
					randomNumber = (rand() % THREE_NUM_PROBLEM_MAX) + THREE_NUM_PROBLEM_MIN;
					//Assign the second value to num2
					num2 = (double)randomNumber;

					cout << "\nEnter the answer to the following problem.\n\n";

					//Dislay the problem
					cout << setw(5) << num1 << endl
						<< "+ " << setw(3) << num2 << endl
						<< "________\n";

					//Get the answer
					cin >> answer;

					//If the user gets the incorrect answer display the result
					if (answer != (num1 + num2))
					{
						answer = num1 + num2;
						cout << "\nThe answer is " << answer << endl;
					}
					else
						cout << "\nExellent!\n";
				}
			}
			//If the user wants to do 4 digit problems
			else if (numOfDigits == 4)
			{
				//Ask if they would like to do the problem with decimal numbers
				cout << "\nWould you like the problem to have decimal numbers? (Y/N) ";
				cin >> decimals;

				//With decimals
				if (decimals == 'Y' || decimals == 'y')
				{
					//Get the value of the first number
					randomNumber = (rand() % FOUR_NUM_PROBLEM_MAX) + FOUR_NUM_PROBLEM_MIN;
					//Assign the first value to num1
					num1 = (double)randomNumber;

					//Get how many decimal places num1 will have
					randomDecimal = (rand() % 4) + 1;

					//Make num1 a decimal
					if (randomDecimal == 4)
						num1 /= 10000.0;
					else if (randomDecimal == 3)
						num1 /= 1000.0;
					else if (randomDecimal == 2)
						num1 /= 100.0;
					else if (randomDecimal == 1)
						num1 /= 10.0;

					//Get the value of the second number
					randomNumber = (rand() % FOUR_NUM_PROBLEM_MAX) + FOUR_NUM_PROBLEM_MIN;
					//Assign the second value to num2
					num2 = (double)randomNumber;

					//Get how many decimal places num2 will have
					randomDecimal = (rand() % 4) + 1;

					//Make num2 a decimal
					if (randomDecimal == 4)
						num2 /= 10000.0;
					else if (randomDecimal == 3)
						num2 /= 1000.0;
					else if (randomDecimal == 2)
						num2 /= 100.0;
					else if (randomDecimal == 1)
						num2 /= 10.0;

					cout << "\nEnter the answer to the following problem.\n\n";

					//Dislay the problem
					cout << setw(8) << num1 << endl
						<< "+ " << setw(3) << num2 << endl
						<< "________\n";

					//Get the answer
					cin >> answer;

					//If the user gets the incorrect answer display the result
					if (answer != (num1 + num2))
					{
						answer = num1 + num2;
						cout << "\nThe answer is " << answer << endl;
					}
					else
						cout << "\nExellent!\n";
				}
				//Without decimals
				else
				{
					//Get the value of the first number
					randomNumber = (rand() % FOUR_NUM_PROBLEM_MAX) + FOUR_NUM_PROBLEM_MIN;
					//Assign the first value to num1
					num1 = (double)randomNumber;

					//Get the value of the second number
					randomNumber = (rand() % FOUR_NUM_PROBLEM_MAX) + FOUR_NUM_PROBLEM_MIN;
					//Assign the second value to num2
					num2 = (double)randomNumber;

					cout << "\nEnter the answer to the following problem.\n\n";

					//Dislay the problem
					cout << setw(6) << num1 << endl
						<< "+ " << setw(3) << num2 << endl
						<< "________\n";

					//Get the answer
					cin >> answer;

					//If the user gets the incorrect answer display the result
					if (answer != (num1 + num2))
					{
						answer = num1 + num2;
						cout << "\nThe answer is " << answer << endl;
					}
					else
						cout << "\nExellent!\n";
				}
			}
			//If the user chooses a random amount of digits
			else if (numOfDigits == 5)
			{
				//Ask if they would like to do the problem with decimal numbers
				cout << "\nWould you like the problem to have decimal numbers? (Y/N) ";
				cin >> decimals;

				//With decimals
				if (decimals == 'Y' || decimals == 'y')
				{
					//Get the value of the first number
					randomNumber = (rand() % FOUR_NUM_PROBLEM_MAX) + ONE_NUM_PROBLEM_MIN;
					//Assign the first value to num1
					num1 = (double)randomNumber;

					//Get how many decimal places num1 will have
					randomDecimal = (rand() % 4) + 1;

					//Make num1 a decimal
					if (randomDecimal == 4)
						num1 /= 10000.0;
					else if (randomDecimal == 3)
						num1 /= 1000.0;
					else if (randomDecimal == 2)
						num1 /= 100.0;
					else if (randomDecimal == 1)
						num1 /= 10.0;

					//Get the value of the second number
					randomNumber = (rand() % FOUR_NUM_PROBLEM_MAX) + ONE_NUM_PROBLEM_MIN;
					//Assign the second value to num2
					num2 = (double)randomNumber;

					//Get how many decimal places num2 will have
					randomDecimal = (rand() % 4) + 1;

					//Make num2 a decimal
					if (randomDecimal == 4)
						num2 /= 10000.0;
					else if (randomDecimal == 3)
						num2 /= 1000.0;
					else if (randomDecimal == 2)
						num2 /= 100.0;
					else if (randomDecimal == 1)
						num2 /= 10.0;

					cout << "\nEnter the answer to the following problem.\n\n";

					//If the num1 is greater less than 10, it is a single digit number
					if (num1 < 10)
					{
						//Dislay the problem
						cout << setw(5) << num1 << endl
							<< "+ " << setw(3) << num2 << endl
							<< "________\n";
					}
					//If the num1 is greater less than 10, it is a two digit number
					else if (num1 < 100)
					{
						//Dislay the problem
						cout << setw(5) << num1 << endl
							<< "+ " << setw(3) << num2 << endl
							<< "________\n";
					}
					//If the num1 is greater less than 10, it is a three digit number
					else if (num1 < 1000)
					{
						//Dislay the problem
						cout << setw(7) << num1 << endl
							<< "+ " << setw(3) << num2 << endl
							<< "________\n";
					}
					//It is a 4 digit number
					else
					{
						//Dislay the problem
						cout << setw(8) << num1 << endl
							<< "+ " << setw(3) << num2 << endl
							<< "________\n";
					}

					//Get the answer
					cin >> answer;

					//If the user gets the incorrect answer display the result
					if (answer != (num1 + num2))
					{
						answer = num1 + num2;
						cout << "\nThe answer is " << answer << endl;
					}
					else
						cout << "\nExellent!\n";
				}
				//Without decimals
				else
				{
					//Get the value of the first number
					randomNumber = (rand() % FOUR_NUM_PROBLEM_MAX) + ONE_NUM_PROBLEM_MIN;
					//Assign the first value to num1
					num1 = (double)randomNumber;

					//Get the value of the second number
					randomNumber = (rand() % FOUR_NUM_PROBLEM_MAX) + ONE_NUM_PROBLEM_MIN;
					//Assign the second value to num2
					num2 = (double)randomNumber;

					cout << "\nEnter the answer to the following problem.\n\n";

					//It is a 4 digit number
					if (num1 > 1000)
					{
						//Dislay the problem
						cout << setw(6) << num1 << endl
							<< "+ " << setw(3) << num2 << endl
							<< "________\n";
					}
					else
						//Dislay the problem
						cout << setw(5) << num1 << endl
						<< "+ " << setw(3) << num2 << endl
						<< "________\n";


					//Get the answer
					cin >> answer;

					//If the user gets the incorrect answer display the result
					if (answer != (num1 + num2))
					{
						answer = num1 + num2;
						cout << "\nThe answer is " << answer << endl;
					}
					else
						cout << "\nExellent!\n";
				}
			}
			break;
		case 2: //Subtraction option
			cout << "\nSUBTRACTION PROBLEM!\n\n"
				<< "Of how many digits you want your problem to be?\n"
				<< "\tEnter 1 for 1 digit\n"
				<< "\tEnter 2 for 2 digits\n"
				<< "\tEnter 3 for 3 digits\n"
				<< "\tEnter 4 for 4 digits\n"
				<< "\tEnter 5 for a random amount of digits\n"
				<< "\tHow many digits? ";
			cin >> numOfDigits;

			//While the number of digits is less than 0
			while (numOfDigits < 1 || numOfDigits > 5)
			{
				cout << "Enter a number from 1 to 5: ";
				cin >> numOfDigits;
			}


			if (numOfDigits == 1)
			{

				//Get the value of the first number
				randomNumber = (rand() % ONE_NUM_PROBLEM_MAX) + ONE_NUM_PROBLEM_MIN + 1;
				//Assign the first value to num1
				num1 = (double)randomNumber;

				//Get the value of the second number
				randomNumber = (rand() % ONE_NUM_PROBLEM_MAX) + ONE_NUM_PROBLEM_MIN + 1;
				//Assign the second value to num2
				num2 = (double)randomNumber;

				cout << "\nEnter the answer to the following problem.\n\n";

				//Dislay the problem
				cout << setw(5) << num1 << endl
					<< "- " << setw(3) << num2 << endl
					<< "______\n";

				//Get the answer
				cin >> answer;

				//If the user gets the incorrect answer display the result
				if (answer != (num1 - num2))
				{
					answer = num1 - num2;
					cout << "\nThe answer is " << answer << endl;
				}
				else
					cout << "\nExellent!\n";
			}
			//If the user wants to do 2 digit problems
			else if (numOfDigits == 2)
			{
				//Ask if they would like to do the problem with decimal numbers
				cout << "\nWould you like the problem to have decimal numbers? (Y/N) ";
				cin >> decimals;

				//With decimals
				if (decimals == 'Y' || decimals == 'y')
				{
					//Get the value of the first number
					randomNumber = (rand() % TWO_NUM_PROBLEM_MAX) + TWO_NUM_PROBLEM_MIN + 1;
					//Assign the first value to num1
					num1 = (double)randomNumber;

					//Get how many decimal places num1 will have
					randomDecimal = (rand() % 2) + 1;

					//Make num1 a decimal
					if (randomDecimal == 2)
						num1 /= 100.0;
					else if (randomDecimal == 1)
						num1 /= 10.0;

					//Get the value of the second number
					randomNumber = (rand() % TWO_NUM_PROBLEM_MAX) + TWO_NUM_PROBLEM_MIN + 1;
					//Assign the second value to num2
					num2 = (double)randomNumber;

					//Get how many decimal places num2 will have
					randomDecimal = (rand() % 2) + 1;

					//Make num2 a decimal
					if (randomDecimal == 2)
						num2 /= 100.0;
					else if (randomDecimal == 1)
						num2 /= 10.0;

					cout << "\nEnter the answer to the following problem.\n\n";

					//Dislay the problem
					cout << setw(5) << num1 << endl
						<< "- " << setw(3) << num2 << endl
						<< "_______\n";

					//Get the answer
					cin >> answer;

					//If the user gets the incorrect answer display the result
					if (answer != (num1 - num2))
					{
						answer = num1 - num2;
						cout << "\nThe answer is " << answer << endl;
					}
					else
						cout << "\nExellent!\n";
				}
				//Without decimals
				else
				{
					//Get the value of the first number
					randomNumber = (rand() % TWO_NUM_PROBLEM_MAX) + TWO_NUM_PROBLEM_MIN + 1;
					//Assign the first value to num1
					num1 = (double)randomNumber;

					//Get the value of the second number
					randomNumber = (rand() % TWO_NUM_PROBLEM_MAX) + TWO_NUM_PROBLEM_MIN + 1;
					//Assign the second value to num2
					num2 = (double)randomNumber;

					cout << "\nEnter the answer to the following problem.\n\n";

					//Dislay the problem
					cout << setw(5) << num1 << endl
						<< "- " << setw(3) << num2 << endl
						<< "______\n";

					//Get the answer
					cin >> answer;

					//If the user gets the incorrect answer display the result
					if (answer != (num1 - num2))
					{
						answer = num1 - num2;
						cout << "\nThe answer is " << answer << endl;
					}
					else
						cout << "\nExellent!\n";
				}
			}
			//If the user wants to do 3 digit problems
			else if (numOfDigits == 3)
			{
				//Ask if they would like to do the problem with decimal numbers
				cout << "\nWould you like the problem to have decimal numbers? (Y/N) ";
				cin >> decimals;

				//With decimals
				if (decimals == 'Y' || decimals == 'y')
				{
					//Get the value of the first number
					randomNumber = (rand() % THREE_NUM_PROBLEM_MAX) + THREE_NUM_PROBLEM_MIN;
					//Assign the first value to num1
					num1 = (double)randomNumber;

					//Get how many decimal places num1 will have
					randomDecimal = (rand() % 3) + 1;

					//Make num1 a decimal
					if (randomDecimal == 3)
						num1 /= 1000.0;
					else if (randomDecimal == 2)
						num1 /= 100.0;
					else if (randomDecimal == 1)
						num1 /= 10.0;

					//Get the value of the second number
					randomNumber = (rand() % THREE_NUM_PROBLEM_MAX) + THREE_NUM_PROBLEM_MIN;
					//Assign the second value to num2
					num2 = (double)randomNumber;

					//Get how many decimal places num2 will have
					randomDecimal = (rand() % 3) + 1;

					//Make num2 a decimal
					if (randomDecimal == 3)
						num2 /= 1000.0;
					else if (randomDecimal == 2)
						num2 /= 100.0;
					else if (randomDecimal == 1)
						num2 /= 10.0;

					cout << "\nEnter the answer to the following problem.\n\n";

					//Dislay the problem
					cout << setw(7) << num1 << endl
						<< "- " << setw(3) << num2 << endl
						<< "________\n";

					//Get the answer
					cin >> answer;

					//If the user gets the incorrect answer display the result
					if (answer != (num1 - num2))
					{
						answer = num1 - num2;
						cout << "\nThe answer is " << answer << endl;
					}
					else
						cout << "\nExellent!\n";
				}
				//Without decimals
				else
				{
					//Get the value of the first number
					randomNumber = (rand() % THREE_NUM_PROBLEM_MAX) + THREE_NUM_PROBLEM_MIN;
					//Assign the first value to num1
					num1 = (double)randomNumber;

					//Get the value of the second number
					randomNumber = (rand() % THREE_NUM_PROBLEM_MAX) + THREE_NUM_PROBLEM_MIN;
					//Assign the second value to num2
					num2 = (double)randomNumber;

					cout << "\nEnter the answer to the following problem.\n\n";

					//Dislay the problem
					cout << setw(5) << num1 << endl
						<< "- " << setw(3) << num2 << endl
						<< "________\n";

					//Get the answer
					cin >> answer;

					//If the user gets the incorrect answer display the result
					if (answer != (num1 - num2))
					{
						answer = num1 - num2;
						cout << "\nThe answer is " << answer << endl;
					}
					else
						cout << "\nExellent!\n";
				}
			}
			//If the user wants to do 4 digit problems
			else if (numOfDigits == 4)
			{
				//Ask if they would like to do the problem with decimal numbers
				cout << "\nWould you like the problem to have decimal numbers? (Y/N) ";
				cin >> decimals;

				//With decimals
				if (decimals == 'Y' || decimals == 'y')
				{
					//Get the value of the first number
					randomNumber = (rand() % FOUR_NUM_PROBLEM_MAX) + FOUR_NUM_PROBLEM_MIN;
					//Assign the first value to num1
					num1 = (double)randomNumber;

					//Get how many decimal places num1 will have
					randomDecimal = (rand() % 4) + 1;

					//Make num1 a decimal
					if (randomDecimal == 4)
						num1 /= 10000.0;
					else if (randomDecimal == 3)
						num1 /= 1000.0;
					else if (randomDecimal == 2)
						num1 /= 100.0;
					else if (randomDecimal == 1)
						num1 /= 10.0;

					//Get the value of the second number
					randomNumber = (rand() % FOUR_NUM_PROBLEM_MAX) + FOUR_NUM_PROBLEM_MIN;
					//Assign the second value to num2
					num2 = (double)randomNumber;

					//Get how many decimal places num2 will have
					randomDecimal = (rand() % 4) + 1;

					//Make num2 a decimal
					if (randomDecimal == 4)
						num2 /= 10000.0;
					else if (randomDecimal == 3)
						num2 /= 1000.0;
					else if (randomDecimal == 2)
						num2 /= 100.0;
					else if (randomDecimal == 1)
						num2 /= 10.0;

					cout << "\nEnter the answer to the following problem.\n\n";

					//Dislay the problem
					cout << setw(8) << num1 << endl
						<< "- " << setw(3) << num2 << endl
						<< "________\n";

					//Get the answer
					cin >> answer;

					//If the user gets the incorrect answer display the result
					if (answer != (num1 - num2))
					{
						answer = num1 - num2;
						cout << "\nThe answer is " << answer << endl;
					}
					else
						cout << "\nExellent!\n";
				}
				//Without decimals
				else
				{
					//Get the value of the first number
					randomNumber = (rand() % FOUR_NUM_PROBLEM_MAX) + FOUR_NUM_PROBLEM_MIN;
					//Assign the first value to num1
					num1 = (double)randomNumber;

					//Get the value of the second number
					randomNumber = (rand() % FOUR_NUM_PROBLEM_MAX) + FOUR_NUM_PROBLEM_MIN;
					//Assign the second value to num2
					num2 = (double)randomNumber;

					cout << "\nEnter the answer to the following problem.\n\n";

					//Dislay the problem
					cout << setw(6) << num1 << endl
						<< "- " << setw(3) << num2 << endl
						<< "________\n";

					//Get the answer
					cin >> answer;

					//If the user gets the incorrect answer display the result
					if (answer != (num1 - num2))
					{
						answer = num1 - num2;
						cout << "\nThe answer is " << answer << endl;
					}
					else
						cout << "\nExellent!\n";
				}
			}
			//If the user chooses a random amount of digits
			else if (numOfDigits == 5)
			{
				//Ask if they would like to do the problem with decimal numbers
				cout << "\nWould you like the problem to have decimal numbers? (Y/N) ";
				cin >> decimals;

				//With decimals
				if (decimals == 'Y' || decimals == 'y')
				{
					//Get the value of the first number
					randomNumber = (rand() % FOUR_NUM_PROBLEM_MAX) + ONE_NUM_PROBLEM_MIN;
					//Assign the first value to num1
					num1 = (double)randomNumber;

					//Get how many decimal places num1 will have
					randomDecimal = (rand() % 4) + 1;

					//Make num1 a decimal
					if (randomDecimal == 4)
						num1 /= 10000.0;
					else if (randomDecimal == 3)
						num1 /= 1000.0;
					else if (randomDecimal == 2)
						num1 /= 100.0;
					else if (randomDecimal == 1)
						num1 /= 10.0;

					//Get the value of the second number
					randomNumber = (rand() % FOUR_NUM_PROBLEM_MAX) + ONE_NUM_PROBLEM_MIN;
					//Assign the second value to num2
					num2 = (double)randomNumber;

					//Get how many decimal places num2 will have
					randomDecimal = (rand() % 4) + 1;

					//Make num2 a decimal
					if (randomDecimal == 4)
						num2 /= 10000.0;
					else if (randomDecimal == 3)
						num2 /= 1000.0;
					else if (randomDecimal == 2)
						num2 /= 100.0;
					else if (randomDecimal == 1)
						num2 /= 10.0;

					cout << "\nEnter the answer to the following problem.\n\n";

					//If the num1 is greater less than 10, it is a single digit number
					if (num1 < 10)
					{
						//Dislay the problem
						cout << setw(5) << num1 << endl
							<< "- " << setw(3) << num2 << endl
							<< "________\n";
					}
					//If the num1 is greater less than 10, it is a two digit number
					else if (num1 < 100)
					{
						//Dislay the problem
						cout << setw(5) << num1 << endl
							<< "- " << setw(3) << num2 << endl
							<< "________\n";
					}
					//If the num1 is greater less than 10, it is a three digit number
					else if (num1 < 1000)
					{
						//Dislay the problem
						cout << setw(7) << num1 << endl
							<< "- " << setw(3) << num2 << endl
							<< "________\n";
					}
					//It is a 4 digit number
					else
					{
						//Dislay the problem
						cout << setw(8) << num1 << endl
							<< "- " << setw(3) << num2 << endl
							<< "________\n";
					}

					//Get the answer
					cin >> answer;

					//If the user gets the incorrect answer display the result
					if (answer != (num1 - num2))
					{
						answer = num1 - num2;
						cout << "\nThe answer is " << answer << endl;
					}
					else
						cout << "\nExellent!\n";
				}
				//Without decimals
				else
				{
					//Get the value of the first number
					randomNumber = (rand() % FOUR_NUM_PROBLEM_MAX) + ONE_NUM_PROBLEM_MIN;
					//Assign the first value to num1
					num1 = (double)randomNumber;

					//Get the value of the second number
					randomNumber = (rand() % FOUR_NUM_PROBLEM_MAX) + ONE_NUM_PROBLEM_MIN;
					//Assign the second value to num2
					num2 = (double)randomNumber;

					cout << "\nEnter the answer to the following problem.\n\n";

					//It is a 4 digit number
					if (num1 > 1000)
					{
						//Dislay the problem
						cout << setw(6) << num1 << endl
							<< "- " << setw(3) << num2 << endl
							<< "________\n";
					}
					else
						//Dislay the problem
						cout << setw(5) << num1 << endl
						<< "- " << setw(3) << num2 << endl
						<< "________\n";


					//Get the answer
					cin >> answer;

					//If the user gets the incorrect answer display the result
					if (answer != (num1 - num2))
					{
						answer = num1 - num2;
						cout << "\nThe answer is " << answer << endl;
					}
					else
						cout << "\nExellent!\n";
				}
			}
			break;

		case 3: //Multiplication option
			cout << "\nMULTIPLICATION PROBLEM!\n\n"
				<< "Of how many digits you want your problem to be?\n"
				<< "\tEnter 1 for 1 digit\n"
				<< "\tEnter 2 for 2 digits\n"
				<< "\tEnter 3 for 3 digits\n"
				<< "\tEnter 4 for 4 digits\n"
				<< "\tEnter 5 for a random amount of digits\n"
				<< "\tHow many digits? ";
			cin >> numOfDigits;

			//While the number of digits is less than 0
			while (numOfDigits < 1 || numOfDigits > 5)
			{
				cout << "Enter a number from 1 to 5: ";
				cin >> numOfDigits;
			}


			if (numOfDigits == 1)
			{

				//Get the value of the first number
				randomNumber = (rand() % ONE_NUM_PROBLEM_MAX) + ONE_NUM_PROBLEM_MIN + 1;
				//Assign the first value to num1
				num1 = (double)randomNumber;

				//Get the value of the second number
				randomNumber = (rand() % ONE_NUM_PROBLEM_MAX) + ONE_NUM_PROBLEM_MIN + 1;
				//Assign the second value to num2
				num2 = (double)randomNumber;

				cout << "\nEnter the answer to the following problem.\n\n";

				//Dislay the problem
				cout << setw(5) << num1 << endl
					<< "* " << setw(3) << num2 << endl
					<< "______\n";

				//Get the answer
				cin >> answer;

				//If the user gets the incorrect answer display the result
				if (answer != (num1 * num2))
				{
					answer = num1 * num2;
					cout << "\nThe answer is " << answer << endl;
				}
				else
					cout << "\nExellent!\n";
			}
			//If the user wants to do 2 digit problems
			else if (numOfDigits == 2)
			{
				//Ask if they would like to do the problem with decimal numbers
				cout << "\nWould you like the problem to have decimal numbers? (Y/N) ";
				cin >> decimals;

				//With decimals
				if (decimals == 'Y' || decimals == 'y')
				{
					//Get the value of the first number
					randomNumber = (rand() % TWO_NUM_PROBLEM_MAX) + TWO_NUM_PROBLEM_MIN + 1;
					//Assign the first value to num1
					num1 = (double)randomNumber;

					//Get how many decimal places num1 will have
					randomDecimal = (rand() % 2) + 1;

					//Make num1 a decimal
					if (randomDecimal == 2)
						num1 /= 100.0;
					else if (randomDecimal == 1)
						num1 /= 10.0;

					//Get the value of the second number
					randomNumber = (rand() % TWO_NUM_PROBLEM_MAX) + TWO_NUM_PROBLEM_MIN + 1;
					//Assign the second value to num2
					num2 = (double)randomNumber;

					//Get how many decimal places num2 will have
					randomDecimal = (rand() % 2) + 1;

					//Make num2 a decimal
					if (randomDecimal == 2)
						num2 /= 100.0;
					else if (randomDecimal == 1)
						num2 /= 10.0;

					cout << "\nEnter the answer to the following problem.\n\n";

					//Dislay the problem
					cout << setw(5) << num1 << endl
						<< "* " << setw(3) << num2 << endl
						<< "_______\n";

					//Get the answer
					cin >> answer;

					//If the user gets the incorrect answer display the result
					if (answer != (num1 * num2))
					{
						answer = num1 * num2;
						cout << "\nThe answer is " << answer << endl;
					}
					else
						cout << "\nExellent!\n";
				}
				//Without decimals
				else
				{
					//Get the value of the first number
					randomNumber = (rand() % TWO_NUM_PROBLEM_MAX) + TWO_NUM_PROBLEM_MIN + 1;
					//Assign the first value to num1
					num1 = (double)randomNumber;

					//Get the value of the second number
					randomNumber = (rand() % TWO_NUM_PROBLEM_MAX) + TWO_NUM_PROBLEM_MIN + 1;
					//Assign the second value to num2
					num2 = (double)randomNumber;

					cout << "\nEnter the answer to the following problem.\n\n";

					//Dislay the problem
					cout << setw(5) << num1 << endl
						<< "* " << setw(3) << num2 << endl
						<< "______\n";

					//Get the answer
					cin >> answer;

					//If the user gets the incorrect answer display the result
					if (answer != (num1 * num2))
					{
						answer = num1 * num2;
						cout << "\nThe answer is " << answer << endl;
					}
					else
						cout << "\nExellent!\n";
				}
			}
			//If the user wants to do 3 digit problems
			else if (numOfDigits == 3)
			{
				//Ask if they would like to do the problem with decimal numbers
				cout << "\nWould you like the problem to have decimal numbers? (Y/N) ";
				cin >> decimals;

				//With decimals
				if (decimals == 'Y' || decimals == 'y')
				{
					//Get the value of the first number
					randomNumber = (rand() % THREE_NUM_PROBLEM_MAX) + THREE_NUM_PROBLEM_MIN;
					//Assign the first value to num1
					num1 = (double)randomNumber;

					//Get how many decimal places num1 will have
					randomDecimal = (rand() % 3) + 1;

					//Make num1 a decimal
					if (randomDecimal == 3)
						num1 /= 1000.0;
					else if (randomDecimal == 2)
						num1 /= 100.0;
					else if (randomDecimal == 1)
						num1 /= 10.0;

					//Get the value of the second number
					randomNumber = (rand() % THREE_NUM_PROBLEM_MAX) + THREE_NUM_PROBLEM_MIN;
					//Assign the second value to num2
					num2 = (double)randomNumber;

					//Get how many decimal places num2 will have
					randomDecimal = (rand() % 3) + 1;

					//Make num2 a decimal
					if (randomDecimal == 3)
						num2 /= 1000.0;
					else if (randomDecimal == 2)
						num2 /= 100.0;
					else if (randomDecimal == 1)
						num2 /= 10.0;

					cout << "\nEnter the answer to the following problem.\n\n";

					//Dislay the problem
					cout << setw(7) << num1 << endl
						<< "* " << setw(3) << num2 << endl
						<< "________\n";

					//Get the answer
					cin >> answer;

					//If the user gets the incorrect answer display the result
					if (answer != (num1 * num2))
					{
						answer = num1 * num2;
						cout << "\nThe answer is " << answer << endl;
					}
					else
						cout << "\nExellent!\n";
				}
				//Without decimals
				else
				{
					//Get the value of the first number
					randomNumber = (rand() % THREE_NUM_PROBLEM_MAX) + THREE_NUM_PROBLEM_MIN;
					//Assign the first value to num1
					num1 = (double)randomNumber;

					//Get the value of the second number
					randomNumber = (rand() % THREE_NUM_PROBLEM_MAX) + THREE_NUM_PROBLEM_MIN;
					//Assign the second value to num2
					num2 = (double)randomNumber;

					cout << "\nEnter the answer to the following problem.\n\n";

					//Dislay the problem
					cout << setw(5) << num1 << endl
						<< "* " << setw(3) << num2 << endl
						<< "________\n";

					//Get the answer
					cin >> answer;

					//If the user gets the incorrect answer display the result
					if (answer != (num1 * num2))
					{
						answer = num1 * num2;
						cout << "\nThe answer is " << answer << endl;
					}
					else
						cout << "\nExellent!\n";
				}
			}
			//If the user wants to do 4 digit problems
			else if (numOfDigits == 4)
			{
				//Ask if they would like to do the problem with decimal numbers
				cout << "\nWould you like the problem to have decimal numbers? (Y/N) ";
				cin >> decimals;

				//With decimals
				if (decimals == 'Y' || decimals == 'y')
				{
					//Get the value of the first number
					randomNumber = (rand() % FOUR_NUM_PROBLEM_MAX) + FOUR_NUM_PROBLEM_MIN;
					//Assign the first value to num1
					num1 = (double)randomNumber;

					//Get how many decimal places num1 will have
					randomDecimal = (rand() % 4) + 1;

					//Make num1 a decimal
					if (randomDecimal == 4)
						num1 /= 10000.0;
					else if (randomDecimal == 3)
						num1 /= 1000.0;
					else if (randomDecimal == 2)
						num1 /= 100.0;
					else if (randomDecimal == 1)
						num1 /= 10.0;

					//Get the value of the second number
					randomNumber = (rand() % FOUR_NUM_PROBLEM_MAX) + FOUR_NUM_PROBLEM_MIN;
					//Assign the second value to num2
					num2 = (double)randomNumber;

					//Get how many decimal places num2 will have
					randomDecimal = (rand() % 4) + 1;

					//Make num2 a decimal
					if (randomDecimal == 4)
						num2 /= 10000.0;
					else if (randomDecimal == 3)
						num2 /= 1000.0;
					else if (randomDecimal == 2)
						num2 /= 100.0;
					else if (randomDecimal == 1)
						num2 /= 10.0;

					cout << "\nEnter the answer to the following problem.\n\n";

					//Dislay the problem
					cout << setw(8) << num1 << endl
						<< "* " << setw(3) << num2 << endl
						<< "________\n";

					//Get the answer
					cin >> answer;

					//If the user gets the incorrect answer display the result
					if (answer != (num1 * num2))
					{
						answer = num1 * num2;
						cout << "\nThe answer is " << answer << endl;
					}
					else
						cout << "\nExellent!\n";
				}
				//Without decimals
				else
				{
					//Get the value of the first number
					randomNumber = (rand() % FOUR_NUM_PROBLEM_MAX) + FOUR_NUM_PROBLEM_MIN;
					//Assign the first value to num1
					num1 = (double)randomNumber;

					//Get the value of the second number
					randomNumber = (rand() % FOUR_NUM_PROBLEM_MAX) + FOUR_NUM_PROBLEM_MIN;
					//Assign the second value to num2
					num2 = (double)randomNumber;

					cout << "\nEnter the answer to the following problem.\n\n";

					//Dislay the problem
					cout << setw(6) << num1 << endl
						<< "* " << setw(3) << num2 << endl
						<< "________\n";

					//Get the answer
					cin >> answer;

					//If the user gets the incorrect answer display the result
					if (answer != (num1 * num2))
					{
						answer = num1 * num2;
						cout << "\nThe answer is " << answer << endl;
					}
					else
						cout << "\nExellent!\n";
				}
			}
			//If the user chooses a random amount of digits
			else if (numOfDigits == 5)
			{
				//Ask if they would like to do the problem with decimal numbers
				cout << "\nWould you like the problem to have decimal numbers? (Y/N) ";
				cin >> decimals;

				//With decimals
				if (decimals == 'Y' || decimals == 'y')
				{
					//Get the value of the first number
					randomNumber = (rand() % FOUR_NUM_PROBLEM_MAX) + ONE_NUM_PROBLEM_MIN;
					//Assign the first value to num1
					num1 = (double)randomNumber;

					//Get how many decimal places num1 will have
					randomDecimal = (rand() % 4) + 1;

					//Make num1 a decimal
					if (randomDecimal == 4)
						num1 /= 10000.0;
					else if (randomDecimal == 3)
						num1 /= 1000.0;
					else if (randomDecimal == 2)
						num1 /= 100.0;
					else if (randomDecimal == 1)
						num1 /= 10.0;

					//Get the value of the second number
					randomNumber = (rand() % FOUR_NUM_PROBLEM_MAX) + ONE_NUM_PROBLEM_MIN;
					//Assign the second value to num2
					num2 = (double)randomNumber;

					//Get how many decimal places num2 will have
					randomDecimal = (rand() % 4) + 1;

					//Make num2 a decimal
					if (randomDecimal == 4)
						num2 /= 10000.0;
					else if (randomDecimal == 3)
						num2 /= 1000.0;
					else if (randomDecimal == 2)
						num2 /= 100.0;
					else if (randomDecimal == 1)
						num2 /= 10.0;

					cout << "\nEnter the answer to the following problem.\n\n";

					//If the num1 is greater less than 10, it is a single digit number
					if (num1 < 10)
					{
						//Dislay the problem
						cout << setw(5) << num1 << endl
							<< "* " << setw(3) << num2 << endl
							<< "________\n";
					}
					//If the num1 is greater less than 10, it is a two digit number
					else if (num1 < 100)
					{
						//Dislay the problem
						cout << setw(5) << num1 << endl
							<< "* " << setw(3) << num2 << endl
							<< "________\n";
					}
					//If the num1 is greater less than 10, it is a three digit number
					else if (num1 < 1000)
					{
						//Dislay the problem
						cout << setw(7) << num1 << endl
							<< "* " << setw(3) << num2 << endl
							<< "________\n";
					}
					//It is a 4 digit number
					else
					{
						//Dislay the problem
						cout << setw(8) << num1 << endl
							<< "* " << setw(3) << num2 << endl
							<< "________\n";
					}

					//Get the answer
					cin >> answer;

					//If the user gets the incorrect answer display the result
					if (answer != (num1 * num2))
					{
						answer = num1 * num2;
						cout << "\nThe answer is " << answer << endl;
					}
					else
						cout << "\nExellent!\n";
				}
				//Without decimals
				else
				{
					//Get the value of the first number
					randomNumber = (rand() % FOUR_NUM_PROBLEM_MAX) + ONE_NUM_PROBLEM_MIN;
					//Assign the first value to num1
					num1 = (double)randomNumber;

					//Get the value of the second number
					randomNumber = (rand() % FOUR_NUM_PROBLEM_MAX) + ONE_NUM_PROBLEM_MIN;
					//Assign the second value to num2
					num2 = (double)randomNumber;

					cout << "\nEnter the answer to the following problem.\n\n";

					//It is a 4 digit number
					if (num1 > 1000)
					{
						//Dislay the problem
						cout << setw(6) << num1 << endl
							<< "* " << setw(3) << num2 << endl
							<< "________\n";
					}
					else
						//Dislay the problem
						cout << setw(5) << num1 << endl
						<< "* " << setw(3) << num2 << endl
						<< "________\n";


					//Get the answer
					cin >> answer;

					//If the user gets the incorrect answer display the result
					if (answer != (num1 * num2))
					{
						answer = num1 * num2;
						cout << "\nThe answer is " << answer << endl;
					}
					else
						cout << "\nExellent!\n";
				}
			}
			break;


		case 4: //Division option
			cout << "\nDIVISION PROBLEM!\n\n"
				<< "Of how many digits you want your problem to be?\n"
				<< "\tEnter 1 for 1 digit\n"
				<< "\tEnter 2 for 2 digits\n"
				<< "\tEnter 3 for 3 digits\n"
				<< "\tEnter 4 for 4 digits\n"
				<< "\tEnter 5 for a random amount of digits\n"
				<< "\tHow many digits? ";
			cin >> numOfDigits;

			//While the number of digits is less than 0
			while (numOfDigits < 1 || numOfDigits > 5)
			{
				cout << "Enter a number from 1 to 5: ";
				cin >> numOfDigits;
			}


			if (numOfDigits == 1)
			{
				//Get the value of the first number
				randomNumber = (rand() % ONE_NUM_PROBLEM_MAX) + ONE_NUM_PROBLEM_MIN + 1;
				//Assign the first value to num1
				num1 = (double)randomNumber;

				//Get the value of the second number
				randomNumber = (rand() % ONE_NUM_PROBLEM_MAX) + ONE_NUM_PROBLEM_MIN + 1;
				//Assign the second value to num2
				num2 = (double)randomNumber;

				cout << "\nEnter the answer to the following problem.\n\n";

				//Dislay the problem
				cout << setw(2) << num1 << " / " << num2 << endl
					<< "______\n";

				//Get the answer
				cin >> answer;

				//If the user gets the incorrect answer display the result
				if (answer != (num1 / num2))
				{
					answer = num1 / num2;
					cout << "\nThe answer is " << answer << endl;
				}
				else
					cout << "\nExellent!\n";
			}
			//If the user wants to do 2 digit problems
			else if (numOfDigits == 2)
			{
				//Ask if they would like to do the problem with decimal numbers
				cout << "\nWould you like the problem to have decimal numbers? (Y/N) ";
				cin >> decimals;

				//With decimals
				if (decimals == 'Y' || decimals == 'y')
				{
					//Get the value of the first number
					randomNumber = (rand() % TWO_NUM_PROBLEM_MAX) + TWO_NUM_PROBLEM_MIN + 1;
					//Assign the first value to num1
					num1 = (double)randomNumber;

					//Get how many decimal places num1 will have
					randomDecimal = (rand() % 2) + 1;

					//Make num1 a decimal
					if (randomDecimal == 2)
						num1 /= 100.0;
					else if (randomDecimal == 1)
						num1 /= 10.0;

					//Get the value of the second number
					randomNumber = (rand() % TWO_NUM_PROBLEM_MAX) + TWO_NUM_PROBLEM_MIN + 1;
					//Assign the second value to num2
					num2 = (double)randomNumber;

					//Get how many decimal places num2 will have
					randomDecimal = (rand() % 2) + 1;

					//Make num2 a decimal
					if (randomDecimal == 2)
						num2 /= 100.0;
					else if (randomDecimal == 1)
						num2 /= 10.0;

					cout << "\nEnter the answer to the following problem.\n\n";

					//Dislay the problem
					cout << setw(2) << num1 << " / " << num2 << endl
						<< "________\n";

					//Get the answer
					cin >> answer;

					//If the user gets the incorrect answer display the result
					if (answer != (num1 / num2))
					{
						answer = num1 / num2;
						cout << "\nThe answer is " << answer << endl;
					}
					else
						cout << "\nExellent!\n";
				}
				//Without decimals
				else
				{
					//Get the value of the first number
					randomNumber = (rand() % TWO_NUM_PROBLEM_MAX) + TWO_NUM_PROBLEM_MIN + 1;
					//Assign the first value to num1
					num1 = (double)randomNumber;

					//Get the value of the second number
					randomNumber = (rand() % TWO_NUM_PROBLEM_MAX) + TWO_NUM_PROBLEM_MIN + 1;
					//Assign the second value to num2
					num2 = (double)randomNumber;

					cout << "\nEnter the answer to the following problem.\n\n";

					//Dislay the problem
					cout << setw(2) << num1 << " / " << num2 << endl
						<< "_________\n";

					//Get the answer
					cin >> answer;

					//If the user gets the incorrect answer display the result
					if (answer != (num1 / num2))
					{
						answer = num1 / num2;
						cout << "\nThe answer is " << answer << endl;
					}
					else
						cout << "\nExellent!\n";
				}
			}
			//If the user wants to do 3 digit problems
			else if (numOfDigits == 3)
			{
				//Ask if they would like to do the problem with decimal numbers
				cout << "\nWould you like the problem to have decimal numbers? (Y/N) ";
				cin >> decimals;

				//With decimals
				if (decimals == 'Y' || decimals == 'y')
				{
					//Get the value of the first number
					randomNumber = (rand() % THREE_NUM_PROBLEM_MAX) + THREE_NUM_PROBLEM_MIN;
					//Assign the first value to num1
					num1 = (double)randomNumber;

					//Get how many decimal places num1 will have
					randomDecimal = (rand() % 3) + 1;

					//Make num1 a decimal
					if (randomDecimal == 3)
						num1 /= 1000.0;
					else if (randomDecimal == 2)
						num1 /= 100.0;
					else if (randomDecimal == 1)
						num1 /= 10.0;

					//Get the value of the second number
					randomNumber = (rand() % THREE_NUM_PROBLEM_MAX) + THREE_NUM_PROBLEM_MIN;
					//Assign the second value to num2
					num2 = (double)randomNumber;

					//Get how many decimal places num2 will have
					randomDecimal = (rand() % 3) + 1;

					//Make num2 a decimal
					if (randomDecimal == 3)
						num2 /= 1000.0;
					else if (randomDecimal == 2)
						num2 /= 100.0;
					else if (randomDecimal == 1)
						num2 /= 10.0;

					cout << "\nEnter the answer to the following problem.\n\n";

					//Dislay the problem
					cout << setw(2) << num1 << " / " << num2 << endl
						<< "___________\n";

					//Get the answer
					cin >> answer;

					//If the user gets the incorrect answer display the result
					if (answer != (num1 / num2))
					{
						answer = num1 / num2;
						cout << "\nThe answer is " << answer << endl;
					}
					else
						cout << "\nExellent!\n";
				}
				//Without decimals
				else
				{
					//Get the value of the first number
					randomNumber = (rand() % THREE_NUM_PROBLEM_MAX) + THREE_NUM_PROBLEM_MIN;
					//Assign the first value to num1
					num1 = (double)randomNumber;

					//Get the value of the second number
					randomNumber = (rand() % THREE_NUM_PROBLEM_MAX) + THREE_NUM_PROBLEM_MIN;
					//Assign the second value to num2
					num2 = (double)randomNumber;

					cout << "\nEnter the answer to the following problem.\n\n";

					//Dislay the problem
					cout << setw(2) << num1 << " / " << num2 << endl
						<< "___________\n";

					//Get the answer
					cin >> answer;

					//If the user gets the incorrect answer display the result
					if (answer != (num1 / num2))
					{
						answer = num1 / num2;
						cout << "\nThe answer is " << answer << endl;
					}
					else
						cout << "\nExellent!\n";
				}
			}
			//If the user wants to do 4 digit problems
			else if (numOfDigits == 4)
			{
				//Ask if they would like to do the problem with decimal numbers
				cout << "\nWould you like the problem to have decimal numbers? (Y/N) ";
				cin >> decimals;

				//With decimals
				if (decimals == 'Y' || decimals == 'y')
				{
					//Get the value of the first number
					randomNumber = (rand() % FOUR_NUM_PROBLEM_MAX) + FOUR_NUM_PROBLEM_MIN;
					//Assign the first value to num1
					num1 = (double)randomNumber;

					//Get how many decimal places num1 will have
					randomDecimal = (rand() % 4) + 1;

					//Make num1 a decimal
					if (randomDecimal == 4)
						num1 /= 10000.0;
					else if (randomDecimal == 3)
						num1 /= 1000.0;
					else if (randomDecimal == 2)
						num1 /= 100.0;
					else if (randomDecimal == 1)
						num1 /= 10.0;

					//Get the value of the second number
					randomNumber = (rand() % FOUR_NUM_PROBLEM_MAX) + FOUR_NUM_PROBLEM_MIN;
					//Assign the second value to num2
					num2 = (double)randomNumber;

					//Get how many decimal places num2 will have
					randomDecimal = (rand() % 4) + 1;

					//Make num2 a decimal
					if (randomDecimal == 4)
						num2 /= 10000.0;
					else if (randomDecimal == 3)
						num2 /= 1000.0;
					else if (randomDecimal == 2)
						num2 /= 100.0;
					else if (randomDecimal == 1)
						num2 /= 10.0;

					cout << "\nEnter the answer to the following problem.\n\n";

					//Dislay the problem
					cout << setw(2) << num1 << " / " << num2 << endl
						<< "______________\n";

					//Get the answer
					cin >> answer;

					//If the user gets the incorrect answer display the result
					if (answer != (num1 / num2))
					{
						answer = num1 / num2;
						cout << "\nThe answer is " << answer << endl;
					}
					else
						cout << "\nExellent!\n";
				}
				//Without decimals
				else
				{
					//Get the value of the first number
					randomNumber = (rand() % FOUR_NUM_PROBLEM_MAX) + FOUR_NUM_PROBLEM_MIN;
					//Assign the first value to num1
					num1 = (double)randomNumber;

					//Get the value of the second number
					randomNumber = (rand() % FOUR_NUM_PROBLEM_MAX) + FOUR_NUM_PROBLEM_MIN;
					//Assign the second value to num2
					num2 = (double)randomNumber;

					cout << "\nEnter the answer to the following problem.\n\n";

					//Dislay the problem
					cout << setw(2) << num1 << " / " << num2 << endl
						<< "____________\n";

					//Get the answer
					cin >> answer;

					//If the user gets the incorrect answer display the result
					if (answer != (num1 / num2))
					{
						answer = num1 / num2;
						cout << "\nThe answer is " << answer << endl;
					}
					else
						cout << "\nExellent!\n";
				}
			}
			//If the user chooses a random amount of digits
			else if (numOfDigits == 5)
			{
				//Ask if they would like to do the problem with decimal numbers
				cout << "\nWould you like the problem to have decimal numbers? (Y/N) ";
				cin >> decimals;

				//With decimals
				if (decimals == 'Y' || decimals == 'y')
				{
					//Get the value of the first number
					randomNumber = (rand() % FOUR_NUM_PROBLEM_MAX) + ONE_NUM_PROBLEM_MIN;
					//Assign the first value to num1
					num1 = (double)randomNumber;

					//Get how many decimal places num1 will have
					randomDecimal = (rand() % 4) + 1;

					//Make num1 a decimal
					if (randomDecimal == 4)
						num1 /= 10000.0;
					else if (randomDecimal == 3)
						num1 /= 1000.0;
					else if (randomDecimal == 2)
						num1 /= 100.0;
					else if (randomDecimal == 1)
						num1 /= 10.0;

					//Get the value of the second number
					randomNumber = (rand() % FOUR_NUM_PROBLEM_MAX) + ONE_NUM_PROBLEM_MIN;
					//Assign the second value to num2
					num2 = (double)randomNumber;

					//Get how many decimal places num2 will have
					randomDecimal = (rand() % 4) + 1;

					//Make num2 a decimal
					if (randomDecimal == 4)
						num2 /= 10000.0;
					else if (randomDecimal == 3)
						num2 /= 1000.0;
					else if (randomDecimal == 2)
						num2 /= 100.0;
					else if (randomDecimal == 1)
						num2 /= 10.0;

					cout << "\nEnter the answer to the following problem.\n\n";

					//Dislay the problem
					cout << setw(2) << num1 << " / " << num2 << endl
						<< "___________\n";

					//Get the answer
					cin >> answer;

					//If the user gets the incorrect answer display the result
					if (answer != (num1 / num2))
					{
						answer = num1 / num2;
						cout << "\nThe answer is " << answer << endl;
					}
					else
						cout << "\nExellent!\n";
				}
				//Without decimals
				else
				{
					//Get the value of the first number
					randomNumber = (rand() % FOUR_NUM_PROBLEM_MAX) + ONE_NUM_PROBLEM_MIN;
					//Assign the first value to num1
					num1 = (double)randomNumber;

					//Get the value of the second number
					randomNumber = (rand() % FOUR_NUM_PROBLEM_MAX) + ONE_NUM_PROBLEM_MIN;
					//Assign the second value to num2
					num2 = (double)randomNumber;

					cout << "\nEnter the answer to the following problem.\n\n";


					//Dislay the problem
					cout << setw(2) << num1 << " / " << num2 << endl
						<< "___________\n";


					//Get the answer
					cin >> answer;

					//If the user gets the incorrect answer display the result
					if (answer != (num1 / num2))
					{
						answer = num1 / num2;
						cout << "\nThe answer is " << answer << endl;
					}
					else
						cout << "\nExellent!\n";
				}
			}
			break;
		}//End switch



		cin.ignore();
		cin.clear();

		//Ask the user if they want to continue
		cout << "\nWant to continue? (Y/N) ";
		cin >> done;

		//If the user whats to quit the program
		if (done == 'n' || done == 'N')
			isDone = true;

		cout << endl;

		//While isDone is false, keep looping
	} while (isDone == false);

	system("pause");
	return 0;
}

/////////////OUTPUT///////////

/*
What type of problem you woud like to do?
		Enter 1 for Addition
		Enter 2 for Subtraction
		Enter 3 for Multiplication
		Enter 4 for Division
		Type of problem: 1

ADDITION PROBLEM!

Of how many digits you want your problem to be?
		Enter 1 for 1 digit
		Enter 2 for 2 digits
		Enter 3 for 3 digits
		Enter 4 for 4 digits
		Enter 5 for a random amount of digits
		How many digits? 2

Would you like the problem to have decimal numbers? (Y/N) y

Enter the answer to the following problem.

 0.82
+ 1.8
_______
2.62

Exellent!

Want to continue? (Y/N) y

What type of problem you woud like to do?
		Enter 1 for Addition
		Enter 2 for Subtraction
		Enter 3 for Multiplication
		Enter 4 for Division
		Type of problem: 2

SUBTRACTION PROBLEM!

Of how many digits you want your problem to be?
		Enter 1 for 1 digit
		Enter 2 for 2 digits
		Enter 3 for 3 digits
		Enter 4 for 4 digits
		Enter 5 for a random amount of digits
		How many digits? 1

Enter the answer to the following problem.

	3
-   3
______
100

The answer is 0

Want to continue? (Y/N) y

What type of problem you woud like to do?
		Enter 1 for Addition
		Enter 2 for Subtraction
		Enter 3 for Multiplication
		Enter 4 for Division
		Type of problem: 3

MULTIPLICATION PROBLEM!

Of how many digits you want your problem to be?
		Enter 1 for 1 digit
		Enter 2 for 2 digits
		Enter 3 for 3 digits
		Enter 4 for 4 digits
		Enter 5 for a random amount of digits
		How many digits? 2

Would you like the problem to have decimal numbers? (Y/N) y

Enter the answer to the following problem.

 10.8
* 8.2
_______
88.56

Exellent!

Want to continue? (Y/N) y

What type of problem you woud like to do?
		Enter 1 for Addition
		Enter 2 for Subtraction
		Enter 3 for Multiplication
		Enter 4 for Division
		Type of problem: 4

DIVISION PROBLEM!

Of how many digits you want your problem to be?
		Enter 1 for 1 digit
		Enter 2 for 2 digits
		Enter 3 for 3 digits
		Enter 4 for 4 digits
		Enter 5 for a random amount of digits
		How many digits? 2

Would you like the problem to have decimal numbers? (Y/N) n

Enter the answer to the following problem.

90 / 77
_________
12345

The answer is 1.16883

Want to continue? (Y/N) n

Press any key to continue . . .
*/
