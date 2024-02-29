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
  * Assignment #4: Assessing Recursion Performance
  * ____________________________________________________________________________
  *
  * 	This program will calculate a factorial of a number input by the user, or
  * 		calculate the Fibonacci series of a given amount of numbers.This program
  * 		will have two sets of calculations for the factorial and fibonacci. One
  * 		will be a recursive function while the other will be iterative. The
  * 		program will be able to compare the amount of time for each process
  * 		and display it to console.
  * ____________________________________________________________________________
  *
  * 	INPUT:
  * 		selection: Menu selection
  * 		num      : Number to calculate factorial or Fibonacci series
  *
  * 	OUTPUT:
  * 		num      : Number to calculate factorial or Fibonacci series
  *
  ******************************************************************************/
int main()
{
	/***************************************************************************
	 * CONSTANTS
	 *--------------------------------------------------------------------------
	 * 	FAC_PROMPT: Input prompt for factorial functions
	 * 	FIB_PROMPT: Input prompt for Fibonacci functions
	 **************************************************************************/
	const string FAC_PROMPT = "Enter a number to calculate the factorial: ";
	const string FIB_PROMPT = "Enter a number of digits in the Fibonacci Series: ";

	int index;					//CALC & CALC - Index for Fibonacci recursive
	//				function
	int selection;				//IN   & CALC - User's menu selection
	int num;					//IN   & OUT  - Number to calculate factorial or
	//				Fibonacci series
	int n;						//CALC & CALC - Counter for FOR loops to track
	//				time
	long long factorial;		//CALC & CALC - The factorial of the number input
	ostringstream   fibSeries;  //CALC & CALC - Stores the Fbonacci sequence
	high_resolution_clock::time_point t1;	//CALC & CALC - Timer start
	high_resolution_clock::time_point t2;	//CALC & CALC - Timer end

//	PrintHeaderOstream(cout, "Assessing Recursion Performance", 4, 'A');

	selection = Menu();
	while (selection != 0)
	{
		if (selection == 1)
		{
			num = GetAndCheckInt(FAC_PROMPT, 5, 15);
			cout << "The factorial of " << num << " is "
				<< FactorialRecursive(num) << endl;
			cout << endl << endl;
		}
		else if (selection == 2)
		{
			index = 0;
			num = GetAndCheckInt(FIB_PROMPT, 10, 25);
			cout << "The Fibonacci Sequence of " << num << " is:\n";
			while (index <= num)
			{
				cout << FibonacciRecusive(index);
				if (index == num)
				{
					cout << ".\n";
				}
				else
				{
					cout << ", ";
				}
				index++;
			}
			cout << endl << endl;
		}
		else if (selection == 3)
		{
			num = GetAndCheckInt(FAC_PROMPT, 5, 15);

			t1 = high_resolution_clock::now();
			for (n = 0; n < 100000; n++)
			{
				factorial = FactorialRecursive(num);
			}

			t2 = high_resolution_clock::now();

			auto recurRecDuration = duration_cast<nanoseconds>(t2 - t1).count();

			cout << "It took recursive factorial of " << num << ":\n"
				<< recurRecDuration
				<< " nanoseconds to execute 100000 times.\n\n";

			t1 = high_resolution_clock::now();

			for (n = 0; n < 100000; n++)
			{
				factorial = FactorialIteration(num);
			}

			t2 = high_resolution_clock::now();

			auto iterRecDuration = duration_cast<nanoseconds>(t2 - t1).count();

			cout << "It took iterative factorial of " << num << ":\n"
				<< iterRecDuration
				<< " nanoseconds to execute 100000 times.\n";
			cout << endl << endl;
		}
		else
		{
			num = GetAndCheckInt(FIB_PROMPT, 10, 50);

			t1 = high_resolution_clock::now();
			for (n = 0; n < 1000; n++)
			{
				index = 0;
				while (index <= num)
				{
					fibSeries << FibonacciRecusive(index);

					index++;
				}
			}
			t2 = high_resolution_clock::now();
			auto recurFibDuration = duration_cast<nanoseconds>(t2 - t1).count();

			cout << "It took the recursive Fibonacci Series of " << num << ":\n"
				<< recurFibDuration
				<< " nanoseconds to execute 1000 times.\n\n";
			fibSeries.str("");

			t1 = high_resolution_clock::now();
			for (n = 0; n < 1000; n++)
			{
				fibSeries << FibonacciIterative(num);
			}

			t2 = high_resolution_clock::now();

			auto iterFibDuration = duration_cast<nanoseconds>(t2 - t1).count();

			cout << "It took the iterative Fibonacci Series of " << num << ":\n"
				<< iterFibDuration
				<< " nanoseconds to execute 1000 times.\n";
			cout << endl << endl;
			fibSeries.str("");
		}

		selection = Menu();
	}
	return 0;
}


