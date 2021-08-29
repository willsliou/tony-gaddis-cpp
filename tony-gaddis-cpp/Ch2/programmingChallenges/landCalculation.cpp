#include <iostream>
using namespace std;

int main() {
	double OneAcreInSqft = 43560; // 1 acre = 43568 sqft
	double totalSqFt = 391876;

	double totalAcres = (float) totalSqFt / OneAcreInSqft;
	cout << "Total number of acres with 391,876 square feet is " << totalAcres << " acres." << endl;
}