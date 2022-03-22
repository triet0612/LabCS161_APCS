#include "MyFunction.h"

bool check_all_odd(int n){
    bool ans = true;
    while(n != 0){
        if ((n%10) % 2 == 0){
            ans = false;
            break;
        }
        n /= 10;
    }
    return ans;
}