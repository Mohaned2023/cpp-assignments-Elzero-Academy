#include <iostream>
using namespace std;

int main()
{
    // Do Not Edit Here
    short a = 1000;
    int b = 10000;
    long double c = 5.560000505012;

    // Change ??? To Something Else To Get The Output
    cout <<  sizeof(c) - sizeof(b) << "\n"; // 12
    cout << sizeof(c) + sizeof(b) << "\n"; // 20
    cout << sizeof(c) * sizeof(a) << "\n"; // 32
    cout << a * int(c) << "\n"; // 5000
    cout << char( int(c) * sizeof(c) )<< "\n"; // P 
    return 0;
}


