pg. 
#include <iostream>
using namespace std;

int main() {
  // overflows with short
  // cout << "Hello World!\n";
  // short testVar; // short's max value
  // testVar = 32767;
  // cout << "Short org max value is " << testVar << endl;
  // testVar += 1;
  // cout << "Adding one to 32767 is " << testVar << endl;

  // // reset
  // testVar -= 1;
  // cout << "Subtracting one from -32768 is " << testVar << endl;

// overflow with floats
// overflows wrap around
  float test;
  test = 2.0e38;
  cout << test << endl;
  test = 2.0e38 * 1000;
  cout << test << endl;
  test = 2.0e-38 / 2.0e38;
  cout << test << endl;
  return 0;

}
