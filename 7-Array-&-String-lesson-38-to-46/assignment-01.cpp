#include <iostream> 
using namespace std ;

int main() {
    int nums[]{100, 300, 600, 900};
    string awards[]{"iPhone", "iPad", "PC", "Car"};
    for (int i = 0 ; i < 4 ; i++ ){
        cout << "Number " << nums[i] << " Award Is: " << awards[i] << '\n' ;
    }
    // Output Needed
    // "Number 100 Award Is: iPhone"
    // "Number 300 Award Is: iPad"
    // "Number 600 Award Is: PC"
    // "Number 900 Award Is: Car"
    return 0 ;
}