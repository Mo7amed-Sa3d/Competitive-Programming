/**
 *    author:  Mohamed_sa3d
 *    created: 2025.08.31 20:55:55
**/
#include "bits/stdc++.h"

using namespace std;

#define ll long long

const int mod = 1e9 + 7;

int32_t main (){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        vector<int> a(n);
        for(auto & x : a)
            cin >> x;
        
        vector<ll> dp(64 * 2);
        dp[127] = 1;
        for(int i = 0; i < n; ++i){
            auto new_dp = dp;    
            for(int num = 127; num >= 0; --num){
                    new_dp[num & a[i]] += dp[num];
                    new_dp[num & a[i]] %= mod;
                }
            swap(dp,new_dp);
        }
        ll ans = 0;
        for(int i = 0; i < 64; ++i)
            if(__builtin_popcount(i) == k)
                ans += dp[i],ans %= mod;
        
        cout << ans << "\n";
    }
}