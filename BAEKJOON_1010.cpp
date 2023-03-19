//
// Created by HamTory on 2023/03/19.
//
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    long long sum = 1;
    if(n == 1){
        cout << m << '\n';
    } else {
        for(int i=1; i<=m-n+1; i++) {
            sum*=i;
        }
        cout << sum;
    }
}