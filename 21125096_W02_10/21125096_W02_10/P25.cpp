// 21125096
// Đặng Minh Triết
// 21CTT1

// Test case 1
// Input: 42 5
// Output: 8.4(km/h) 0.119048(h/km)

// Test case 2
// Input: 22 1.6
// Output: 13.75(km/h) 0.0727273(h/km)

// Test case 3
// Input: 3 2
// Output: 1.5(km/h) 0.666667(h/km)

#include <iostream>
using namespace std;

int main(){
    cout << "Pace and Speed" << endl << "Length (km): ";
    float length, time;
    cin >> length;
    cout << "time (h): ";
    cin >> time;

    float speed = length / time;
    float pace = time / length;
    
    cout << "Speed: " << speed << "(km/h)" << endl;
    cout << "Pace: " << pace << "(h/km)" << endl;
    return 0;
}