// 21125096
// Đặng Minh Triết
// 21CTT1

// Test case 1
// Input: 2020 2
// Output: 29

// Test case 2
// Input: 2016 5
// Output: 31

// Test case 3
// Input: 400 2
// Output: 29

#include <iostream>
using namespace std;


int main(){
    cout << "Number days in a month" << endl;
    int y, month;
    cout << "Input Year: ";
    cin >> y;
    cout << "Input month: ";
    cin >> month;
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
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
        cout << "Number of days: " << 31;
    }
    else {
        if (month == 2 && ans){
            cout << "Number of days: " << 29;
        }
        else if (month == 2 && ans == false){
            cout << "Number of days: " << 28;
        }
        else{
            cout << "Number of days: " << 30;
        }
    }
    return 0;
}