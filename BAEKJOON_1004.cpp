//
// Created by HamTory on 2023/03/16.
//
#include <iostream>
#include <cmath>

using namespace std;

double Pythagoras(int x, int y, int X, int Y);

int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int start[2];
        int end[2];
        int enter = 0;
        cin >> start[0] >> start[1];
        cin >> end[0] >> end[1];
        int n;
        cin >> n;
        int planet[n][3];
        int sum[n];
        for(int k=0; k<n; k++){
            sum[k] = 0;
            for(int j=0; j<3; j++){
                cin >> planet[k][j];
            }
        }
        for(int j=0; j<n; j++){
            if(Pythagoras(start[0],start[1],planet[j][0],planet[j][1])</*원크기*/planet[j][2] && Pythagoras(end[0],end[1],planet[j][0],planet[j][1])</*원크기*/planet[j][2]){

            } else if(Pythagoras(start[0],start[1],planet[j][0],planet[j][1])</*원크기*/planet[j][2]){
                enter++;
            } else if(Pythagoras(end[0],end[1],planet[j][0],planet[j][1])</*원크기*/planet[j][2]){
                enter++;
            }
        }
        cout << enter << '\n';
    }
}

double Pythagoras(int x, int y, int X, int Y){
    return sqrt(pow((x-X),2) + pow((y-Y),2));
}