#include <iostream>
#include <iomanip> // setw, setprecision, fixed, showpoint
#include <cstdlib> //rand and srand
#include <ctime> // time function
#include <cmath>
using namespace std;
// sentinel value: indicates end of data/inputs
// key ideas
// != --> usually true for all values sxcept when == 
// example --> if (choice != QUIT_CHOICE
// choice == QUIT_CHOICE, then it is false; all other cases will be true

// while loops are good for continous value validation; pre-test loop (good use case: validating input that has been read and reading lists of data terminated by a sentinel value.)
// do while loops - posttest loop (good use case: repeating a menu)
// for loops are good for performing known number of iterations (good use case: when exact number of iterations are known) (pg 261)

// two types of loops 1. count controlled (for loops) 2. conditional loops (while, do while)

/* when to use for-loops over while/do-while -- for-loop packages it all into one line
1. need to initialize
2. uses false condition to stop the loop?
3. update 

for(initialization; condition; update )
NOTE: execution steps: 1. init, 2. condition, 3.statements in loop, 4. update

// NESTED LOOPS

    • An inner loop goes through all of its iterations for each iteration of an outer loop.
    • Inner loops complete their iterations faster than outer loops.
    • To get the total number of iterations of a nested loop, multiply the number of itera-
    tions of all the loops.
*/


