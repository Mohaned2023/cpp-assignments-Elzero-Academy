#include <iostream>
using namespace std;

int main()
{
    
    char a = '~';
    char b = '&';
    char c = '%';
    char d = 'A';
    cout << "ASCII Value of ~ Is "<<static_cast<int>(a)<< "\n" ;
    cout << "ASCII Value of & Is "<<static_cast<int>(b)<< "\n" ;
    cout << "ASCII Value of % Is "<<static_cast<int>(c)<< "\n" ;
    cout << "ASCII Value of A Is "<<static_cast<int>(d)<< "\n" ;
    return 0;
}

// Output Needed
/*
"ASCII Value of ~ Is 126"
"ASCII Value of & Is 38"
"ASCII Value of % Is 37"
"ASCII Value of A Is 65"
*/