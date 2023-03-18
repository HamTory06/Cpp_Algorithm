//
// Created by HamTory on 2023/03/18.
//

#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    int answer[t];
    for(int i=0; i<t; i++) {
        long a, b;
        cin >> a >> b;
        int mul = 1;
        for (int i = 0; i < b; i++) {
            mul = (mul * a) % 10;
//            cout << mul << ' ';
        }
        if (mul == 0)
            answer[i] = 10;
        else
            answer[i] = mul;
    }
    for(int i=0; i<t; i++){
        cout << answer[i] << '\n';
    }
    return 0;
}
