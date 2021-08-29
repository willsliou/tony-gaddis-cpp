#include <iostream>
using namespace std;

int main() {
  // would be easier to store in array
  // int arr[p1, p2, p3, p4, p5]
  // for i in arr:
  //   add 1 in each item in array
  double p1 = 15.95;
  double p2 = 24.95;
  double p3 = 6.95;
  double p4 = 12.95;
  double p5 = 3.95;

  cout << "Price of item 1 is $" << p1 << endl;
  cout << "Price of item 2 is $" << p2 << endl;
  cout << "Price of item 3 is $" << p3 << endl;
  cout << "Price of item 4 is $" << p4 << endl;
  cout << "Price of item 5 is $" << p5 << endl;

  double subtotal = p1 + p2 + p3 + p4 + p5;
  cout << "The subtotal is $" << subtotal << endl;

  double salesTax = 0.07;
  double total = subtotal + (subtotal * salesTax);
  cout << "The total is $" << total << endl;

  
}