/********************************************************************************************
* Cyborg Data Type Sizes:																	*
* 																							*
* You have been given a job as a programmer on a Cyborg supercomputer. In order to			*
* accomplish some calculations, you need to know how many bytes the following data			*
* types use: char , int , float , and double . You do not have any manuals, so you can’t	*
* look this information up. Write a C++ program that will determine the amount of			*
* memory used by these types and display the information on the screen.						*
********************************************************************************************/
#include <iostream>
using namespace std;

int main()
{
	cout << "Data of type char has " << sizeof(char) << " byte.\n"
		<< "Data of type int has " << sizeof(int) << " bytes.\n"
		<< "Data of type float has " << sizeof(float) << " bytes.\n"
		<< "Data of type double has " << sizeof(double) << " bytes.\n\n";

	system("pause");
	return 0;
}


/////////////OUTPUT///////////

/*
Data of type char has 1 byte.
Data of type int has 4 bytes.
Data of type float has 4 bytes.
Data of type double has 8 bytes.

Press any key to continue . . .
*/