#include <iostream>
using namespace std;

int main() {
	double gas_tank = 20, town_mpg = 23.5, highway_mpg = 28.9;
	double townMax= gas_tank * town_mpg, highwayMax = gas_tank * highway_mpg;

	cout << "The total distance driving around town is " << townMax << " miles." << endl;
	cout << "The total distance driving on the highway is " << highwayMax << " miles." << endl;
}