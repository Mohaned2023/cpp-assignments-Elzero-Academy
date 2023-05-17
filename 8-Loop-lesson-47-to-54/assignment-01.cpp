#include <iostream>
using namespace std ; 

int main() {
    for (int i = 0 ; i < 11 ; i++) {
        cout << i << '\n' ;
    }
    int con = 0 ;
    while (con < 11 ){
        cout << con << '\n';
        con++ ;
    } 
    int con2 = 0 ;
    do {
        cout << con2 << '\n';
        con2++ ;
    } while( con2 < 11 ) ;
    return 0 ;
}