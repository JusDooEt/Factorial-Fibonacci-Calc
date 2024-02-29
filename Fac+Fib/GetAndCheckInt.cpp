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
 * FUNCTION GetAndCheckInt
 * ______________________________________________________________________________
 *
 * This function receives a string representing a prompt and two integers
 * 	representing a minimum and maximum range of a valid integer. The functions
 * 	then prompts the user and determines if an input is a valid integer and
 * 	within range of the min and max.
 *
 * RETURNS:
 *	--> A valid integer
 *______________________________________________________________________________
 *	PRE-CONDITIONS:
 *		prompt: must be previously defined
 *		min   : must be an integer value
 *		max   : must be an integer value
 *
 *	POST-CONDTIONS:
 *		returns a valid integer to main
 *******************************************************************************/
int GetAndCheckInt(string prompt, //IN - Prompt output
	int min,		  //IN - Min integer range
	int max)		  //IN - Max integer range
{
	int num;					//OUT  - Integer input by user
	bool valid = false;			//CALC - Valid integer
	ostringstream outLine;		//OUT  - Formatted output
	ostringstream invalidOutput;//OUT  - Formatted output

	do
	{
		cout << prompt;
		if (!(cin >> num))
		{
			cout << "\n**** Please enter a NUMBER between "
				<< min << " and " << max << " ****\n\n\n";
			cin.clear();

			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
		else if (num < min || num > max)
		{
			invalidOutput << "\n**** The number " << num
				<< " is an invalid entry";
			outLine << "**** Please enter a number between "
				<< min << " and " << max;
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
	return num;
}