int main() {
    // const int minValue = 0;
    // const int maxValue = 60;
    // unsigned mySeed = time(0); // gets time and assigns it to mySeed
    // cout << mySeed;
    // srand(mySeed); // seeds random number
    // cout << rand(); // gets random number
    //  y = (rand() % (maxValue − minValue + 1)) + minValue;

    // int temp;
    // cout << "Enter the substance's temperature\n";
    // cin >> temp;
    
    // while (temp > 0 && temp < 102.5) {
    //     cout << "Turn down temp dummy\n";
    //     cout << "Reenter temp after 5 mins";
    //     cin >> temp;
    // }
    // cout << "nice";
    // const int minValue = 1,
    //             maxValue = 100;
    
    // cout << "Num from 1-100: ";
    // int num;
    // cin >> num;
    // while (num < minValue|| num > maxValue) {
    //     cout << "not between 1-100\n";
    //     cout << "reenter: ";
    //     cin >> num;
    // }
    // const int minPlayers = 1,
    //             maxPlayers = 10;
    // int players;
    // cout << "Enter players: ";
    // cin >> players;

    // while (players < minPlayers || players > maxPlayers) 
    // {
    //     cout << "You need at least " << minPlayers << " players and at most " << maxPlayers << " players.\n";
    //     cout << "Enter how many players: ";
    //     cin >> players;
    // }
    
    // 5.2 program 
    // Enter number in range of 10 to 25
    // cout << "========================\n";
    
    // int num;
    // const int minValue = 10,
    //             maxValue = 25;
    // cout << "Num between 10 to 25: ";
    // cin >> num;
    // while (num < minValue || num > maxValue) 
    // {
    //     cout << "Re-enter num between 10 to 25: ";
    //     cin >> num;
    // }

// Write an input validation loop that asks the user to enter ‘Y’, ‘y’, ‘N’, or ‘n’.
    // char inputChar;
    // // cout << "\'Boii\'";
    // cout << "Enter 'Y', 'y', 'N', or 'n': ";
    // cin >> inputChar;
    // while (inputChar != 89 && inputChar != 121 && inputChar != 78 && inputChar != 110)  //need && operator here because return boolean - -risky to use booleans in while loops?

    // // not Y (True) or y (False) -- truthy value
    // {
    //     cout << "Enter 'Y', 'y', 'N', or 'n': ";
    //     cin >> inputChar;
    // }


// Program: Counters
    // const int minNumber = 1,
    //         maxNumber = 10;
    //     int num = minNumber; // counter
        
    //     while (num <= maxNumber) {
    //         cout << "Loops: " << num << endl;
    //         num++;
    //     }
   
   
    // do while WTF
    // int score1, score2, score3;
    // double avgOverallEachStudent;
    // char checker;
    
    // do
    // {
    //     cout << "Enter 3 testScores: ";
    //     cin >> score1 >> score2 >> score3;
    //     avgOverallEachStudent = (score1 +score2 +score3)/3;
    //     cout << avgOverallEachStudent << endl << "do this again?: ";
    //     cin >> checker;
    // }
    // while(checker !='Y' && checker!='y');

    // int v = 10;
    // do
    // {
    // cout << v << endl;
    // // cout << "Hello World\n"; 
    // // count++;
    // } while (v < 5);

    //  const int minValue = 1,
    //             maxValue = 10;
    // int i;

    // cout << "Number Number Squared\n";
    // cout << "------------------------\n";

    // for(i=minValue; i<= maxValue; i++ ) {
    //     cout << i << "\t\t" << i*i << endl;
    // }

    
    // Prints out all even numbers
    // for (int num =2; num <= 100; num+=2) {
    //     cout << num << endl;
    // }
    
    // Print out all odd numbers decreasing 1-99
    // int outsideGlobal;
    // for (int i=99; i>0; i-=2) { // variable isn't global here
    //     outsideGlobal=i;
    //     cout << i << endl;
    // }
    //     cout << outsideGlobal << endl;

 
    // Global variable in for loop example
//    int x;
//     for (x = 5; x <= 14; x += 3)
//         cout << x << endl; 
//         // inside loop 5, 8, 11, 14, 
//         // outside loop 17
//     cout << x << endl;


    // // Take in daily sales over x days and calculate total with for-loop
    // int days; 
    // double total;

    // cout << "Enter how many days: ";
    // cin >> days;


    // int sales;
    // for(int count=1; count<=days; count++) 
    // {//for each day, enter in a sales figure
    // cout << "Enter how many sales you make on day " << count << ": ";
    // cin>>sales;
    // total+=sales;
    // }

    // cout << fixed << showpoint << setprecision(2); //fixed to decimal after ones, show decimals, set sig digits to 2
    // cout << total;


    // program: repeat 7 times, asking for input number each time. calculate total of numbers    
    // int num;
    // double total;

    // for (int count=0; count <=6; count++) {
    //     cout << "Enter a number: ";
    //     cin >> num;
    //     total+=num;
    // }
    // cout << "Total: " << total;

    // Digital Clock
//     cout << fixed << right;
//     cout.fill('0'); // puts a 0 in front of the space in front of single digit numbers

// // NESTED LOOPS pg 263
// // how minecraft time was made
//     // first outer loop executes, then inner loop. inner loop conditions false, then outer loop  
//     for (int hours=0; hours<24;hours++) {
//     // 24 loops, each one gets 60 loops
//     // 24 * 60 = 1440
                
//         for (int minutes=0; minutes<60; minutes ++) {
//             // 60 loops, each one gets 60
//             // 60 * 60 = 3600
//             for (int seconds = 0; seconds < 60; seconds++)
//                 {
//                 cout << setw(2) << hours << ":";
//                 cout << setw(2) << minutes << ":";
//                 cout  << seconds << endl;
//                 }
//             }
//     }
    //initialization
//     int students;
//     int numStudents, numTests; // if you don't declare how many number of students, becomes infinite loop?
//     double avgOverallEachStudent, total, testScores;
    
//     // INPUT
//     cout << "Enter how many students: ";
//     cin  >> numStudents;
//     cout << "Enter how many tests: ";
//     cin  >> numTests;

// // Statements
//     for (students=0; students <= numStudents; students++) {
//         for (int count=0; count <= numTests; count++){
//             // each student has multiple test scores
//             cin >> testScores;
//             total+=testScores;
//     }

//     // outputs
//     }

pg. 266


Ch 6 --- Functions

void first(); function prototype
use prototypes to put enable/not error out functions after int main() 




}