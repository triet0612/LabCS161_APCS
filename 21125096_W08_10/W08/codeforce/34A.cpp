#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[100];
    int i1, i2;
    
    for (int i = 0; i < n; i++){
        cin >> arr[i];        
    }
    int min = abs(arr[0]-arr[1]);
    i1 = 0;
    i2 = 1;
    for (int i = 0; i < n; i++){
        int j = i+1;
        if (j == n){
            j = 0;
        }
        if (abs(arr[i] - arr[j]) < min){
            i1 = i;
            i2 = j;
            min = abs(arr[i] - arr[j]);
        }
    }
    i1++;
    i2++;
    if (i1 > n){
        i1 = 0;
    }
    if (i2 > n){
        i2 = 0;
    }
    cout << i1 << " " << i2 << endl;
}