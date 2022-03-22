// 21125096
// Đặng Minh Triết
// 21CTT1

// Test case 1
// Input: aa
// Output: Empty String

// Test case 2
// Input: baab
// Output: Empty String

// Test case 3
// Input: aaabccddd
// Output: abd

#include <bits/stdc++.h>
using namespace std;

string superReducedString(string s);

int main(){
    string s;
    getline(cin, s);
    cout << superReducedString(s) << endl;
    return 0;
}

string superReducedString(string s){
    int n = s.length();
    for (int i = 1; i < n; i++){
        if (s[i-1] == s[i]){
            s.erase(i-1, 2);
            i = 0;
        }
    }
    if (s == ""){
        s = "Empty String";
    }
    return s;
}