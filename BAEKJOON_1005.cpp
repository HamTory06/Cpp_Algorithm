#include <iostream>

using namespace std;


int main() {
    int t;
    cin >> t;
    for(int i=0; i<t; i++) {
        int n,k;
        cin >> n >> k;
        int tie[k];
        int D[n]; //건설 시간
        int x[k]; //건물
        int y[k]; //다음 건물
        int z[k];
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

        int m = 0;
        int l = 0;
        for(int j=0; j<n || j<w; j++){
//            cout << x[j] << ' ' << y[j] << ' ' << z[j] << '\n';
            while(x[l] == x[l+1]){
                if(D[l] > D[l+1]){
                    tie[m] = D[l];
                    sum+=D[l];
                    cout << "sum: "<< D[l] << " l: " << l << '\n';
                    m++;
                } else {
                    tie[m] = D[l+1];
                    sum+=D[l+1];
                    cout << "sum: "<< D[l+1] << " l: " << l << '\n';
                    m++;
                }
                l++;
            }
        }



        cout << sum << '\n';
    }
}