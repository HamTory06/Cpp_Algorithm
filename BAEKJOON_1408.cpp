//
// Created by HamTory on 2023/03/11.
//


#include "iostream"
#include "iomanip"

using namespace std;

int main(){
    int currentTimeHour;
    int currentTimeMinute;
    int currentTimeSecond;
    int startTimeHour;
    int startTimeMinute;
    int startTimeSecond;


    scanf("%d:%d:%d",&currentTimeHour,&currentTimeMinute,&currentTimeSecond);
    scanf("%d:%d:%d",&startTimeHour,&startTimeMinute,&startTimeSecond);


    int sumTime = currentTimeHour*3600 + currentTimeMinute*60 + currentTimeSecond;
    int startTime = startTimeHour*3600 + startTimeMinute*60 + startTimeSecond;

    if(startTime > sumTime){
        int Time = startTime - sumTime;
        int Hour = Time/3600;
        Time-=(Hour*3600);
        int Minute = Time/60;
        Time-=(Minute*60);
        int Second = Time;
        cout << setw(2) << setfill('0') << Hour << ":" << setw(2) << setfill('0') << Minute << ":" << setw(2) << setfill('0') << Second;
    } else {
        int Time = 3600*24 - sumTime + startTime;
        int Hour = Time/3600;
        Time-=(Hour*3600);
        int Minute = Time/60;
        Time-=(Minute*60);
        int Second = Time;
        cout << setw(2) << setfill('0') << Hour << ":" << setw(2) << setfill('0') << Minute << ":" << setw(2) << setfill('0') << Second;
    }


    return 0;
}