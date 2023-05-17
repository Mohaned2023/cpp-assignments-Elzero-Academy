#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> numbers = { 10, 20, 30, 40 };

    // Method One
    numbers.pop_back() ;
    // Method Two
    numbers.erase(numbers.end() - 1) ;
    // Method Three
    numbers.resize(3) ;
    // Do Not Edit
    for (int i : numbers)
    {
        cout << i << "\n";
    }
    // Needed Output
    // 10
    // 20
    // 30
    return 0;
}
