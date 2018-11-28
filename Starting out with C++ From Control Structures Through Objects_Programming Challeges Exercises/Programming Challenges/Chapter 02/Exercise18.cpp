/********************************************************************************************
* Energy Drink Consumption:																	*
* 																							*
* A soft drink company recently surveyed 16,500 of its customers and found that				*
* approximately 15 percent of those surveyed purchase one or more energy drinks per			*
* week. Of those customers who purchase energy drinks, approximately 58 percent of			*
* them prefer citrus-flavored energy drinks. 											    *
*																							*
* Write a program that displays the following:												*
* 																							*
* • The approximate number of customers in the survey who purchase one or more				*
*   energy drinks per week																	*
* 																							*
* • The approximate number of customers in the survey who prefer citrus-flavored energy		*
*   drinks																					*
********************************************************************************************/
#include <iostream>
using namespace std;

int main()
{
	//Constants
	const int NUM_OF_PEOPLE = 16500; //Number of people surveyed
	const double ONE_DRINK_PER_WEEK = 0.15; //Percentage of people surveyed that buys one drink per week
	const double PREFER_CITRUS = 0.58; //Percentage of the people surveyed that prefer citrus energy drinks

	//Variable
	double buysOneDrinkPerWeek = 0.0; //Gets how many of the surveyed people buys one drink per week
	double prcntThatPreferCitrus = 0.0; //Gets how many of the surveyed people prefer citrus energy drinks

	//Get how the amount of people that, at least, drinks one energy drink per week
	buysOneDrinkPerWeek = NUM_OF_PEOPLE * ONE_DRINK_PER_WEEK;
	//Get the percentage of the people surveyed that prefer citrus drinks
	prcntThatPreferCitrus = ONE_DRINK_PER_WEEK * PREFER_CITRUS;

	//Display the results
	cout << "Of the " << NUM_OF_PEOPLE << " people in the survey, approximately " << buysOneDrinkPerWeek <<
		" purchase\nenergy drinks once a week.\n\n";
	cout << "Of the people that purchase energy drinks, approximately " << prcntThatPreferCitrus * 100 <<
		"%\nprefer citrus-flavored drinks.\n\n";

	system("pause");
	return 0;
}


/////////////OUTPUT///////////

/*
Of the 16500 people in the survey, approximately 2475 purchase
energy drinks once a week.

Of the people that purchase energy drinks, approximately 8.7%
prefer citrus-flavored drinks.

Press any key to continue . . .
*/