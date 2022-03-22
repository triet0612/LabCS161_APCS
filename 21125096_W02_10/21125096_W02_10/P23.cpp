// 21125096
// Đặng Minh Triết
// 21CTT1

// Test case 1
// Input: 3 2
// Output: 17.9713

// Test case 2
// Input: 15 6
// Output: 348.804

// Test case 3
// Input: 5 4.5
// Output: 64.3741

#include <iostream>
#include <math.h>
using namespace std;

int main(){
    cout << "Area of shape" << endl << "edge: ";
    float edge, r;
    cin >> edge;
    cout << "r: ";
    cin >> r;

    float ans;
    if (edge == r) {
        ans = 3.14 * pow(r, 2);
    }
    if (r < edge && r > edge * sqrt(3) * 0.5){
        float phi = acos((edge * sqrt(3)) / (2*r));
       	ans = 1.5 * pow(r, 2) *(phi - sin(phi)) + 
	        (3.14 * pow(r,2) * 0.5) + 
	        (0.5 * pow(edge, 2) *sqrt(3) * 0.5 * 3);
    }
    else{
        ans = (3.14 * pow(r,2) * 0.5) + (0.5 * pow(edge, 2) *sqrt(3) * 0.5 * 3);
    }
    
    cout << ans;
    return 0;
}