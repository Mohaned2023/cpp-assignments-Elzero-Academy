#include <iostream>
using namespace std ; 

int main() {
    int help_num = 4;
    int nums[] = {2, 4, 5, 6, 10};
    int size = sizeof (nums) / sizeof (nums[0]) ;
    for (int i = 0 ; i < size ; i++ ) {
        cout << nums[i]  + nums[ help_num ] <<'\n' ;
        help_num-- ;
    }
    // Output Needed
    // "2 + 10 = 12"
    // "4 + 6 = 10"
    // "5 + 5 = 10"
    // "6 + 4 = 10"
    // "10 + 2 = 12"
    return 0 ;
}
