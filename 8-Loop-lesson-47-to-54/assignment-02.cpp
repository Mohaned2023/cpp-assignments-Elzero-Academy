#include <iostream>
using namespace std ; 

int main() {
    int index = 2 ;
    for (;;) // <= Do Not Edit This Line
    {
        if (index < 11 ){
            cout << index << "\n"; // From 2 To 10
        }else if (index == 11 ){
            break; 
        }
        index++ ;
    }

    // Output
    // 2
    // 3
    // 4
    // 5
    // 6
    // 7
    // 8
    return 0 ;
}
