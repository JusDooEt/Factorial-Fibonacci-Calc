# Factorial + Fibonacci Calculator and Performance Test

## Summary
This program will calculate a factorial of a number input by the user, or
calculate the Fibonacci series of a given amount of numbers. This program
will have two sets of calculations for the factorial and fibonacci. One
will be a recursive function while the other will be iterative. The
program will be able to compare the amount of time for each process
and display it to console.

## Functions
### Factorial
This program has a recussive and iterative function to calulate a factorial of a number input by the user. 
If a user selects from an output menu to calulate a factorial then the recursive function will be called by
main and the returned calculation will be output to main. Otherwise, if a user chooses to test the performance
between recusion and iteration, main will call both factorial functions and use the ctime library to time each
function in milliseconds. The time for both functions will be output to the console with a description to make 
the output more legible to the user.

### Fibonacci
The program also consisted of a recursive and iterative function to create a Fibonacci sequence with the length
of the user input integer and will store the sequence in a string using ostringstream that is then returned to main.
If the user chooses to output the fibonacci sequence then the recursive function will be called and the result will
be output to the console. Otherwise, if the use decided to test the functions, the same method to test and output 
the results of the factorial functions, as described above, will be used.

### GetAndCheckInt
This function is used to verify all user inputs. It will check if the input is an integer and if it is in the range
given in the function arguments when called in main. If the user's input is not of an integer data type then a 
message will be output intruction the user to enter an integer. If the correct data type is input but is out of
the range described in the parameters, then an error message will be output intruction the user to enter an integer
within the range given in the function call.

### Menu
This function outputs a menu to the console allowing the user to choose between four options. The function will then
verify the user's input and return the input back to main if verified.

## Conclusion
Testing the execution times of recursion vs iteration results in a consistently lower time for iterative functions.
While recursion is useful for more complicated tasks or calulations, it is more time effecient to use an iterative
solution if it is possible to implement for the task or calulation. Also, more memory will be used for recursive 
functions do to the incrementing amount of stack frames everytime the function calls upon itself recurisvely. This
makes iterative functions definitvely more efficient with time and memory.
