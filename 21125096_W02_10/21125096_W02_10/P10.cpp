// 21125096
// Đặng Minh Triết
// 21CTT1

// Test case 1
// Input: 1000 1211
// Output: 211

// Test case 2
// Input: 1241 2339
// Output: 1098

// Test case 3
// Input: 24335 53698
// Output: 29363

#include <iostream>
using namespace std;

int main(){
    int first, second;
    cout << "Electricity program" << endl << "1st electricity: ";
    cin >> first;
    cout << "2nd electricity: ";
    cin >> second;

    int ans = second - first;

    cout << ans;
    return 0;
}