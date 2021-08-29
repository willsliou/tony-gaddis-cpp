// Postfix vs Prefix Implemented
// general idea: if you have ++var, do the incrementation first

// lvalue = left value, contents can be changed
// rvalue = right value, 
// during assignment the operand takes rvalue and puts it in place of lvalue
// initialization - assign values to variables

#include <iostream>
using namespace std;
int main() {
    // int x = 10;
    // if (x++ > 10) // ++x
    //     cout << "x has incremented first";
    // else 
    // cout << "nafam";

    // int x,y;
    // x = 2; // x is 2
    // y = 4 * x++; 
    // // cout << x++ << --y << endl;
    // cout << x << y;
    // y = ++x; // y is 2, x is 3

    // cout << x << " " << y; // 3 2

    // x = 0;
    // if (++x) 
    //     cout << "yeah";
    // else 
    //     cout << "nah";
    int number = 0;
    while (number < 5)  // pretest loop

    //no braces -- exectues the first line
    {
        cout << number;

    }
}
