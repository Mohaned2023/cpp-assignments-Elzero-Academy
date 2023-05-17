#include <iostream>
using namespace std ; 

int main() {
    int num = 2 ;
    for (int i = 0 ; i < 6 ; i++ ){
        cout << num << '\n' ;
        num = (num * 2) + 2 ;
    }
    num = 2 ;
    int cont = 0 ;
    while (cont < 6 ) {
        cout << num << '\n' ;
        num = (num * 2) + 2 ;
        cont++ ;
    }
    return 0 ;
}
