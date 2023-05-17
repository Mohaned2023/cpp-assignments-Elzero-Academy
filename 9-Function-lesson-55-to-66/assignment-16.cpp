#include <iostream>
using namespace std;

// Write Your Function Here
int books(int a , int b , int c , int shelf ) {
    a = a * 2 ;
    b = b * 4 ;
    c = c * 6 ;
    shelf = shelf * 20 ;
    int all_size = a + b + c ;
    
    if ( all_size <= shelf ) {
        return shelf - all_size ;
    } else return 0 ;
}
int main()
{
    cout << books(10, 4, 3, 4) << "\n"; // 26
    cout << books(10, 4, 3, 2) << "\n"; // 0
    return 0;
}