#include <iostream>
using namespace std;

// Write Your Function Here
string swapping(string word) {
    string newWord = "" ;
    for (char letter : word ) {
        if (letter == 'H' || letter == 'h' ) newWord += letter ;
        else if ( letter == toupper(letter) ) newWord += tolower(letter) ;
        else newWord += toupper(letter) ;
    }
    return newWord ;
}

int main()
{
    cout << swapping("hero Of THe PROgramming") << "\n"; //* hERO oF tHE proGRAMMING
    return 0;
}