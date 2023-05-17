#include <iostream>
using namespace std ; 

int main() {
    int num = 0 ;
    for (int i = 0 ; i < 10 ; i++ ) {
        if ( i == 6 || i == 5 ) {
            num += 2 ;
        }else {
            cout << num << '\n' ;
            num += 2 ;
        }
    }
    num = 0 ;
    int cont = 0 ;
    while (cont < 10 ) {
        if ( cont == 6 || cont == 5 ) {
            num += 2 ;
        }else {
            cout << num << '\n' ;
            num += 2 ;
        }
        ++cont ;
    }
    return 0 ;
}
