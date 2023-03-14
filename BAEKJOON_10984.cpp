//
// Created by HamTory on 2023/03/13.
//
#include <iostream>

using namespace std;

int main(){
    int t; //학기
    cin >> t;
    for(int i=0; i<t; i++){
        int a;
        cin >> a;
        int b[a];
        double c[a];
        double fsum[t];
        int sum[t]; //sum
        sum[i] = 0;
        fsum[i] = 0;
        for(int j=0; j<a; j++){
            cin >> b[j];
            sum[i]+=b[j];
            cin >> c[j];
        }
        cout << '\n';
        for(int j=0; j<a; j++){
            fsum[i]+=static_cast<double>(b[j])/sum[i]*c[j];
        }
        printf("%d %.1lf\n",sum[i],fsum[i]);
    }
    return 0;
}

