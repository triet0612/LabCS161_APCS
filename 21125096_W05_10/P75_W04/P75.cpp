// 21125096
// Đặng Minh Triết
// 21CTT1

// Test case 1
// Input: 10 1 1970
// Output: 10

// Test case 2
// Input: 5 2 2012
// Output: 15376

// Test case 3
// Input: 10 5 1971
// Output: 495

#include "MyFunction.cpp"

int main(){
    int d,m,y;
    cin >> d >> m >> y;
    cout << absolute_day(d,m,y);
    return 0;
}