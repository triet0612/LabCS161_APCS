// 21125096
// Đặng Minh Triết
// 21CTT1

// Test case 1
// Input: 759155
// Output: YES

// Test case 2
// Input: 25837283
// Output: NO

// Test case 3
// Input: 31
// Output: YES

#include "MyFunction.cpp"

int main(){
    int n;
    cin >> n;
    cout << ((check_all_odd(n))? "YES": "NO");
    return 0;
}