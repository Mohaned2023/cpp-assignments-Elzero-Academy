#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> firstnumbers = { 10, 30, 50, 70 };
    vector<int> secondnumbers = { 20, 40, 60, 80 };
    vector<int> numbers(firstnumbers.size() + secondnumbers.size() )  ;
    merge(firstnumbers.begin() , firstnumbers.end() , secondnumbers.begin() , secondnumbers.end() , numbers.begin() ) ;
    sort( numbers.begin() , numbers.end() ) ; 
    for (int num : numbers ) {
        cout << num << '\n' ;
    }
    // Output Needed
    // 10
    // 20
    // 30
    // 40
    // 50
    // 60
    // 70
    // 80
    return 0;
}

