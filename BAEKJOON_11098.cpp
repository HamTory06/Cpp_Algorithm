//
// Created by HamTory on 2023/03/10.
//

#include <iostream>
#include <string>

using namespace std;

struct member{
    long price;
    string name;
};

int main(){
    int n;
    int p;
    cin >> n;
    member savemember[n];
    for(int i=0; i<n; i++){
        cin >> p;
        member FootballPlayer[p];
        savemember[i] = {0L,"name"};
        for(int j=0; j<p; j++){
            FootballPlayer[j] = {0,"name"};
            string name;
            long price;
            cin >> price;
            cin >> name;
            FootballPlayer[j] = {price,name};
            long max = 0;
            for(int k=0; k<p; k++){
                if(max<FootballPlayer[k].price){
                    max = FootballPlayer[k].price;
                    savemember[i] = {max,FootballPlayer[k].name};
                }
            }
        }
    }

    for(int i=0; i<n; i++){
        cout << savemember[i].name << endl;
    }
}