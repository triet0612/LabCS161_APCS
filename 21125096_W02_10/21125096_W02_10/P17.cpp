// 21125096
// Đặng Minh Triết
// 21CTT1

// Test case 1
// Input: 2361000
/*  
    Output: 500000:4
            200000:1
            100000:1
            50000:1
            20000:0
            10000:1
            5000:0
            2000:0
            1000:1
*/

// Test case 2
// Input: 35712000
/* 
    Output: 500000: 71
            200000: 1 
            100000: 0 
            50000: 0  
            20000: 0
            10000: 1
            5000: 0
            2000: 1
            1000: 0
*/

// Test case 3
// Input: 1865000
/* 
    Output: 500000: 3
            200000: 1
            100000: 1
            50000: 1
            20000: 0
            10000: 1
            5000: 1
            2000: 0
            1000: 0
*/

#include <iostream>
using namespace std;

int main(){
    cout << "Cash change program" << endl << "Money: ";
    int money;
    cin >> money;

    int a[9] = {0,0,0,0,0,0,0,0,0};
    
    while(money > 0){
        if(money >= 500000){
            money -= 500000;
            a[0] += 1;
        }
        if(money >= 200000 && money < 500000){
            money -= 200000;
            a[1] += 1;
        }
        if(money >= 100000 && money < 200000){
            money -= 100000;
            a[2] += 1;
        }
        if(money >= 50000 && money < 100000){
            money -= 50000;
            a[3] += 1;
        }
        if(money >= 20000 && money < 50000){
            money -= 20000;
            a[4] += 1;
        }
        if(money >= 10000 && money < 20000){
            money -= 10000;
            a[5] += 1;
        }
        if(money >= 5000 && money < 10000){
            money -= 5000;
            a[6] += 1;
        }
        if(money >= 2000 && money < 5000){
            money -= 2000;
            a[7] += 1;
        }
        if(money >= 1000 && money < 2000){
            money -= 1000;
            a[8] += 1;
        }
    }
        cout << "500000: " << a[0] << endl << 
       	        "200000: " << a[1] << endl << 
       	        "100000: " << a[2] << endl << 
                "50000: " << a[3] << endl <<
                "20000: " << a[4] << endl <<
                "10000: " << a[5] << endl <<
                "5000: " << a[6] << endl << 
                "2000: " << a[7] << endl << 
                "1000: " << a[8] << endl;
    return 0;
}