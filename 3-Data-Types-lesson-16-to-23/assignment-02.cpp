#include <iostream>
using namespace std;

int main()
{
    double salary = 5000.98;
    // 8 Bytes
    cout<< sizeof(salary) << "\n";
    // 64 Bits
    cout<< sizeof(salary) * 8 ;
    return 0;
}