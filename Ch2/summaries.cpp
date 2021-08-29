PROG: summaries
#include <iostream>
#include <string>

using namespace std;

int main() {
  // char letter;
  // letter = 'a'; // ' ' are string literals; " " are strings
  // cout << letter << endl;

  // // ASCII example
  // // character --> numeric value
  // char A = 65;
  // char ascii2 = 66;
  // char newline = 10;
  // // A --> 65
  // // B --> 66
  // cout << A << endl;
  // cout << ascii2 << newline;

//   float distance;
//   long double mass;

//   distance = 1.49E11f;
//   mass = 1.2E308;

//   cout << "The Sun is " << distance << " from my anus\n";
//   cout << "The Sun is " << mass << " doggos" << endl;


//   cout << sizeof(int) << " bytes\n";
//   cout << sizeof(long) << " bytes\n";
//   cout << sizeof(double) << " bytes\n";

//   int age = 22;
//   double weight = 141.12;
//   cout << "My age is " << age << " and my weight is " << weight << " pounds."; 

//   auto lilbitch = 'h';
//   cout << lilbitch << endl;
//   int var(3);
//   cout << var << endl;
//   int varz{ 4 };
//   cout << varz << endl;

//     auto doubleVal = 6.2 ;
//   int value = doubleVal;
//   cout << doubleVal << endl;
//   cout << value << endl;

// double 
//     totalWages,
//     weeklyRegularWages,
//     basePay = 18.25,
//     regularHours = 40,
//     weeklyOvertimeWages,
//     overtimePay = 27.78,
//     overtimeHours = 10;

//     weeklyRegularWages = basePay * regularHours;
//     weeklyOvertimeWages = overtimePay * overtimeHours;
//     totalWages = weeklyRegularWages + weeklyOvertimeWages;

//     cout << "Total pay is " << totalWages << endl;



    // // store integer and not floating point
    // // 
    // double integerNumber;
    // integerNumber = 5 / 2;
    // cout << integerNumber << endl; // throw into stream

    // // store floating point and not integer
    // double floatingNumber;
    // floatingNumber = 5.0 / 2;
    // cout << floatingNumber << endl;


    double price = 59.95, discount = 0.2, final;

    double discountFinal = price * discount;
    final = price - discountFinal;

    cout << "The final price is $" << final;
}
