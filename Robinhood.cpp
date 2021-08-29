/*
You are given integers n, e, o, t. You have n dollars in principal that you invested in the stock market. Given the stock market alternates between first returning e and then o percent interest per year, return how many years it would take to reach at leastt dollars.
Example 1

Input

n = 100
e = 20
o = 10
t = 130

Output

2
*/


#include <iostream>
using namespace std;

int solve(int n, int e, int o, int t) {
    double years = 0, yearly_earnings;
    if (n >= t) return 0;
    else
    {
        n = n + (n*(float)e/100); // 120
        ++years;
    }
    // After
    while (n < t) {
        n = n + (n*(float)o/100);
        n += yearly_earnings;
        ++years;
    }
    return years;
};
int main() {
cout << solve(517, 304,  68,  5174160);

}

