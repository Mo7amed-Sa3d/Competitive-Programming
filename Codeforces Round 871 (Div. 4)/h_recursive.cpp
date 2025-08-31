/**
 *    author:  Mohamed_sa3d
 *    created: 2025.08.31 20:39:53
**/
#include "bits/stdc++.h"

using namespace std;

#define ll long long

const int mod = 1e9 + 7;

int n,k;
vector<int> a(n);
vector<vector<ll>> dp;

ll solve(int i,int AND){
    if(i == n){
        return __builtin_popcount(AND) == k;
    }

    auto & ret = dp[i][AND];
    if(~ret)
        return ret;
    
    ret = solve(i + 1,AND);
    ret += solve(i + 1,AND & a[i]);
    ret %= mod;
    return ret;
}

int32_t main (){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        cin >> n >> k;
        a = vector<int>(n);
        for(auto & x : a)
            cin >> x;
        dp = vector<vector<ll>>(n,vector<ll>(64,-1));
        
        cout << ((solve(0,63) - (k == 6)) + mod ) % mod << "\n";

    }
}