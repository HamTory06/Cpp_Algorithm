//
// Created by HamTory on 2023/03/11.
//

#include <iostream>

using namespace std;

struct dataclass{
    string name;
    int day;
    int month;
    int year;
    int sum;
};

int main(){
    int n;
    cin >> n;
    dataclass data[n];
    for(int i=0; i<n; i++){
        string name;
        int day;
        int month;
        int year;
        cin >> name;
        cin >> day;
        cin >> month;
        cin >> year;
        data[i] = {name,day,month,year,(31-day)+(12-month)*12+(2010-year)*365};
    }
    dataclass maxdata = {"name",0,0,0,0};
    dataclass mindata = {"name",0,0,0,1000000000};
    for(int i=0; i<n; i++){
        if(maxdata.sum < data[i].sum){
            maxdata = data[i];
        }
        if(mindata.sum > data[i].sum){
            mindata = data[i];
        }
    }
    cout << mindata.name << endl;
    cout << maxdata.name << endl;
    return 0;
}