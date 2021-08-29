// Program: cin

#include <iostream>
using namespace std;

int main() {
    int length, width, area;

    cout << "What is the length? ";
    cin >> length; // NOTE: this automatically makes the next line
    cout << "What is the width? ";
    cin >> width;
    area = length * width;
    cout << "The area is " << area << endl;
}
