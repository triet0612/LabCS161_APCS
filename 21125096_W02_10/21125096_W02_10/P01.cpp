// 21125096
// Đặng Minh Triết
// 21CTT1

// Test case 1
// Input: 3 5
// Output: 3 + 5 = 8

// Test case 2
// Input: 7 9
// Output: 7 + 9 = 16

// Test case 3
// Input: 116 235
// Output: 116 + 235 = 351

#include <iostream>
using namespace std;

int main(){
    int a, b;
    cout << "Sum of 2 numbers program" << endl << "Input 1st number: ";    
    cin >> a;   //input a
    cout << "Input 2nd number: ";
    cin >> b;   //input b
    
    int ans = a + b;    //calculate ans
    
    cout << a << " + " << b << " = " << ans;  //output ans
    return 0;
}