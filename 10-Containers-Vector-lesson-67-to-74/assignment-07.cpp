#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> numbers = { 10, 20, 10, 40, 50 };
    vector<int>::iterator iter = numbers.begin();

    for (int i = 0 ; i < numbers.size() ; i++ )
    {
        // Your Code Here
        cout << *iter << '\n' ;
        advance( iter , 1 ) ;
    }

    return 0;
}