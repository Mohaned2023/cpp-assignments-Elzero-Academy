#include <iostream>
using namespace std;

// Write Your Function Here
int plusandmultiply(int array[] , int size ) {
    int sum = 0 ;
    int mul = 1 ;
    for (int i = 0 ; i < size ; i++ ) {
        if (array[i]%2 == 0 ) sum += array[i] ;
        else mul *= array[i] ;
    }
    return sum + mul ;
}

int main()
{
    int numbers[] = { 10, 20, 3, 30, 5, 7, 40 };
    int numssize = size(numbers);
    cout << plusandmultiply(numbers, numssize ) << "\n";
    // Even Numbers -> 10 + 20 + 30 + 40 = 100
    // Odd Numbers  -> 3 * 5 * 7 = 105
    // Total = 100 + 105 = 205
    return 0;
}