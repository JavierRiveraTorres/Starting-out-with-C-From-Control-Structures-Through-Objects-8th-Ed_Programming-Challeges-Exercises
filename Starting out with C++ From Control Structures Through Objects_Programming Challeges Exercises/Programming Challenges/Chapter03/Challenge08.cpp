/**************************************************************************************
* How Many Widgets?																	  *
* 																					  *
* The Yukon Widget Company manufactures widgets that weight 12.5 pounds each.		  *
* Write a program that calculates how many widgets are stacked on a pallet, based on  *
* the total weight of the pallet. 													  *
*																					  *
* The program should ask the user how much the pallet weights by itself and with the  *
* widgets stacked on it. It should then calculate and display the number of widgets   *
* stacked on the pallet.															  *
**************************************************************************************/
#include <iostream>
using namespace std;

int main()
{

	//Constant
	const double WIDGET_WEIGHT = 12.5; //How much weight each widget
	const double PALLET_WEIGHT = 25.0;

	//Variables
	double palletWithWidgets = 0.0; //How much weights the pallet with the widgets
	int howManyWidgets = 0; //Gets how many widgets are in a pallet

	//ASk how much the pallet weights
	cout << "How much the pallet weights? ";
	cin >> palletWithWidgets;

	//While the weight of the pallet is less than 3 pounds
	while (palletWithWidgets < PALLET_WEIGHT)
	{
		cout << "Enter a weight greater than " << PALLET_WEIGHT + WIDGET_WEIGHT << " pounds "
			<< "or, " << PALLET_WEIGHT << " pounds for a pallet with no widgets.\n"
			<< "Pallet weight: ";
		cin >> palletWithWidgets;
	}

	//Calculate how many widgets the pallet has
	howManyWidgets = (palletWithWidgets - PALLET_WEIGHT) / WIDGET_WEIGHT ;

	//Output
	cout << "\nThere is approximately " << howManyWidgets << " widgets in the pallet.\n\n";

	system("pause");
	return 0;
}

/////////////OUTPUT///////////

/*
How much the pallet weights? 600

There is approximately 46 widgets in the pallet.

Press any key to continue . . .

*/