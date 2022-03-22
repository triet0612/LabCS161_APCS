// 21125096
// Đặng Minh Triết
// 21CTT1

#include "array.cpp"
#include <iostream>
using namespace std;

int main(){
    int ans[100] = {0};
    int arr[] = {1, 2, 3, 2, 4, 6, 6, 5, 11, 7, 51, 3, 4};
    P274(ans, arr, 13);
    printarr(ans, 13);
    return 0;
}
