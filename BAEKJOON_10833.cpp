//
// Created by HamTory on 2023/03/14.
//

#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int leftoverApple = 0;
    for(int i=0; i<n; i++){
        int apple;
        int student;
        cin >> student;
        cin >> apple;
        leftoverApple+=(apple%student);
    }
    cout << leftoverApple << endl;

    return 0;
}