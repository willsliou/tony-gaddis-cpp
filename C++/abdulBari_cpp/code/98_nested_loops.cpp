//
//  main.cpp
//  commandline
//
//  Created by Wills Liou on 3/24/20.
//  Copyright © 2020 Wills Liou. All rights reserved.
//
/*
SAMPLE OUTPUT
****
 ***
  **
   *
 */
#include <iostream>
#include <iomanip>
#include <chrono>
using namespace std;

int main(int argc, const char * argv[]) {
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
// OFFICIAL SOLUTION
//            if (i>j) cout << " ";
//            else if (!(i>j)) cout << "*";
// MY SOLUTION
            if (j>=i)
            {
                cout << "*";
            }
            else if (i>j)
            {
                cout << " ";
            }
        }
        cout << endl;
        
    }
}

