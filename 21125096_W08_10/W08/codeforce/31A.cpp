#include <iostream>
using namespace std;

int main(){
    int n; 
    cin >> n;
    int arr[100];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int a = 0, b = 0, c = 0;
    bool exists = false;
    for (int i = 0; !exists && i < n; i++){
        for (int j = 0; !exists && j < n; j++){
            if (j != i){
                for (int k = j+1; k < n; k++){
                    if (k != i && arr[i] == arr[j] + arr[k]){
                        a = i+1;
                        b = k+1;
                        c = j+1;
                        exists = true;
                        break;
                    }
                }
            }    
        }
    }
    if (exists){
        cout << a << " " << b << " " << c << endl;
    }else{
        cout << -1;
    }
    return 0;
}