//#include <chrono>
#include <iostream>
//#include <iomanip>
//#include <string>
//#include <vector>
//#include <fstream>
//#include <list>
//#include <queue>
//#include <stack>
//#include <set>
//#include <map>
//#include <cmath>
//#include <ctime>
//#include <cstdlib>
//#include <cassert>
//#include <cstring>
//#define all(a) a.begin(),a.end()
//#define pb push_back
//#define mp make_pair
#define forn(i,n) for(int i = 0; i < int(n); ++i)
//#define sz(a) int(a.size())
#define LOG(x) std::cout << x << std::endl
using namespace std;

class Rectangle {
    // Data Hiding to prevent user-errors
    private:
        int length;
        int width;
    public:
        // Constructors
        Rectangle(); // no parameters (default)
        Rectangle(int l=0, int w=0); // set default arguments
        Rectangle(Rectangle &rect); // copy constructor
        // Mutators - change values or properties
        void setLength(int l);
        void setWidth(int w);
        // Accessor - access data/ reading properties
        int getLength() {return length;} // make inline functions with brackets {}
        int getWidth();
        // Facilitators - uses the data and calculates
        int area();
        int perimeter();
        // Enquiry
        bool isSquare();
        // Destructor
        ~Rectangle();
};

int Rectangle::area() {
    return length * width;
}


int main() {
    Rectangle r1(10,5);
//    if (r1::isSquare()) {
//        cout << "Yes";
//    }
    //    r.setLength(3);
    //    r.setWidth(4);
    //    cout << r.area() << endl;
    //    Rectangle(r2(r));
}
    
// Constructor
Rectangle::Rectangle()
{
    length = 1;
    width = 1;
}

// Copy Constructor
Rectangle::Rectangle(Rectangle &r)
{
    length = r.length;
    width = r.width;
}

bool Rectangle::isSquare()
{
    return length == width;
}
Rectangle::~Rectangle()
{
    cout << "Rectangle destroyed";
}
