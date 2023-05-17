#include <iostream>
using namespace std ; 

int main() {
    int num = 30 ;
    for (int i = 0 ; i < 10 ; i++ ) {
        cout << num << '\n' ;
        num -= 3;
    }
    num = 30 ;
    for (int i = 0 ; i < 10 ; i++ ) {
        if (num%2 != 0 ) {
            cout << num <<'\n' ;
            num -= 3 ;
        } else num -= 3 ;
    }
    return 0 ;
}
