#include <iostream>
using namespace std ; 

int main() {
    int num1 , num2 ;
    cout << "Enter Two numbers : " ;
    cin >> num1 >> num2 ;
    if (num1 < num2 ) {
        for (int number = num1+1 ; number < num2 ; number++  ) {
            if (number % 2 != 0 ) {
                cout << number << '\n' ;
            }
        }
    }else if (num1 > num2 ) {
        for (int number = num2 + 1 ; number < num1 ; number++ ){
            if (number % 2 != 0 ) {
                cout << number << '\n' ;
            }
        }
    } 
    return 0 ;
}
