#include <iostream> 
using namespace std ;

int main() {
    // Example 1
    int vals[] = {100, 200, 600, 200, 100};
    int last = sizeof(vals)/sizeof(vals[0]) ;
    string message = vals[0] == vals[ last ] && vals[1] == vals[last - 1 ] ? "Array Is Palindrome" : "Array Is Not Palindrome" ;
    cout << message << "\n" ;
    // Output
    // "Array Is Palindrome"

    // Example 2
    // int vals[] = {100, 200, 200, 100};
    // Output
    // "Array Is Palindrome"

    // Example 3
    // int vals[] = {100, 300, 600, 200, 100};
    // Output
    // "Array Is Not Palindrome"
    return 0 ;
}