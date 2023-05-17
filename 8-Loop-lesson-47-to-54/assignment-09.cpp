#include <iostream>
using namespace std ; 

int main() {
    // Friends Array
    string friends[] = {"Ahmed", "Mohamed", "Sayed", "Gamal"};
    int size = sizeof(friends) / sizeof(friends[0])  ;
    for (int i = 1 ; i < size - 1 ; i++ ) {
        cout << friends[i] <<'\n' ;
    }
    // Output Needed
    // "Mohamed"
    // "Sayed"
    return 0 ;
}


