#include <iostream>
#include <math.h>
using namespace std;

int main() {
	double percentProfit = 0.35, cost = 14.95, sellingPrice;
	sellingPrice = cost + (cost * percentProfit);
	cout << "The selling price is $" << floor(sellingPrice) << endl;
}