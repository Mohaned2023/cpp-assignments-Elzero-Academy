#include <iostream>
using namespace std ; 

int main() {
    // Friends Array
    string friends[] = {"Ahmed", "Osama", "Ameer"};
    for (string name : friends ) {
        cout << name << '\n' ;
        for (char letter : name ) {
            cout << letter << " ";
        }
        cout << '\n' ;
    }
    // Output Needed
    // =========
    // = Ahmed =
    // ==================
    // == A, h, m, e, d =
    // ==================

    // =========
    // = Osama =
    // ==================
    // == O, s, a, m, a =
    // ==================

    // =========
    // = Ameer =
    // ==================
    // == A, m, e, e, r =
    // ==================
    return 0 ;
}