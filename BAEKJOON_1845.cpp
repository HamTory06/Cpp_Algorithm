//
// Created by HamTory on 2023/03/15.
//
#include <iostream>

using namespace std;

int change(int a, int b, int c[]){
    for(int i=a; i<=b; i++){

    }
    return *c;
}

int main(){
    int n;
    int k = 0;
    cin >> n;
    int a[n];
    int b[n];
    for(int i=0; i<n; i++){
        b[i] = i+1;
        cin >> a[i];
    }
    cout << k;
    return 0;
}

// 1 2 3 4 5 6
// (1 4)
// -4 -3 -2 -1 5 6
// (3 5)
// -4 -3 -5 1 2 6