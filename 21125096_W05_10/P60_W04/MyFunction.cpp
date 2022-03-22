#include "MyFunction.h"

int get_gcd(int m, int n){
    int big = max(m, n);
    while(big > 0){
        if (m % big == 0 && n % big == 0){
            break;
        }
        big--;
    }
    return big;
}