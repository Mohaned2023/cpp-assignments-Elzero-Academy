#include <array>
#include <iostream>
using namespace std;

int main()
{
    array<int, 6> nums = {10, 20, 30, 40, 20, 50};
    cout << "First: "<<nums[0] <<'\n' ;
    cout << "Last: "<<nums[nums.size() - 1] <<'\n' ;
    // Method 1
    // "First: 10"
    // "Last: 50"

    // Method 2
    // "First: 10"
    // "Last: 50"
    int len = (sizeof(nums) / sizeof(nums[0])) -1 ;
    cout << "First: "<<nums[ 0 ] <<'\n' ;
    cout << "Last: "<<nums[ len ] <<'\n' ;
    // Method 3
    // "First: 10"
    // "Last: 50"
    
    return 0;
}