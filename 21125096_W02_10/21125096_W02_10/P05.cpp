// 21125096
// Đặng Minh Triết
// 21CTT1

// Test case 1
// Input: 9 2
// Output: 9 / 2 = 4.50

// Test case 2
// Input: 113 225
// Output: 113 / 225 = 0.502222

// Test case 3
// Input: 3090 115
// Output: 3090 / 115 = 26.8696

#include <iostream>
using namespace std;

int main(){
    int a, b;
    cout << "Division of 2 numbers program" << endl << "Input 1st number: ";
    cin >> a;   //input a
    cout << "Input 2nd number: ";
    cin >> b;   //input b

    float ans = float(a) / float(b);    //calculate ans
    
    cout << a << " / " << b << " = " << ans;  //output ans
    return 0;
}