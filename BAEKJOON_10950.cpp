//
// Created by HamTory on 2023/03/13.
//


#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int answer[n];
    int a,b;
    for(int i=0 ;i<n; i++){
        cin >> a >> b;
        answer[i] = a+b;
    }
    for(int i=0; i<n; i++){
        cout << answer[i] << '\n';
    }
}