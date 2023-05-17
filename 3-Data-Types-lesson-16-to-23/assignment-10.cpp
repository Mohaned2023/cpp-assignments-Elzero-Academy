#include <iostream>
using namespace std;

int main()
{
    // Add Type Alias Here
    using lli  = long long int ; // 1
    typedef long long int lli ; // 2
    #define lli long long int // 3 
    // Do Not Edit
    lli num = 150050005; // This Is Long Long Int
    cout << num << "\n"; // 150050005
    return 0;
}





