#include <iostream>
using namespace std;
int main() {
    int num = 4;
    
    // prefix vs postfix
    /* 
    prefix first increments then returns the value
    ++num --> add 1 then display

    postfix first returns the value then increments
    num++ --> add 1 then display
    */
    cout << num << endl;
    cout << ++num << endl; // adds then displays
    cout << num++ << endl; // displays then adds
    // note to self:
    // follow the operation. 
    // in ++num because the ++ is in front of the variable, you first add then display

    // in num++ because the ++ is behind the variable, first display then add
    

    
    cout << "postfix " << p++ << endl;
//   int *p=nullptr;
}
