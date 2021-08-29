#include <iostream>
using namespace std;

int main() {
    // do while WTF
    int score1, score2, score3;
    double avg;
    char checker;

    do
    {
        cout << "Enter 3 scores: ";
        cin >> score1 >> score2 >> score3;
        avg = (score1 +score2 +score3)/3;
        cout << avg << endl << "do this again?: ";
        cin >> checker;
    }
    while(checker !='Y' && checker!='y');

}

