//
// Created by HamTory on 2023/03/19.
//
#include <iostream>

int main(){
    int n;
    int sum = 0;
    std::cin >> n;
    for(int i=0; i<n; i++){
        int m;
        std::cin >> m;
        if(i == n-1){
            sum+=m;
        } else {
            sum+=(m-1);
        }

    }
    std::cout << sum;
}
