import java.io.*;
import java.util.*;

enum Situation{day , month ,year ,good}
public class Solution {
    
    public static Situation FindSituation(int day , int month ,int year,int day_ , int month_ ,int year_){
        if(year!=year_){
            if(year_<= year)return Situation.good;
            return Situation.year;
        }
        else if(month!=month_){
            if(month_<= month)return Situation.good;
            return Situation.month;
        }
        else {
            if(day_<= day)return Situation.good;
            else return Situation.day;
        }
    }
    
    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
         long ans = 0;
        int     day = 0,
                month = 0,
                year = 0,
                day_ = 0,
                month_ = 0,
                year_ = 0;
        Scanner scan = new Scanner(System.in);
        day_ = scan.nextInt();
        month_ = scan.nextInt();
        year_ = scan.nextInt();
        day = scan.nextInt();
        month = scan.nextInt();
        year = scan.nextInt();

        Situation mSituation =
            FindSituation(day,month,year,day_,month_,year_);
        System.out.println("mSituation: " + mSituation);
        if (mSituation==Situation.day){ans = 15 * (day_ - day);}
        else if (mSituation==Situation.month){ans = 500 * (month_ - month);}
        else if (mSituation==Situation.year){ans = 10000;}
        else {ans = 0;}
        if(ans < 0){ans = 0;}
        System.out.println(ans);

    }
}

