/**
 *    author:  Mohamed_sa3d
 *    created: 2025.09.05 03:12:45
**/
#include "bits/stdc++.h"

using namespace std;

#define ll long long

int32_t main (){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll r,d,x;
    cin >> r >> d >> x;

    for(int i = 1; i <= 10; ++i){
        cout << r * x - d << "\n";
        x = r * x - d;
    }
}