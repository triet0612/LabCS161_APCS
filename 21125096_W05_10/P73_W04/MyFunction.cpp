#include "MyFunction.h"

bool check_leap_year(int year){
    return (year % 4 == 0 && year % 100 != 0 || year % 400 == 0);
}

int days_in_month(int m, int y){
    if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
        return 31;
    if (m == 4 || m == 6 || m == 9 || m == 11)
        return 30;
    if (m == 2){
        if(check_leap_year(y))
            return 29;
        else
            return 28;
    }
}

int diff_day(int d1, int m1, int y1, int d2, int m2, int y2){
    if (y1 == y2){
        if (m1 == m2){
            if (d1 == d2){
                return 0;
            }
            else return abs(d1 - d2);
        }
        else if (m1 < m2){
            int ans = 0;
            for (int i = m1; i < m2; i++){
                ans += days_in_month(i, y1);
            }
            if (d1 == d2){
                return ans;
            }
            else if (d1 < d2){
                ans += d2 - d1;
                return ans;
            }
            else {
                ans -= d1 - d2;
                return ans;
            }
        }
        else{
            int ans = 0;
            for (int i = m2; i < m1; i++){
                ans += days_in_month(i, y1);
            }
            if(d1 == d2){
                return ans;
            }
            else if (d2 < d1){
                ans += d1-d2;
                return ans;
            }
            else{
                ans -= d2-d1;
            }
        }
    }
    else if (y1 < y2){
        int temp = 0;
        for (int i = y1; i < y2; i++){
            if (check_leap_year(i)){
                temp += 366;
            }
            else{
                temp += 365;
            }
        }
        if (m1 == m2){
            if (d1 == d2){
                return temp;
            }
            else if (d1 < d2){
                return temp + (d2 - d1);
            }
            else{
                return temp - (d1 - d2);
            }
        }
        else if (m1 < m2){
            int ans = 0;
            for (int i = m1; i < m2; i++){
                ans += days_in_month(i, y2);
            }
            if (d1 == d2){
                return temp + ans;
            }
            else if (d1 < d2){
                ans += d2 - d1;
                return temp + ans;
            }
            else{
                ans -= d1-d2;
                return ans+temp;
            }
        }
        else{
            int ans=0;
            for(int i = m2; i < m1; i++)
                ans += days_in_month(i,y2);
                
            if(d1 == d2)
                return temp-ans;
            else if(d2 < d1){
                ans += d1-d2;
                return temp-ans;
            }
            else{
                ans -= d2-d1;
                return temp-ans;
            }
        }
    }
    else{
        int temp = 0;
        for (int i = y2; i < y1; i++){
            if (check_leap_year(i)){
                temp += 366;
            }
            else{
                temp += 365;
            }
        }
        if (m1 == m2){
            if (d1 == d2){
                return temp;
            }
            else if (d2 < d1){
                return temp + d1 - d2;
            }
            else{
                return temp - (d2 - d1);
            }
        }
        else if (m2 < m1){
            int ans = 0;
            for (int i = m2; i < m1; i++){
                ans += days_in_month(i, y1);
            }
            if (d1 == d2){
                return temp + ans;
            }
            else if (d2 < d1){
                ans += (d1 - d2);
                return ans + temp;
            }
            else{
                ans -= d2-d1;
                return ans+temp;
            }
        }
        else
        {
            int ans=0;
            for(int i=m1; i<m2; i++)
            ans += days_in_month(i,y1);
                
            if(d1==d2)      // for same day, diff year and diff month
                return temp-ans;
            else if(d1<d2)
            {
                ans += d2-d1;
                return temp-ans;
            }
            else
            {
                ans -= d1-d2;
                return temp-ans;
            }
        }
    }
}