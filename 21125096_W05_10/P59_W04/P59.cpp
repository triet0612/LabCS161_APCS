// 21125096
// Đặng Minh Triết
// 21CTT1

// Test case 1
// Input: 9765531
// Output: YES

// Test case 2
// Input: 97655319
// Output: NO

// Test case 3
// Input: 123321
// Output: NO

#include "MyFunction.cpp"

int main(){
    int n;
    cin >> n;
    cout << ((check_descend(n))? "YES": "NO");
    return 0;
}