// 21125096
// Đặng Minh Triết
// 21CTT1

// Test case 1
// Input: 123123123
// Output: 123,123,123

// Test case 2
// Input: 1231221523135235
// Output: 1,231,221,523,135,235

// Test case 3
// Input: 1234
// Output: 1,234

#include <iostream>
using namespace std;

int size(char str[1000]);
void format_number(char (&str)[1000]);

int main(){
    char number[1000] = {'\0'};
    cin.get(number, 1000, '\n');
    format_number(number);
    cout << number;
    return 0;
}

int size(char str[1000]){
    int ans = 0;
    for (int i = 0; i < 1000; i++){
        if (str[i] == '\0') break;
        ans++;        
    }
    return ans;
}

void format_number(char (&str)[1000]){
    int s = size(str);
    char temp[1000] = {'\0'};
    int index = 0;
    int count = 0;
    for (int i = s-1; i >= 0; i--){
        if (count == 3){
            temp[index] = ',';
            index++;
            count = 0;
        }
        temp[index] = str[i];
        count++;
        index++;
    }
    int s2 = size(temp);
    int d = 0;
    for (int i = s2-1; i >= 0; i--){
        str[d] = temp[i];
        d++;
    }
}
