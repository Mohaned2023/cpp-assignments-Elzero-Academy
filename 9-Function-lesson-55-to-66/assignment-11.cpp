#include <iostream>
using namespace std;

// Write Your Function Here
int firstnegative(int array[] , int size) {
    int max = array[0] ;
    for (int i = 0 ; i < size ; i++ ) {
        if (array[i] < 0 && array[i] > max ) {
            max = array[i] ;
        }
    }
    return max ;
}
int main()
{
    int numbers[] = { -10, -20, 15, 100, 10, 5, -50, 0, -5, -10 }; // -5
    int numssize = size(numbers);
    cout << firstnegative(numbers , numssize ) << "\n";
    return 0;
}