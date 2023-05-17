#include <iostream>
using namespace std ; 

int main() {
    string names[] = {"Osama", "Ahmed", "Mahmoud", "Hagar", "Eman", "Salwa"};
    for (string name : names) {
        if (name.length() == 5 ) {
            cout << name << '\n' ;
        }
    }
    // Output Needed
    // "Osama"
    // "Ahmed"
    // "Hagar"
    // "Salwa"
    return 0 ;
}