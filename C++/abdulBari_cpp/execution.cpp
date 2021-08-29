#include <iostream>
#include <chrono>
using namespace std;

int main() {
    // int A[] = {6, 8, 13, 17, 20, 22, 25, 28, 30 ,55};
    // int max = INT_MIN;
    // cout << max << endl;
    // Binary Search: MUST BE SORTED LIKE A BOOK
    // int key = 30;
    // int first = 0, last = 9;
    // // IDEA: find a number by like searching a book
    // // Search low, modify right hand high side; search high, modify low
    // // Step 1: Go into the middle
    // int middle = (first + last) / 2;
    // if (middle == key) {
    //     cout << "Found the key";
    // }
    // else if (key > A[middle]) {
    //     first = middle;
    //     middle = (first + last) / 2;
    // }

    // else if (key < middle) {
    //     last = middle;
    //     middle = (first + last) / 2;
    // }

    // NESTED LOOPS
    int counter = 1;
    for (int i=0; i<4;i++)
    {
        for (int i=0; i<4;i++)
        {
            cout << counter << " ";
            counter++;
        }
        cout << endl;
        counter++;
    }
    cout << counter << endl;
}