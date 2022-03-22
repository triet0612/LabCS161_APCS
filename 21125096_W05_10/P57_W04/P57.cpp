// 21125096
// Đặng Minh Triết
// 21CTT1

// Test case 1
// Input: 12321
// Output: YES

// Test case 2
// Input: 123321
// Output: YES

// Test case 3
// Input: 25837283
// Output: NO

#include "MyFunction.cpp"

int main(){
    int n;
    cin >> n;
    cout << ((check_symetry(n))? "YES": "NO");
    return 0;
}