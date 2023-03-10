//
// Created by HamTory on 2023/03/09.
//
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main(){

    int a = 0;
    int b = 0;
    cin >> a;
    cin >> b;
    string str_a[4];
    string str_b[4];

    for(int i = 2; i>=0; i--){
        str_a[abs(i-2)] = to_string(a)[i];
        str_b[abs(i-2)] = to_string(b)[i];
    }

    stringstream int_a;
    stringstream int_b;

    for(const auto& str: str_a){
        int_a << str;
    }
    string result1 = int_a.str();
    for(const auto& str: str_b){
        int_b << str;
    }
    string result2 = int_b.str();
    if(stoi(result1) > stoi(result2)){
        cout << result1;
    } else {
        cout << result2;
    }
    return 0;
}
