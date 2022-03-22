// 21125096
// Đặng Minh Triết
// 21CTT1

// Test case 1
// Input: 12 20
// Output: 4

// Test case 2
// Input: 24 30
// Output: 6

// Test case 3
// Input: 12 1
// Output: 1

#include "MyFunction.cpp"

int main(){
    int m, n;
    cin >> m >> n;
    cout << get_gcd(m, n);
    return 0;
}