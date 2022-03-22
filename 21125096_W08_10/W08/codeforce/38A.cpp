#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int d[100];
    for (int i = 1; i <= n-1; i++){
        cin >> d[i];
    }
    int a, b;
    cin >> a >> b;
    int ans = 0;
    for (int i = a; i < b; i++){
        ans += d[i];
    }
    cout << ans << endl;
    return 0;
}