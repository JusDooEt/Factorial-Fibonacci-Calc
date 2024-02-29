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
  *  FUNCTION FibonacciRecusive
  * ----------------------------------------------------------------------------
  *	This function uses recursion to calculate the Fibonacci series of the
  *		provided number
  *
  *		==> Returns each number of the series as an int
  * ----------------------------------------------------------------------------
  * PRE-CONDITIONS
  * 		num: Must be a defined number
  * 		must be used in a while loop in main
  *
  * 	POST-CONDITIONS
  * 		This function will return each number in the Fibonacci series
  *
  ******************************************************************************/
int FibonacciRecusive(int num)	//IN - Number to calculate Fibonacci series
{
	if (num == 0 || num == 1)
	{
		return num;
	}
	else
	{
		return FibonacciRecusive(num - 1) + FibonacciRecusive(num - 2);
	}

}


