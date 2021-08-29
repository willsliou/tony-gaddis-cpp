// Postfix vs Prefix Implemented
// general idea: if you have ++var, do the incrementation first

// lvalue = left value, contents can be changed
// rvalue = right value, 
// during assignment the operand takes rvalue and puts it in place of lvalue
// initialization - assign values to variables

#include <iostream>
using namespace std;
int main() {
    // // PROGRAM 1 ============================ 

    // int a=2; 
    // int b=5; 
    // int c;

    // c = a * b++; 
    // /* Steps taken
    //     1. a is 2
    //     2. b is 5
    //     3. multiply a (2) by b (5)
    //     4. assign 10 to c
    //     5. increment b (6)
    // */
    int a=2; 
    int b=5; 
    int c;
    c = a * ++b;
     /*    Steps taken
        1. a = 2
        2. b = 5
        3. b is incremented, b is now 6 // DIFFERENCE HAPPENS HERE
        4. multiply a (2) by b (6)
        5. assign value 12 to c
    */    
    
//   int *p=nullptr;

}
