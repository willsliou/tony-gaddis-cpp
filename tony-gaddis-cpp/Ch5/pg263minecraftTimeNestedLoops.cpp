#include <iostream>
#include <iomanip> // setw, setprecision, fixed, showpoint
#include <cstdlib> //rand and srand
#include <ctime> // time function
#include <cmath>
using namespace std;

// NESTED LOOPS pg 263
// how minecraft time was made
    // first outer loop executes, then inner loop. inner loop conditions false, then outer loop  
    for (int hours=0; hours<24;hours++) {
        
        for (int minutes=0; minutes<60; minutes ++) {

            for (int seconds = 0; seconds < 60; seconds++)
                {
                cout << setw(2) << minutes<< ":";
                cout << setw(2) << seconds << endl;
                }

            }
    }
