/*PART ONE ===========================================

Create an integer vector that's empty.

Use a for-loop to push 100 numbers into this vector.

Then...print out the contents of your vector in a 10x10 grid.*/
// #include <iostream>
// #include <iomanip>
// #include <vector>
// using namespace std;

// int main() {
//     vector<int> v;
//     int row = 10, column = 10;
//     for (int z=0; z<100; z++) v.push_back(z);
    
//     int row_counter = 0; // is there another way to do this?
//     for (int j=0; j<10; j++)
//     {
//         for (int i=0; i<10; i++)
//         {
//             cout << left << setw(3) << v[i+row_counter] << " ";
//             // cout << i+row_counter;
//         }
//         cout << "\n";
//         row_counter+=10;
//     }  
    
// }

/*PART TWO =========================================

Alter your code in Part One above. Rather than printing the vector in the main function, create a function that will receive the vector as a parameter, and have the function print the vector's contents in the 10x10 grid.*/
// #include <iostream>
// #include <iomanip>
// #include <vector>
// using namespace std;
// void myPrinter(vector<int>);

// int main() {
//     vector<int> v;
//     int row = 10, column = 10;
//     for (int z=0; z<100; z++) v.push_back(z);

//     myPrinter(v);
// }

// void myPrinter(vector<int> myVect) {
//     int row_counter = 0; 
//     for (int j=0; j<10; j++)
//     {
//         for (int i=0; i<10; i++)
//         {
//             cout << left << setw(3) << myVect[i+row_counter] << " ";
//             // cout << i+row_counter;
//         }
//         cout << "\n";
//         row_counter+=10;
//     }  
// }

/*PART THREE ==========================================

Create an integer vector. Ask the user to input values into this vector and to use a sentinal value to indicate that they're done entering values.

Then, ask the user if they'd like to: (a) double the vector values; or (b) triple the vector values.

Then output these values using a standard for-loop. */

// #include <iostream>
// #include <iomanip>
// #include <vector>
// using namespace std;

// int main() {
//     vector<int> v;
//     int mySent = -99;
//     int myInput;
//     char mySwitch;
//     cout << "Type -99 to quit.\n";
//     cout << "Enter your vector values: ";
//     cin >> myInput;

//     while (!(myInput == mySent))
//     {
//         v.push_back(myInput); // pushback after checking
//         cout << "Enter your vector values: ";
//         cin >> myInput;
//     }

//     cout << "Select one:\n(a) double the vector values\n(b) triple the vector values\n";
//     cin >>  mySwitch;
//     switch(mySwitch)
//     {
//         case 'a': for(int i = 0; i < v.size(); i++)  v[i] *= 2;
//         case 'b': for(int i = 0; i < v.size(); i++)  v[i] *= 3;
//     }
//     for (int x : v) cout << x << " ";
// }


/*PART FOUR ============================================

Populate an integer vector with 10 random numbers of your choice. (Use a for loop for this.)

Then use a RBFL to print the vector for the user. Ask them which element they'd like to remove from the vector, and then remove it, and print the new vector.

Then ask them where they'd like to insert a value into the vector (have them identify the index number) and then insert that number, and print the new vector.*/

// #include <iostream>
// #include <iomanip>
// #include <vector>
// using namespace std;

// int main() {
//     vector<int> v;
//     int intRemove;
//     for (int i=100; i < 110; i++) v.push_back(i); 
//     for (int x : v) cout << x << " ";
//     cout << "\n";

//     cout << "Input an index element to remove from the vector: ";
//     cin >> intRemove;
//     v.erase(v.begin()+intRemove);
//     for (int x : v) cout << x << " ";
//     cout << "\n";

//     cout << "Input an value and index to put into the vector seperated by a space: ";
//     int index, value;
//     cin >> index;
//     cin >> value;
//     v.insert(v.begin() + value, index);
//     for (int x : v) cout << x << " ";
//     cout << "\n";
}
