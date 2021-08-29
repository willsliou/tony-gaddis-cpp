#include <iostream>
using namespace std;

int main() {
	double rate = 1.5, currentLevel;
	double year5 = 5, year7 = 7, year10 = 10;
	double fyear5 = rate * year5;
  	double fyear7 = rate * year7;
  	double fyear10 = rate * year10;

	cout << "The number of millimeters in 5 years is " << fyear5 << endl;
	cout << "The number of millimeters in 7 years is " << fyear7 << endl;
	cout << "The number of millimeters in 10 years is " << fyear10 << endl;
}