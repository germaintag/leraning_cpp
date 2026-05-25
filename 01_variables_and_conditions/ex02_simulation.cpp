/*
Description: Swapping the values of two variables using a temporary variable storage
*/
#include <iostream>
using namespace std;

int main() {
    //Declaration of variables
    int x;
    int y;

    //Sequence of instructions
    cout << "Enter x: ";
    cin >> x;
    cout << "Enter y: ";
    cin >> y;
    x = y;
    y = x;

    // Displaying the final result
    cout << "The value of x: " << x << endl;
    cout << "The value of y: " << y << endl;

}
/* ------------------------------------------------------------------------------------------------
   Question 2: Observations and Solutions for 2-Variable Swapping
   - What is observed?
     When executing "x = y" followed by "y = x", we observe that the original
     value of "x" is completely overwritten (lost) during the first step.
     As a result, both variables end up holding the initial value of "y".

   - What needs to be changed/added?
     We need to add a third variable, acting as a temporary "safe box" (usually
     named "temp"). This variable saves the initial value of "x" before it gets
     overwritten, allowing us to safely assign it to 'y' at the end.
*/

/* ------------------------------------------------------------------------------------------------
   Question 3: Circular Permutation of 3 Variables (x, y, z)
   Goal: Shift values so that x -> y, y -> z, and z -> x.

   How to proceed:
   We can still do this using only one  single temporary variable ("temp").
   1. Save the first variable: temp = x; (now "x" can be overwritten safely)
   2. Shift the other variables backwards:
      x = y; (x takes y's value)
      y = z; (y takes z's value)
   3. Put the saved value back: z = temp; (z takes the old x's value)
*/
/*------------------------------------------------------------------------------------------------
   Question 4: Circular Permutation of 'n' Variables
   Logic: To shift "n" variables, we only need ONE single "temp" variable.

   Chain reaction steps:
   1. temp = x1;     // Store the 1st variable (1 temp box)
   2. x1 = x2;       // Shift all other values one by one
      x2 = x3;       // No extra variables needed here!
      ...
      xn-1 = xn;
   3. xn = temp;     // Put the 1st variable at the end
*/
