// 21125096
// Đặng Minh Triết
// 21CTT1

// Test case 1
// Input: 2012
// Output: Is a leap year

// Test case 2
// Input: 1600
// Output: Is a leap year

// Test case 3
// Input: 1500
// Output: Is not a leap year


#include <iostream>
using namespace std;

int main(){
    cout << "Leap Year" << endl;
    cout << "Input year: ";
    int y;
    cin >> y;
    bool ans;
    if (y % 4 != 0){
        ans = false;
    }
    else if (y % 100 != 0){
        ans = true;
    }
    else if (y % 400 != 0){
        ans = false;
    }
    else{
        ans = true;
    }
    if (ans){
        cout << "Is a leap year";
    }
    else{
        cout << "Is not a leap year";
    }
    return 0;
}