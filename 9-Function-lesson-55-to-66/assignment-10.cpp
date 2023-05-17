#include <iostream>
using namespace std;

// Write Your Function Here
int minpositive(int array[] , int size ) {
    int max = array[0] ;
    // to get the max number from the array .
    for (int i = 0 ; i < size ; i++ ) {
        if (array[i] > max) {
            max = array[i] ;
        }
    }
    // the min number = max number for the check .
    int min = max ;
    // to get the min number from the array . 
    for (int x = 0 ; x < size ; x++ ) {
        if (array[x] < min && array[x] > 0 ) {
            min = array[x] ;
        }
    }
    return min ;
}

int main()
{
    int numbers[] = { -10, -20, 15, 100, 10, 5, -50, 0 }; // 5
    int numssize = size(numbers);
    cout << minpositive(numbers, numssize) << "\n";
    return 0;
}