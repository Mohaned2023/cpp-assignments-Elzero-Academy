#include <iostream> 
using namespace std ;

int main() {
    // Example 1
    int check1 = 25;
    int nums1[]{40, 20, 30, 70, 100};
    if (nums1[0] > check1 ) {
        cout << "{"<< nums1[0]<<"} + {"<<nums1[3] <<"} = " << nums1[0]+nums1[3] << '\n' ;
    }
    
    // Ouput
    // "{40} + {70} = 110"

    // Example 2
    int check2 = 25;
    int nums2[]{20, 35, 30, 70, 100};
    if (nums2[1] > check2 ) {
        cout << "{"<< nums2[1]<<"} + {"<<nums2[3] <<"} = " << nums2[1]+nums2[3] << '\n' ;
    }
    // Ouput
    // "{35} + {70} = 105"

    // Example 2
    int check3 = 25;
    int nums3[] = {20, 25, 30, 70, 100};
    if (nums3[2] > check2 ) {
        cout << "{"<< nums3[2]<<"} + {"<<nums3[3] <<"} = " << nums3[2]+nums3[3] << '\n' ;
    }
    // Ouput
    // "{30} + {70} = 100"
    return 0 ;
}