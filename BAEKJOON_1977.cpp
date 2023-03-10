//
// Created by HamTory on 2023/03/10.
//
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n,m;
    cin >> m;
    cin >> n;
    int sum = 0;
    int min = 10001;
    for(int i=m; i<=n; i++){
        if(!remainder(sqrt(i),1.0)){
            sum+=i;
            if(min>i)
                min = i;
        }
    }
    if(min == 10001)
        cout << -1 << endl;
    else {
        cout << sum << endl;
        cout << min << endl;
    }
    return 0;
}
