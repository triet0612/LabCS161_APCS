// 21125096
// Đặng Minh Triết
// 21CTT1

// Test case 1
// Input: hello world
// Output: dlrow olleh

// Test case 2
// Input: abcdedf aaa
// Output: aaa fdedcba

// Test case 3
// Input: my function
// Output: noitcnuf ym

#include <iostream>
using namespace std;

void reverse(char (&s)[1000]);
int sizes(char s[1000]);

int main(){
    char s[1000];
    cin.get(s, 100, '\n');
    reverse(s);
    cout << s;
    return 0;
}
void reverse(char (&s)[1000]){
    char r[1000];
    int size = sizes(s);
    for (int i = 0; i < size; i++){
        r[size-i-1] = s[i];
    }
    for (int i = 0; i < size; i++){
        s[i] = r[i];
    }
}

int sizes(char s[1000]){
    int size = 0;
    for (int i = 0; i < 1000; i++){
        if (s[i] == '\0'){
            break;
        }
        else{
            size++;
        }
    }
    return size;
}
