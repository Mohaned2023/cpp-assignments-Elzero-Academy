#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> numbers = { 10, 20, 30, 40, 50, 60, 70, 80 };
    vector<int>::iterator it = numbers.begin();

    int index =  (*numbers.begin() - numbers.size() ) + (*numbers.begin() - numbers.size() ) ;
    // Write Method One
    it = numbers.begin() + index ;
    // Write Method Two
    it = numbers.end() - index;
    // Write Method Three
    advance(it , index ) ;

    cout << *it << "\n"; // 50
    return 0;
}