#include "MyFunction.h"

bool check_leap_year(int y){
    return (y % 4 == 0 && y % 100 != 0 || y % 400 == 0);
}
int days_in_month(int m, int y){
    if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12){
        return 31;
    }
    else if (m == 4 || m == 6 || m == 9 || m == 11){
        return 30;
    }
    else if (m == 2){
        if (check_leap_year(y)){
            return 29;
        }
        else{
            return 28;
        }
    }
}
int days_in_year(int y){
    if (check_leap_year(y)){
        return 366;
    }
    else{
        return 365;
    }
}
int day_index(int d, int m, int y){
    int ans = 0;
    for (int i = 0; i < m; i++){
        ans += days_in_month(i, y);
    }
    return ans + d;
}
int absolute_day(int d, int m, int y){
    int ans = 0;
    for (int i = 1970; i < y; i++){
        ans += days_in_year(i);
    }
    return ans + day_index(d,m,y);
}