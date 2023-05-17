#include <iostream>
using namespace std ; 

int main() {
    int num = 0 ;
    for (int i = 0 ; i < 10 ; i++ ){
        cout << num << '\n' ;
        num += 3 ;
    }
    num = 0 ;
    int cont = 0 ;
    while (cont < 10 ) {
        cout << num << '\n' ;
        num += 3 ;
        cont++ ;
    }
    return 0 ;
}
