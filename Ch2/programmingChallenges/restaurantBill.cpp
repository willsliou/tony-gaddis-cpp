#include <iostream>
using namespace std;

int main() {
  
  double meal = 88.67, tax = 0.0675, tip = 0.2;
  double meal_total = meal + (meal * tax);
  double meal_w_tip = meal_total + (meal_total*tip);
  
  cout << "Meal cost is $" << meal << endl;
  cout << "Tax amount is $" << tax << endl;
  cout << "Tip amount is $" << tip << endl;
  cout << "Total bill is $" << meal_w_tip << endl;

}