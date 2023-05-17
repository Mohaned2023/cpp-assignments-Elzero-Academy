#include <iostream>
using namespace std ; 

int main() {
    // Friends Array
    string friends[] = {"Ahmed", "Mohamed", "ameer", "Ashraf", "Amany"};
    int size = sizeof(friends) / sizeof(friends[0])  ;
    for (int i = 0 ; i < size ; i++ ) {
        if (i == 1 || i == 2 ) continue;
        else cout << friends[i] << '\n' ;
    }
    // Output Needed
    // "Ahmed"
    // "Ashraf"
    // "Amany"
    return 0 ;
}


