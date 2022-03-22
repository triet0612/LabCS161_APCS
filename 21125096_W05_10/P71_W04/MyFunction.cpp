#include "MyFunction.h"

bool check_2_k(int n){
    bool ans = true;
    while (n != 1){
        if (n % 2 != 0){
            ans = false;
            break;
        }
        n /= 2;
    }
    return ans;
}