//
// Created by HamTory on 2023/03/13.
//

#include <iostream>

using namespace std;

int main(){
    int a,b;
    for(int i=0; ;i++){
        cin >> a;
        cin >> b;
        if(a+b == 0)
            return 0;
        cout << a+b << '\n';
    }
}