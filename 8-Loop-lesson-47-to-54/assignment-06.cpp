#include <iostream>
using namespace std ; 

int main() {
    int num = 1 ;
    for (int i = 0 ; i < 4 ; i++ ){
        num *= 10 ;
        cout << num << '\n' ;
    }
    num = 1 ;
    int cont = 0 ;
    while (cont < 4 ) {
        num *= 10 ;
        cout << num << '\n' ;
        cont++ ;
    }
    return 0 ;
}
