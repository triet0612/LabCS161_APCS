// 21125096
// Đặng Minh Triết
// 21CTT1

// Test case 1
// Input: saDDDDvas
// Output: 5

// Test case 2
// Input: AAAAAA
// Output: 6

// Test case 3
// Input: CamelCAse
// Output: 3

#include <bits/stdc++.h>
using namespace std;

int camelcase(string s);

int main(){
    string s;
    getline(cin, s);
    int result = camelcase(s);
    cout << result << "\n";
    return 0;
}

int camelcase(string s){
    int n = s.length();
    int ans = 0;
    for (int i = 1; i < n; i++){
        if (toupper(s[i]) == s[i]){
            ans++;
        }
    }
    ans++;
    return ans;
}
