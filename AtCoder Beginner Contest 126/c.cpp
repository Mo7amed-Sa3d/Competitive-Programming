/**
 *    author:  Mohamed_sa3d
 *    created: 2025.09.04 23:38:07
**/
#include "bits/stdc++.h"

using namespace std;

#define ll long long

int32_t main (){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,k;
    cin >> n >> k;
    
    long double ans = 0;
    for(int i = 1; i <= n; ++i){  
        int p = 0, j = i;
        while(j < k){
            p++;
            j *= 2;
        }
        ans += powl((long double)0.5,p);
    }
    cout << fixed << setprecision(12) << 1.0 * ans / n << "\n";;
}