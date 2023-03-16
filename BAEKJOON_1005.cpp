//
// Created by HamTory on 2023/03/16.
//
#include <iostream>

using namespace std;

struct a{
    int main;
    int delay;
    int list[];
};

int main(){
    int t;
    int n;
    int k;
    cin >> t;
    int d[t];
    int x[t];
    int y[t];
    int w[t];
    int sum = 0;
    for(int i=0; i<t; i++){
        cin >> n >> k;
        for(int j=0; j<n; j++){
            cin >> d[j];
        }
        for(int j=0; j<n; j++){
            cin >> x[j] >> y[j];
        }
        cin >> w[i];
    }
}