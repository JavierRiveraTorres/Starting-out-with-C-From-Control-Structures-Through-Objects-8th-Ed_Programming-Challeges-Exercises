/**************************************************************************************
* Automobile Costs:																	  *
* 																					  *
* Write a program that asks the user to enter the monthly costs for the 			  *
* following expenses incurred from operating his or her automobile: 				  *
* 																					  *
* 	loan payment 																	  *
* 	insurance 																		  *
* 	gas																				  *
* 	oil 																			  *
* 	tires																			  *
* 	maintenance 																	  *
* 																					  *
* The program should then display the total monthly cost of these expenses, and 	  *
* the total annual cost of these expenses.											  *
**************************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//Variables
	double loanPayment = 0.0; //Gets the monthly loan payment
	double insurance = 0.0; //Gets the monthly insurance payment
	double gas = 0.0; //Gets the monthly cost of gas
	double oil = 0.0; //Gets the monthly cost of oil
	double tires = 0.0; //Gets the monthly cost of tires
	double maintenance = 0.0; //Gets the monthly cost of maintenance
	double monthlyCost = 0.0; //Gets the monthly cost of all the expenses
	double annualCost = 0.0; //Gets the annual cost of the monthly expenses 

	//Ask how much they pay for the car loan
	cout << "Enter the monthly cost of the car loan: $";
	cin >> loanPayment;

	//While the vehicule's loan payment is less than 0
	while (loanPayment < 0.0)
	{
		cout << "Enter a positive number.\n"
		<< "Loan payment: $";
		cin >> loanPayment;
	}

	//Ask how much they pay monthly for insurance
	cout << "Enter the monthly cost of the car insurance: $";
	cin >> insurance;

	//While the cost of insurance is less than 0
	while (insurance < 0.0)
	{
		cout << "Enter a positive number.\n"
			<< "Monthly insurance payment: $";
		cin >> insurance;
	}

	//Ask how much they spend monthly on gas
	cout << "Enter the monthly cost of gas: $";
	cin >> gas;

	//While the cost of gas is less than 0
	while (gas < 0.0)
	{
		cout << "Enter a positive number.\n"
			<< "Monthly cost of gas: $";
		cin >> gas;
	}

	//Ask how much they spend monthly on car oil
	cout << "Enter the monthly cost of oil: $";
	cin >> oil;

	//While the cost of oil is less than 0
	while (oil < 0.0)
	{
		cout << "Enter a positive number.\n"
			<< "Monthly cost of oil: $";
		cin >> oil;
	}

	//Ask how much they spend on the vehicule's tires
	cout << "Enter the monthly cost of vehicule's tires: $";
	cin >> tires;

	//While the cost of tires is less than 0
	while (tires < 0.0)
	{
		cout << "Enter a positive number.\n"
			<< "Monthly cost of tires: $";
		cin >> tires;
	}

	//Ask how much they spend monthly in vehicule maintenance
	cout << "Enter the monthly cost of vehicule's maintenance: ";
	cin >> maintenance;

	
	//While the cost of maintenance is less than 0
	while (maintenance < 0.0)
	{
		cout << "Enter a positive number.\n"
			<< "Monthly cost of maintenance: $";
		cin >> maintenance;
	}


	//Calculate how much is the monthly cost of the expenses
	monthlyCost = loanPayment + insurance + gas + oil + tires + maintenance;
	//Calculate how much is the annual cost of the expenses
	annualCost = monthlyCost * 12.0;

	//Display the total monthly and annual cost of the vehicule related expenses
	cout << fixed << showpoint << setprecision(2) << endl
		<< "\nThe vehicule monthly expenses is $" << monthlyCost << endl
		<< "The vehicule annual expenses is $" << annualCost << "\n\n";


	system("pause");
	return 0;
}

/////////////OUTPUT///////////

/*
Enter the monthly cost of the car loan: $375.06
Enter the monthly cost of the car insurance: $111.11
Enter the monthly cost of gas: $55.55
Enter the monthly cost of oil: $7.77
Enter the monthly cost of vehicule's tires: $50.00
Enter the monthly cost of vehicule's maintenance: 50.00


The vehicule monthly expenses is $649.49
The vehicule annual expenses is $7793.88

Press any key to continue . . .

*/