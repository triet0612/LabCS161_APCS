#include "MyFunction.h"

int get_reverse(int n){
    int r = 0;
    while (n != 0){
        r = r*10 + n%10;
        n /= 10;
    }
    return r;
}

bool check_symetry(int n){
    return (n == get_reverse(n));
}