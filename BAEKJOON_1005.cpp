#include <iostream>

using namespace std;


int main() {
    int t;
    cin >> t;
    for(int i=0; i<t; i++) {
        int n,k;
        cin >> n >> k;
        int D[n]; //건설 시간
        int x[k]; //건물
        int y[k]; //다음 건물
        int z[k];
        int l = 0;
        int tie[k];
        for(int j=0; j<n; j++){
            cin >> D[j];
        }
        for(int j=0; j<n; j++){
            cin >>x[j] >> y[j];
        }
        int w;
        cin >> w;
        int sum = 0;
        sum = D[0];
        cout << '\n';
        for(int j=0; j<n; j++){
            z[j] = D[y[j]-1];
        }
//        for(int j=0; j<n; j++){
//            cout << x[j] << ' ' << y[j] << ' ' << z[j] << '\n';
//        }

        int m = 0;
        while(x[l] == x[l+1]){
            cout << "x[l] x[l+1] " << x[l] << ' ' << x[l+1] << '\n';
            cout << "y[l] y[l+1] " << y[l] << ' ' << y[l+1] << '\n';
            if(D[l] > D[l+1]){
                tie[m] = D[l];
                sum+=D[l];
                m++;
            } else {
                tie[m] = D[l+1];
                sum+=D[l+1];
                m++;
            }
            l++;
        }
        cout << sum << '\n';
    }
}