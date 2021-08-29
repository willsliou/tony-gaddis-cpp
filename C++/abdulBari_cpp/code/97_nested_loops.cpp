//
//  main.cpp
//  commandline
//
//  Created by Wills Liou on 3/24/20.
//  Copyright © 2020 Wills Liou. All rights reserved.
//


// Sample Output
/* 1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16
Program ended with exit code: 0
*/
#include <iostream>
#include <iomanip>
#include <chrono>
using namespace std;

int main(int argc, const char * argv[]) {

    int my_counter = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << ++my_counter << " ";
        }
        cout << endl;
    }
}

