//#pragma once
/*******************************************************************************
 * AUTHOR        : Cameron Abo
 * STUDENT ID    : 387130
 * Assignment #4 : Assessing Recursion Performance
 * CLASS         : CS1B
 * SECTION       : MW: 7:30p
 * DUE DATE      : 5/1/23
 ******************************************************************************/

#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<string>
#include<chrono>
#include<ctime>
#include<limits>
#include<ios>
#include<sstream>
#include<vector>
using namespace std;
using namespace std::chrono; // using namespace std::chrono

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
long long FactorialRecursive(long long num); //IN - Num to calculate factorial


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
long long FactorialIteration(long long n); //IN - Number to calculate factorial


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
string FibonacciIterative(int num);	//IN - Number to calculate Fibonacci series


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
int FibonacciRecusive(int num);	//IN - Number to calculate Fibonacci series


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
int Menu();

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
	int max);		  //IN - Max integer range


/*******************************************************************************
 * FUNCTION PrintHeaderOstream
 * _____________________________________________________________________________
 * This function receives an cout or file output variable assignment name, type,
 * 		and number and outputs a student header with the student's information.
 *
 * 		==> returns nothing
 * _____________________________________________________________________________
 * 	PRE-CONDITIONS
 * 		output: Output needs to be previously defined
 * 		asName: Assignment name needs to be previously defined
 * 		asNum : Assignment number has to be previously defined
 * 		asType: Assignment type has to be previously defined
 *
 * 	POST-CONDITIONS
 * 		This function will output a class heading
 *
 ******************************************************************************/
//void PrintHeaderOstream(ostream& output,  //IN  - outputs using cout or ofstream
//	string asName,	  //IN  - Programmer name
//	int    asNum,  	  //IN  - Assignment Number
//	char   asType);	  //IN  - Assignment type
/* HEADER_A4_H_ */
