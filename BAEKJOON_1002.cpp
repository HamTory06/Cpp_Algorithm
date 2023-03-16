//
// Created by HamTory on 2023/03/15.
//

#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int t;
    cin >> t;
    int b;
    int c;
    int answer[t];
    for(int i=0; i<t; i++){
        int a[6];
        for(int j=0; j<6; j++){
            cin >> a[j];
        }
        if(a[2] >= a[5]){
            b = a[2]; //max
            c = a[5]; //min
        } else{
            b = a[5]; //min
            c = a[2]; //max
        }
//        (x1-x2) * (x1-x2) + (y1-y2) * (y1-y2);
//        sqrt(pow(abs(a[0] - a[3]),2) + pow(abs(a[1] - a[4]),2))
        double pointDistance = sqrt(pow((a[0]-a[3]),2) + pow((a[1]-a[4]), 2)); //조규현과 백승환의 거리
        int addRange = a[2] + a[5]; //조규현과 백승환의 사거리 합

        if(a[0] == a[3] && a[1] == a[4] && a[2] == a[5]){
            answer[i] = -1;
        } else if(pointDistance > b){ //외접
            if(pointDistance == addRange){
                answer[i] = 1;
            }  else if(pointDistance > addRange){
                answer[i] = 0;
            } else {
                answer[i] = 2;
            }
        } else { //내접
            if(b > pointDistance+c){
                answer[i] = 0;
            } else if(b == pointDistance+c){
                answer[i] = 1;
            } else {
                answer[i] = 2;
            }
        }
    }

    for(int i=0; i<t; i++){
        cout << answer[i] << '\n';
    }
    return 0;
}
//3 0 3 4 0 3