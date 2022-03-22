// 21125096
// Đặng Minh Triết
// 21CTT1

// Test case 1
// Input: 2 7 5 12
// Output: Max: 12 Min: 2

// Test case 2
// Input: 3 3 3 3
// Output: Max: 3 Min: 3

// Test case 3
// Input: 12 13 12 14
// Output: Max: 14 Min: 12

#include <iostream>
using namespace std;

int main(){
    cout << "Min - Max Program" << endl;
    int num;
    cin >> num;
    int min = num;
    int max = num;
    for (int i = 0; i < 3; i++){
        cin >> num;
        if (min > num){
            min = num;
        }
        if (max < num){
            max = num;
        }
    }
    cout << "Max: " << max << endl << "Min: " << min;
    return 0;
}