#include <iostream>
using namespace std;

int main() {
  double salesPercentage = 0.58;
  double totalSales = 8.6e6;
  double salesThisYear = salesPercentage * totalSales;
  cout << salesThisYear;
  return 0;
}
