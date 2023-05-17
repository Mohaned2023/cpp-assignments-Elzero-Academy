#include <iostream>
using namespace std;

// Write Your Function Here
double calculate(double num1 , double num2 , string opr = "a") {
    if ( opr == "a" || opr == "add") {
        return num1 + num2 ;
    } 
    else if ( opr == "s" || opr == "subtract") {
        return num1 - num2 ;
    }
    else if ( opr == "m" || opr == "multiply" ){
        return num1 * num2 ;
    } 
    else {
        return 0 ;
    }
}
int main()
{
    cout << calculate(10, 20) << "\n"; // 30
    cout << calculate(10, 20, "a") << "\n"; // 30
    cout << calculate(10, 20, "s") << "\n"; // -10
    cout << calculate(10, 20, "subtract") << "\n"; // -10
    cout << calculate(10, 20, "multiply") << "\n"; // 200
    cout << calculate(10, 20, "m") << "\n"; // 200
    cout << calculate(10, 20, "Invalid") << "\n"; // 0
    return 0;
}