// 21125096
// Đặng Minh Triết
// 21CTT1

// Test case 1
// Input: Advanced Program in Computer Science
// Output: Science Computer in Program Advanced

// Test case 2
// Input: reverse string sasdasda
// Output: sasdasda string reverse

// Test case 3
// Input: basdasd   asjdjas j     asdas    
// Output: asdas     j asjdjas   basdasd

#include <iostream>
using namespace std;

int len(char* str);

void swap(char* str, int i, int j);

void reverse_string(char* str, int length);

void reverse_words(char* str);

int main(){
    char str[1000];
    cin.get(str, 1000);
    reverse_words(str);
    cout << str << endl;
    return 0;
}

int len(char* str){
    int ans = 0;
    for (int i = 0; str[i] != '\0'; i++){
        ans = i;
    }
    return ans+1;
}

void swap(char* str, int i, int j){
    char t = str[i];
    str[i] = str[j];
    str[j] = t;
}

void reverse_string(char* str, int length){
    for(int i=0; i<length/2; i++){
        swap(str, i, length-i-1);
    }
}

void reverse_words(char* str){
    int l = len(str);

    reverse_string(str,len(str));

    int start = 0;
    for(int end=0; end < l; end++){
        if(str[end] == ' '){
            reverse_string(&str[start], end-start);
            start = end + 1;
        }
    }
    
    reverse_string(&str[start], l-start);
}