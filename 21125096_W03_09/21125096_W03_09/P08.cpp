// 21125096
// Đặng Minh Triết
// 21CTT1

// Test case 1
// Input: 3 5
// Output: -1.66667

// Test case 2
// Input: 2 1
// Output: -0.5

// Test case 3
// Input: 13 566
// Output: -43.5385

#include <iostream>
using namespace std;

int main(){
    cout << "Linear equation" << endl;
    float a, b;
    cout << "Input a: ";
    cin >> a;
    cout << "Input b: ";
    cin >> b;
    cout << "Answer: " << -b/a;
    return 0;
}