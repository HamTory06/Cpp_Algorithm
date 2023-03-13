//
// Created by HamTory on 2023/03/13.
//

#include <iostream>

using namespace std;

int main(){
    int n = 0;
    cin >> n;
    long a[n];
    a[0] = 0;
    a[1] = 1;
    for(int i=2; i<=n; i++){
        a[i] = a[i-1] + a[i-2];
    }
    cout << a[n];
    return 0;
}