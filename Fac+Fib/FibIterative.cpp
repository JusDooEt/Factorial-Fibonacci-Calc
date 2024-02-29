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
  *  FUNCTION FibonacciIterative
  * ----------------------------------------------------------------------------
  *	This function uses iteration to calculate the Fibonacci series of the
  *		provided number
  *
  *		==> Returns the series in the form of a string
  * ----------------------------------------------------------------------------
  * PRE-CONDITIONS
  * 		num: Must be a defined number
  *
  * 	POST-CONDITIONS
  * 		This function will return the Fibonacci series
  *
  ******************************************************************************/
string FibonacciIterative(int num)	//IN - Number to calculate Fibonacci series
{
	const int size = num + 1;
	vector<int> intAr = { 0 };	//CALC - Array of Fibonacci series
	int i;						//CALC - Index for loops and array
	ostringstream output;		//OUT  - Stores the created series

	output.str("");
	i = 0;
	for (i = 0; i <= num; i++)
	{
		if (i == 0 || i == 1)
		{
			intAr.push_back(i);
			output << intAr[i];
		}
		else
		{
			intAr.push_back(intAr[i - 1] + intAr[i - 2]);
			output << intAr[i];
		}

		if (i == num)
		{
			output << ".\n";
		}
		else
		{
			output << ", ";
		}
	}
	return output.str();
}


