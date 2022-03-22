// 21125096
// Đặng Minh Triết
// 21CTT1

// Test case 1
// Input: 5
// Output: 1.67

// Test case 2
// Input: 12
// Output: 1.85

// Test case 3
// Input: 31
// Output: 1.94

#include "MyFunction.cpp"

int main(){
    float n;
    cin >> n;
    cout << fixed << setprecision(2) << sum(n);
    return 0;
}