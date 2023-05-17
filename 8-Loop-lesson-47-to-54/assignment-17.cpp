#include <iostream>
using namespace std ; 

int main() {
    for (int i = 1 ; i <= 101 ; i++ ) {
        if (i <= 9 ) {
            cout << "00" << i << '\n' ;
        } else if (i >= 10 && i < 100 ) {
            cout << "0" << i << '\n' ;
        } else cout << i << '\n' ;
    }
    return 0 ;
}

