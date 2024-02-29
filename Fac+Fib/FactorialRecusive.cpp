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
  *  FUNCTION FactorialRecursive
  * ----------------------------------------------------------------------------
  *	This function uses recursion to calculate the factorial of a provided
  *		number.
  *
  *		==> Returns the factorial
  * ----------------------------------------------------------------------------
  * PRE-CONDITIONS
  * 		num: Must be a defined number
  *
  * 	POST-CONDITIONS
  * 		This function will return the calculated factorial.
  *
  ******************************************************************************/
long long FactorialRecursive(long long num) //IN - Number to calculate factorial
{
	if (num > 0)
	{
		return num * FactorialRecursive(num - 1);
	}
	else
	{
		return 1;
	}
}
