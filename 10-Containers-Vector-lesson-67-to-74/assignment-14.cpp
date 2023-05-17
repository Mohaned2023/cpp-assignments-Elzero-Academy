#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> nums = { 5, 4, 3, 2, 1 };

    // Method One
    reverse(nums.begin() , nums.end() ) ;
    // Method Two
    for (int i = 0 ; i < nums.size() / 2 ; i++ ) {
        int value = nums.at(i) ;
        nums.at(i) = nums.at(nums.size() - 1 - i ) ;
        nums.at(nums.size() - 1 - i ) = value ;
    }
    // Method Three -> Use Swap + Loop For Challenge
    for ( int i = 0 ; i < nums.size() / 2 ; i++ ){
        swap(*(nums.end() - 1 - i ) , *(nums.begin() + i ) ) ;
    }
    for (int i : nums)
    {
        cout << i << "\n";
    }

    // Needed Output
    // 1
    // 2
    // 3
    // 4
    // 5
    return 0;
}
