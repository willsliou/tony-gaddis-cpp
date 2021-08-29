//
//  main.cpp
//  commandline
//
//  Created by Wills Liou on 3/24/20.
//  Copyright © 2020 Wills Liou. All rights reserved.
//
/*
 SAMPLE OUTPUT
      *
     **
    ***
   ****
Program ended with exit code: 0
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
            if (i+j < 4 - 1)
            {
                cout << " ";
            }
            else cout << "*";
        }
        cout << endl;
        
    }
}

