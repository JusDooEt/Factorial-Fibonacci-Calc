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
  *  FUNCTION FactorialIteration
  * ----------------------------------------------------------------------------
  *	This function uses iteration to calculate the factorial of a provided
  *		number.
  *
  *		==> Returns the factorial
  * ----------------------------------------------------------------------------
  * PRE-CONDITIONS
  * 		n: Must be a defined number
  *
  * 	POST-CONDITIONS
  * 		This function will return the calculated factorial.
  *
  ******************************************************************************/
long long FactorialIteration(long long n) //IN - Number to calculate factorial
{
	long long factorial;	//OUT - The calculated factorial

	factorial = n;
	if (n > 1)
	{
		while (n > 1)
		{
			factorial *= --n;
		}
	}
	else
	{
		factorial = 1;
	}
	return factorial;
}

