/*******************************************************************************
 * AUTHOR        : Cameron Abo
 * STUDENT ID    : 387130
 * Assignment #4 : Assessing Recursion Performance
 * CLASS         : CS1B
 * SECTION       : MW: 7:30p
 * DUE DATE      : 5/1/23
 ******************************************************************************/
#include "Header.h"

 /*******************************************************************************
  * FUNCTION Menu
  * _____________________________________________________________________________
  * This function receives nothing. This function will output a menu to the
  * 		console to show the user their options.
  *
  * 		Ex.
  *
  * 		STACK MENU:
  *
  * 		1 - Calculate and Display Factorial of a Number
  * 		2 - Calculate and Display Fibonacci Series of a Number
  * 		3 - Compare Performance for Factorial Implementations
  * 		4 - Compare Performance for Fibonacci Series Implementations
  * 		0 - to Exit
  *
  * 		==> returns a menu selection
  * _____________________________________________________________________________
  * 	PRE-CONDITIONS
  * 		none
  *
  * 	POST-CONDITIONS
  * 		This function will display a menu to console and return a selection
  *
  ******************************************************************************/
int Menu()
{
	int num;					 //OUT  - Integer input by user
	bool valid = false;			 //CALC - Valid integer
	ostringstream outLine;		 //OUT  - Line of output for invalid input
	ostringstream invalidOutput; //OUT  - Line of output for invalid input

	do
	{
		cout << "MENU OPTIONS\n\n";
		cout << 1 << " - Calculate and Display Factorial of a Number\n";
		cout << 2 << " - Calculate and Display Fibonacci Series of a Number\n";
		cout << 3 << " - Compare Performance for Factorial Implementations\n";
		cout << 4 << " - Compare Performance for Fibonacci Series "
			<< "Implementations\n";
		cout << 0 << " - EXIT\n";
		cout << "Enter an option (0 to exit): ";

		if (!(cin >> num))
		{
			cout << "\n**** Please enter a NUMBER between "
				<< 0 << " and " << 4 << " ****\n\n\n";
			cin.clear();

			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
		else if (num < 0 || num > 4)
		{
			invalidOutput << "\n**** The number " << num
				<< " is an invalid entry";
			outLine << "**** Please enter a number between "
				<< 0 << " and " << 4;
			cout << left << setw(outLine.str().length() + 1)
				<< invalidOutput.str() << " ****\n";
			cout << outLine.str() << " ****\n\n\n";

			cout << right;
			invalidOutput.str("");
			outLine.str("");
		}
		else
		{
			valid = true;
		}
	} while (!valid);
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cout << endl;
	return num;
}


