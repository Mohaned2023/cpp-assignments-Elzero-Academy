#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector <int> numbers = { 10, 20, 10, 40, 50, 60, 10, 80 };
    int check = 10;
    int countone = 0;
    int counttwo = 0;

    vector <int>::iterator it = numbers.begin() ; 
    // Write Method One
    for (int number : numbers ) countone += number == check ? 1 : 0 ;
    // Write Method Two
    for (int i = 0 ; i < numbers.size() ; i++ ){
        counttwo +=  *it == check ? 1 : 0 ;
        advance(it , 1 ) ;
    } 
    cout << countone << "\n"; // 3
    cout << counttwo << "\n"; // 3
    return 0;
}