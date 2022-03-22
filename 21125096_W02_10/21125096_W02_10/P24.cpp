// 21125096
// Đặng Minh Triết
// 21CTT1

// Test case 1
// Input: 40 100000
// Output: 250000

// Test case 2
// Input: 65 130000
// Output: 200000

// Test case 3
// Input: 70 379000
// Output: 541429

#include <iostream>
using namespace std;

int main(){
    float a, b;
    cout << "Refund discount" << endl << "Refund: ";    
    cin >> a;
    cout << "Max: ";
    cin >> b;
    
    float ans = b*100/a;
    
    cout << ans;
    return 0;
}