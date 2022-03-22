#include <bits/stdc++.h>
using namespace std;

string BerOSfile(string s);

int main(){
    string s;
    getline(cin, s);
    cout << BerOSfile(s) << endl;
    return 0;
}

string BerOSfile(string s){
    int n = s.length();
    for (int i = 0; i < n; i++){
        if (s[i-1] == s[i] && s[i] == '/'){
            s.erase(i-1, 1);
            i = 0;
        }
    }
    n = s.length();
    for (int i = n-1; s[i] == '/'; i++){
        s.erase(i, 1);
    }
    if (s == "\0"){
        s = "/";
    }
    return s;
}