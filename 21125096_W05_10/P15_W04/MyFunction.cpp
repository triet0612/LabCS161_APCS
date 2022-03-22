#include "MyFunction.h"

float sum(int n){
    float s1 = 0;
    float ans = 0;
    for (int i = 1; i <= n; i++){
        s1 += i;
        ans += 1/s1;
    }
    return ans;
}