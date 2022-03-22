// 21125096
// Đặng Minh Triết
// 21CTT1

// Test case 1
// Input: 9.5 8.5 8.0 0
// Output: "8.6 Passed"

// Test case 2
// Input: 5 5 5 1
// Output: "Student cheated, FAILED"

// Test case 3
// Input: 9.3 2.7 8.9 0
// Output: "7.16 Passed"


#include <iostream>
using namespace std;

int main(){
    cout << "Passed or Failed" << endl;

    float assignment, lab, final_exam, cheating;
    cout << "Assignment: ";
    cin >> assignment;
    cout << "Lab score: ";
    cin >> lab;
    cout << "Final Exam: ";
    cin >> final_exam;
    cout << "Cheating or not (0: no cheat, 1: cheat): ";
    cin >> cheating;

    if (cheating == 1){
        cout << "Student cheated, FAILED";
    }
    else{
        float score = assignment*0.3 + lab*0.3 + final_exam*0.4;
        if (score >= 5){
            cout << score << " Passed";
        }
        else{
            cout << score << " Failed";
        }
    }
    return 0;
}