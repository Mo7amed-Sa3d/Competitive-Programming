/**
 *    author:  Mohamed_sa3d
 *    created: 2025.09.03 18:24:06
**/
#include "bits/stdc++.h"

using namespace std;

#define ll long long

int32_t main (){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    
    int t;
    cin >> t;
    while(t--){
        ll n,k;
        cin >> n >> k;
        
        ll level = 1;
        auto get = [&](ll x){
            return (x + 1) / 2;
        };
        while(k > get(n / level)){
            k -= get(n / level);
            level *= 2;
        }
        cout << (k * 2 - 1) * level << "\n";
    }
}

/*
2 * i - 1 

2 * (2 * i - 1)
= 4 * i - 2

3 * (2 * i - 1)
= 6 * i - 3

4 * (2 * i - 1)
8 * i - 4


*/