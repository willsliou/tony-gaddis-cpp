// Postfix vs Prefix Implemented

#include <iostream>
using namespace std;
int main() {
    int preFix = 1, y;
    y = ++preFix; // increments then sends value to cout
    cout << y << endl; // 2
    // Steps taken
    // 1. first increment
    // 2. assignment to x
    
    
    int postFix = 1, x; 
    x = postFix++; // 
    // Steps taken
    // 1. assignment to x
    // 2. increment then sends to cout
    cout << x << endl; // 1


//   int *p=nullptr;
}
