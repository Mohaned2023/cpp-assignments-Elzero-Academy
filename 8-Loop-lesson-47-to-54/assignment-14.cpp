#include <iostream>
using namespace std ; 

int main() {
    int num = 2;
    int mainNum = 1 ;
    while (num < 520) {
        // Your Code Here
        if (num > 2 && num < 11 ) {
            cout << mainNum << '\n' ;
            mainNum = mainNum + mainNum + 2 ;
        }
        num++ ;
    }

    // Needed Output
    // 1
    // 4
    // 10
    // 22
    // 46
    // 94
    // 190
    // 382
    return 0 ;
}