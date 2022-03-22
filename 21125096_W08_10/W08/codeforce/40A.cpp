#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int x, y;
    cin >> x >> y;
    bool c = (x*y > 0);
    int r_u = ceil(sqrt(x*x+y*y));
    int r_f = floor(sqrt(x*x+y*y));
    if (r_u == r_f) {
        cout << "black";
    }
    else {
        if (c){
            if (r_f % 2 == 0){
                cout << "black" << endl;
            }
            else{
                cout << "white" << endl;
            }
        }
        else {
            if (r_f % 2 == 0){
                cout << "white" << endl;
            }
            else{
                cout << "black" << endl;
            }
        }
    }
}