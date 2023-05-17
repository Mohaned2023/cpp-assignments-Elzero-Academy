#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> nums = {100 ,200 , 300 , 400 } ;
    for (int num : nums ) {
        cout << num <<' ' ;
    }
    cout << '\n' ;
    nums.push_back(500) ;
    cout << "First Element Is: " << *nums.begin() <<'\n' ;
    cout << "Last Element Is: " << *( nums.end() - 1 ) << '\n' ; 
    return 0;
}