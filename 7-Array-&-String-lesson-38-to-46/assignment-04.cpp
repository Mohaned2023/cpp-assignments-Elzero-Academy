#include <iostream> 
using namespace std ;

int main() {
    // Example 1
    int vals[]{100, 200, 250, 400, 200};

    int first = vals[0] + vals[4] ;
    int second = vals[1] + vals[3] ;

    if (first > vals[2] ) {
        cout << "First Number + Last Number Is Larger Than Middle Number" << '\n';
        cout << vals[0] << " + " << vals[4] << " = " << first << '\n';
        cout << first << " > " << vals[2] << '\n' ;
    }
    if (second > vals[2] ) {
        cout << "Second Number + Before Last Number Is Larger Than Middle Number" << '\n';
        cout << vals[1] << " + " << vals[3] << " = " << second << '\n';
        cout <<vals[2] << '\n' ;
    }
    else {
        cout << "Middle Number Is The Largest" << '\n' ;
        cout << vals[2] <<'\n' ;
    }
    // Needed Output
    // "First Number + Last Number Is Larger Than Middle Number"
    // "100 + 200 = 300"
    // "300 > 250"
    return 0 ;
}