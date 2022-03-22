#include "MyFunction.h"

bool check_descend(int n){
    int temp = n % 10;
    bool ans = true;
    while(n != 0){
        if (temp > (n % 10)){
            ans = false;
            break;
        }
        temp = n % 10;
        n /= 10;
    }
    return ans;
}