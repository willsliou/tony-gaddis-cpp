// Write an input validation loop that asks the user to enter ‘Y’, ‘y’, ‘N’, or ‘n’.
#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    char inputChar;
    // cout << "\'Boii\'";
    cout << "Enter 'Y', 'y', 'N', or 'n': ";
    cin >> inputChar;
    while (inputChar != 89 && inputChar != 121 && inputChar != 78 && inputChar != 110)  //need && operator here because return boolean - -risky to use booleans in while loops?
// pwd - print working directory
// ls -l --> long format
// . --> path to this directory

    // not Y (True) or y (False) -- truthy value
    {
        cout << "Enter 'Y', 'y', 'N', or 'n': ";
        cin >> inputChar;
    }
}
