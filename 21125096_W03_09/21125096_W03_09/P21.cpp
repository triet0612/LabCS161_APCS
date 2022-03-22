// 21125096
// Đặng Minh Triết
// 21CTT1

// Test case 1
// Input: 10.25
// Output: 10.5

// Test case 2
// Input: 8.13
// Output: 8

// Test case 3
// Input: 7.27413
// Output: 7.5

#include <iostream>
#include <math.h>
using namespace std;

int main(){
    cout << "Rounded number" << endl;
    float a;
    cin >> a;
    float integer_part = floor(a);
    float frac_part = a - integer_part;

    if (frac_part >= 0.5){
        if (frac_part - 0.5 < 0.25){
            cout << integer_part + 0.5;
        }
        else{
            cout << integer_part + 1;
        }
    }
    else if (frac_part <0.5){
        if (0.5 - frac_part <= 0.25){
            cout << integer_part + 0.5;
        }
        else{
            cout << integer_part;
        }
    }
    
    return 0;
}