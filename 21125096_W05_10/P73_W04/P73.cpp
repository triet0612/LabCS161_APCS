// 21125096
// Đặng Minh Triết
// 21CTT1

// Test case 1
// Input: 20 11 2019 25 11 2019
// Output: 5

// Test case 2
// Input: 20 11 2019 25 11 2014
// Output: 1821

// Test case 3
// Input: 5 11 2019 23 2 2015
// Output: 1716

#include "MyFunction.cpp"

int main(){
    int d1, m1, y1, d2, m2, y2;
    cin >> d1 >> m1 >> y1 >> d2 >> m2 >> y2;
    cout << diff_day(d1, m1, y1, d2, m2, y2);
    return 0;
}