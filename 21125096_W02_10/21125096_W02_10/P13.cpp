// 21125096
// Đặng Minh Triết
// 21CTT1

// Test case 1
// Input: 3.00 4.00 5.00
// Output: 12 6

// Test case 2
// Input: 14 25 33
// Output: 72 161.666

// Test case 3
// Input: 24335 53698 78033
// Output: "This is not a triangle"

#include <iostream>
#include <math.h>
using namespace std;

int main(){
    float a, b, c;
    cout << "Triangle" << endl << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;

    if (a+b > c && a+c > b && b+c > a){
        float P = a + b + c;
        float p = P/2;
        float S = sqrt(p*(p-a)*(p-b)*(p-c));
        cout << P << " " << S;
    }
    else{
        cout << "This is not a triangle";
    }
    return 0;
}