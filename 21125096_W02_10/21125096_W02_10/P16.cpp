// 21125096
// Đặng Minh Triết
// 21CTT1

// Test case 1
// Input: 12345
// Output: 5

// Test case 2
// Input: 34222
// Output: 3

// Test case 3
// Input: 35798
// Output: 2

#include <iostream>
#include <math.h>
using namespace std;

int main(){
    cout << "Vehicle plate number" << endl << "Plate number: ";
    int num;
    cin >> num;

    int ans = ((num%10)+
       (num%100 - num%10)/10 +
       (num%1000 - num%100)/100 +
       (num%10000 - num%1000)/1000 +
       (num%100000 - num%10000)/10000)%10;

    cout << ans;
    return 0;
}