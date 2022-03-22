#include "array.h"

bool checkpr(int n){
    if (n <= 1){
        return false;
    }
    else{
        for (int i = 2; i <= n-1; i++){
            if (n % i == 0){
                return false;
            }
        }
    }
    return true;
}

void sort(int arr[], int n){
    int i, key, j;
    for (i = 1; i < n; i++){
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void printarr(int arr[], int n){
    for (int i=0; i < n && arr[i] != 0; i++){
        cout << arr[i] << " ";
    }
}

// P258:
//Test case 1
//input: {3,1,22,32,2,5,6}, 7
//output: {2 1 22 32 3 5 6}

//Test case 2
//input: {4,5,6,1,2,3}, 6
//output: {4, 2, 6, 1, 3, 5}

//Test case 3
//input: {22,33,44,55}, 4
//output: {22,33,44,55}

void P258(int arr[], int n){
    int temp[1000];
    int j = 0;
    for (int i=0; i < n; i++){
        if(checkpr(arr[i])){
            temp[j] = arr[i];
            j++;
        }
    }
    sort(temp, j);
    j = 0;
    for (int i=0; i < n; i++){
        if (checkpr(arr[i])){
            arr[i] = temp[j];
            j++;
        }
    }
}

//P264:
// Test case 1
// Input: {}, {5, 12, 44, 52}, {9, 12, 33}, 4, 3
// Output: {5, 9, 12, 12, 33, 44, 52}

// Test case 2
// Input: {}, {0, 0, 1, 1}, {12, 33, 33, 33, 99}, 4, 5
// Output: {0, 0, 1, 1, 12, 33, 33, 33, 99}

// Test case 3
// Input: {}, {22,33,44,55}, {1}, 4, 1
// Output: {1,22,33,44,55}

void P264(int ans[], int arr1[], int arr2[], int n1, int n2){
    int i = 0, j = 0, k = 0;
    while (i < n1){
        ans[k] = arr1[i];
        i++;
        k++;
    }
    while(j < n2){
        ans[k] = arr2[j];
        j++;
        k++;
    }
    sort(ans, n1 + n2);
}

//P269:
// Test case 1
// Input: {1, 2, 33, 45}, 4, 56
// Output: {1, 2, 33, 45, 56}

// Test case 2
// Input: {155, 789, 2555, 9000, 12304}, 5, 5555 
// Output: {155, 789, 2555, 5555, 9000, 12304}

// Test case 3
// Input: {65, 223, 781, 781, 2333, 9834}, 6, 65
// Output: {65, 65, 223, 781, 781, 2333, 9834}

void P269(int arr[], int n, int num){
    arr[n] = num;
    sort(arr, n+1);
}

//P274:
// Test case 1
// Input: {}, {11, 22, 33, 44, 33, 55, 66}, 7
// Output: {11, 22, 33, 44, 55, 66}

// Test case 2
// Input: {}, {1, 2, 3, 2, 4, 6, 6, 5, 11, 7, 51, 3, 4}, 13
// Output: {1, 2, 3, 4, 6, 5, 11, 7, 51}

// Test case 3
// Input: {}, {1, 3, 7, 3, 9, 3}, 6
// Output: {1, 3, 7, 9}

void P274(int ans[], int arr[], int n){
    int index = 0;
    
    for (int i = 0; i < n; i++){
        bool exists = false;
        for (int j = 0; j < n; j++){
            if (arr[i] == ans[j]){
                exists = true;
            }
        }
        if (!exists){
            ans[index] = arr[i];
            index++;
        }
    }
}

// P191:
// Test case 1
// Input: {}, {123, 422, 3, 231, 222, 123, 556}, 7
// Output: {422, 231}

// Test case 2
// Input: {}, {56, 72, 88, 93, 41, 23, 44, 231}, 8
// Output: {93}

// Test case 3
// Input: {}, {5, 6, 5, 6, 5, 6, 5}, 7
// Output: {6, 6, 6}

void P191(int ans[], int arr[], int n){
    int j = 0;
    for (int i = 1; i < n-1; i++){
        if (arr[i] > arr[i-1] && arr[i] > arr[i+1]){
            ans[j] = arr[i];
            j++;
        }
    }
}
