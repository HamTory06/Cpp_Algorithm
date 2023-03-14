//
// Created by HamTory on 2023/03/14.
//

#include "iostream"

using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            cout << " ";
        }
        for(int j=n*2-i*2-1; j>0; j--){
            cout << "*";
        }
        cout << '\n';
    }
}