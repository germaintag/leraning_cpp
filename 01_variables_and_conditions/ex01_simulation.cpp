/*
Description: Variable assignment simulation
*/

#include <iostream>
using namespace std;

int main() {
    // 1. Declaration of real variables (floats)
    float x;
    float y;

    // 2. Sequence of instructions
    x = 6;         // Line 1: x takes the value 6
    y = x * 2;     // Line 2: y takes the value 6 * 2 = 12
    x = x / 2;     // Line 3: x takes the value 6 / 2 = 3
    y = x + x;     // Line 4: y takes the value 3 + 3 = 6

    // 3. Displaying the final result
    cout << "y = " << y << endl;

}