// 21125096
// Đặng Minh Triết
// 21CTT1

// Test case 1
// Input: 2020 2 29
// Output: 2020 3 1

// Test case 2
// Input: 2020 2 28
// Output: 2020 2 29

// Test case 3
// Input: 2021 5 30
// Output: 2021 6 1

#include <iostream>
using namespace std;

int main(){
    cout << "Tommorow program" << endl;
    int y, month, day;
    cout << "Input year: ";
    cin >> y;
    cout << "Input month: ";
    cin >> month;
    cout << "Input day: ";
    cin >> day;
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
    if (day == 31){
        if (month == 12){
            y++;
            day = 1;
            month = 1;
        }
        else if (month != 12){
            month++;
            day = 1;
        }
    }
    else{
        if (day == 30){
            day = 1;
            month++;
        }
        else if (day == 28){
            if (ans && month == 2){
                day++;
            }
            else{
                if (month == 2){
                    day = 1;
                    month++;
                }
            }
        }
        else if (day == 29 && month == 2 && ans){
            day = 1;
            month++;
        }
        else{
            day++;
        }
    }
    cout << y << " " << month << " " << day;
    return 0;
}