#include "MyFunction.h"

int max(int n){
    int max = n%10;
    n /= 10;
    while(n != 0){
        if (max < n%10){
            max = n%10;
        }
        n /= 10;
    }
    return max;
}