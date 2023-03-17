//
// Created by HamTory on 2023/03/17.
//
#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int s;
        cin >> s;
        int sum = s;
        int n;
        cin >> n;
        for(int j=0; j<n; j++){
            int q;
            int p;
            cin >> q >> p;
            sum+=q*p;
        }
        cout << sum << '\n';
    }
}