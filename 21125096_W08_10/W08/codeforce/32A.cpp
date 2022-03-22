#include <iostream>
using namespace std;

int main(){
    int n, d;
    cin >> n >> d;
    int arr[1000];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int count = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (abs(arr[i] - arr[j]) <= d && i != j){
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}