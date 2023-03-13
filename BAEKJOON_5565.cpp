//
// Created by HamTory on 2023/03/13.
//

#include <iostream>

using namespace std;

int main(){
    int n;
    int m[9];
    int sum = 0;
    cin >> n;
    for(int i=0; i<9; i++){
        cin >> m[i];
        sum+=m[i];
    }
    cout << n-sum;
}