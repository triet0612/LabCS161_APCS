// 21125096
// Đặng Minh Triết
// 21CTT1

// Test case 1
// Input: 1500000 1 2
// Output: 1.53e+06

// Test case 2
// Input: 1500000 2 2
// Output: 1.5606e+06

// Test case 3
// Input: 1500000 4 2
// Output: 1.62365e+06

#include <iostream>
#include <math.h>
using namespace std;

int main(){
    cout << "Bank interest rate" << endl;
    float money, interest, month;
    cout << "Input money: ";
    cin >> money;
    cout << "Month: ";
    cin >> month;
    cout << "Interest: ";
    cin >> interest; 
    cout << "Money bank have to pay: " << money*pow((1+ (interest/100)), month);
    return 0;
}