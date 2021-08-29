//http://codeforces.com/problemset/problem/4/A
// A. Watermelon
// RULES: Must be divided into 2 parts with EVEN number of kilos, between 1 to 100, divided evenly
#define _USE_MATH_DEFINES
#include <iostream>
// #include<bits/stdc++.h> // g++ compile; includes iostream, vector, algorithm
#include <iomanip>
#include <string>
#include <vector>
#include <fstream>
#include <list>
#include <queue>
#include <stack>
#include <set>
#include <map>  
#include <algorithm>
#include <math.h>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cassert>
#include <cstring>
#include <ctime>
// Macros; #define; replace strings 
#define all(a) a.begin(),a.end()
#define pb push_back
#define mp make_pair
#define forn(i,n) for(int i = 0; i < int(n); ++i)
#define sz(a) int(a.size())
// #define ff float
// #define dd double
// #define vc vector
// #define pb push_back
// #define pop pop_back
// #define N  10003
// #define fr first
// #define sc second
#define SQ(a) (a)*(a)
#define sz size
#define r_0 return 0
// Type names; typedef; shorter name to datatype
// typedef long long ll;
// typedef long double ld;
// typedef pair<int,int> pt;
 


int main() {
        // std::ios::sync_with_stdio(0); // makes input/output faster
        // std::cin.tie(0);
        // endl is slower because it causes a flush operation; \n is faster
    int w;
    std::cin >> w;
    
    if (w % 2 == 0 && w > 2)
    {
        std::cout << "YES\n";
    }
    else 
    {
        std::cout << "NO\n";
    }

#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
#endif
}