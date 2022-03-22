// 21125096
// Đặng Minh Triết
// 21CTT1

// Test case 1
// Input: 30.0
// Output: 0.5

// Test case 2
// Input: 75.0
// Output: 0.965926

// Test case 3
// Input: 45.0
// Output: 0.707107

#include <iostream>
#include <math.h>
using namespace std;

int main(){
    float a;
    cout << "Sin of an angle program" << endl << "Input angle: ";    
    cin >> a;   //input angle
    
    float ans = sin(a*M_PI/180);
    
    cout << ans;  //output ans
    return 0;
}