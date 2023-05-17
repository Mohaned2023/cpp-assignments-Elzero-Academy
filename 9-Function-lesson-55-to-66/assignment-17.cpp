#include <iostream>
using namespace std;

// Write Your Function Here
double pricing(int phons , int old_phon , double price_new , double tax ) {
    double price_old = price_new - 200 ; // to get all price of the old phons .  
    int new_phon = phons - old_phon ;  // to get number of new phons . 
    double all_price_old = old_phon * price_old ; // to get all price of the old phons . 
    double all_price_new = new_phon * price_new ; // to get all price of the new phons .
    double all_price = all_price_new + all_price_old ; // to get the price of new phons and old phons . 
    double pc = tax/100  ; // to change the p.c .
    return (all_price - ( pc * all_price ) ) ; // to return the price without tax . 

}
int main()
{
    cout << pricing(50, 10, 800, 20) << "\n"; // 30400
    return 0;
}