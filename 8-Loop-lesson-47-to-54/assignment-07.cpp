#include <iostream>
using namespace std ; 

int main() {
    int num = 2 ;
    for (int i = 0 ; i < 7 ; i++ ){
        cout << num << '\n' ;
        num *=  2 ;
    }
    num = 2 ;
    int cont = 0 ;
    while (cont < 7 ) {
        cout << num << '\n' ;
        num *= 2  ;
        cont++ ;
    }
    return 0 ;
}
