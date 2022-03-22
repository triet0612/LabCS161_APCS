// 21125096
// Đặng Minh Triết
// 21CTT1

// Test case 1
// Input: -1 -1 -1
// Output: "This equation is unsolvable"

// Test case 2
// Input: 1 -2 1
// Output: 1

// Test case 3
// Input: 2 -7 5
// Output: 1 2.5


#include <iostream>
#include <math.h>
using namespace std;

int main(){
    cout << "Quadratic equation" << endl;
    float a, b, c;
    cout << "Input a: ";
    cin >> a;
    cout << "Input b: ";
    cin >> b;
    cout << "Input c: ";
    cin >> c;

    float delta = (b*b - 4*a*c);

    if (delta < 0){
        cout << "This equation is unsolvable";
    }
    if (delta == 0){
        cout << -b/(2*a);
    }    
    if (delta > 0){
        cout << (-b - sqrt(delta))/(2*a) << " " << (-b+sqrt(delta))/(2*a);
    }
    return 0;
}