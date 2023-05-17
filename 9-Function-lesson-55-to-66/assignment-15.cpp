#include <iostream>
using namespace std;

// Write Your Functions Here
float avg(int array[] , int size ) {
    float sum = 0 ;
    for (int i = 0 ; i < size ; i++ ) sum += array[i] ; 
    return sum / size ;
}
int main()
{
    int money[] = { 10, 20, 15, 25, 30, 35 };
    int monsize = size(money);
    cout << avg(money, monsize) << "\n"; // 22.5
    return 0;
}