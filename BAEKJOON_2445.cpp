//
// Created by HamTory on 2023/03/17.
//

#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout << "*";
        }
        for(int j=0; j<n*2-i*2-2; j++){
            cout << ' ';
        }
        for(int j=0; j<i+1; j++){
            cout << "*";
        }
        cout << '\n';
    }
    for(int i=1; i<=n-1; i++){
        for(int j=0; j<n-i; j++){
            cout << "*";
        }
        for(int j=0; j<i*2; j++){
            cout << ' ';
        }
        for(int j=0; j<n-i; j++){
            cout << "*";
        }
        cout << '\n';
    }
    return 0;
}
