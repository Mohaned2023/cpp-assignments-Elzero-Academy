#include <iostream>
#include <cmath>
using namespace std;

// Write Your Function Here
void thepower (double base , double power) {
    // 1 
    cout << pow(base , power ) << '\n' ;
    // 2
    int num = 1 ;
    for (int i = 1 ; i <= power ; i++ ) {
        num *= base ;
    }
    cout << num <<'\n' ;
}

int main()
{
    thepower(2, 5); // 32
    return 0;
}