// 21125096
// Đặng Minh Triết
// 21CTT1

// Test case 1
// Input: asdasjdabhbh    asdasda   asdsad
// Output: Asdasjdabhbh Asdasda Asdsad

// Test case 2
// Input: asdhASDASD asdas     asdas fa  Aa
// Output: Asdhasdasd Asdas Asdas Fa Aa

// Test case 3
// Input:       asdasdasdas     
// Output: Asdasdasdas

#include <iostream>
using namespace std;

int str_size(char str[1000]) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        count++;
    }
    return count;
}

void str_normalize(char (&str)[1000]){
    char fin[1000] = {'\0'};
    int len = str_size(str);
    int j = 0;
    for (int i = 0; i < len; i++){
        if (str[i] == ' ' && i != 0 && str[i-1] != ' '){
            fin[j] = str[i];
            j++;
        }
        else if (str[i] != ' '){
            fin[j] = str[i];
            j++;
        }
    }
    int len2 = str_size(fin);
    for (int i = 0; i < 1000; i++){
        str[i] = '\0';
    }
    for (int i = 0; i < len2; i++){
        if (i == 0){
            str[i] = toupper(fin[i]);
        } else if (str[i-1] == ' ' && str[i] != ' '){
            str[i] = toupper(fin[i]);
        }
        else{
            str[i] = tolower(fin[i]);
        }
    }
    for (int i = 1000; str[i] == '\0' || str[i] == ' '; i--){
        str[i] = '\0';
    }
}

int main(){
    char str[1000];
    cin.get(str, 1000, '\n');
    str_normalize(str);
    cout << str << endl;
    return 0;
}