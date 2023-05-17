#include <iostream>
using namespace std;

// Your Function Here
double calculation(double num1=0 , double num2=0 , double num3=0 ) {
    return num1 + num2 + num3 ;
}

int main()
{
    cout << calculation(50, 100, 150) << "\n"; // 300
    cout << calculation(100, 50) << "\n"; // 150
    cout << calculation(100) << "\n"; // 100
    return 0;
}