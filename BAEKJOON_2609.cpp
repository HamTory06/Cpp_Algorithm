//
// Created by HamTory on 2023/03/12.
//

#include <iostream>

using namespace std;

int Euclidean(int a, int b);

int main(){
    int n,m;
    cin >> n >> m;
    int b; // 최소공약수
    cout << Euclidean(n,m) << endl;
    cout << n*m / Euclidean(n,m);
}

int Euclidean(int a, int b){
    int c; //나머지
    while(b){
        c = a%b;
        a = b;
        b = c;
    }
    return a;
}
