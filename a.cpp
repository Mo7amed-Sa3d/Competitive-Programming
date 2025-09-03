/**
 *    author:  Mohamed_sa3d
 *    created: 2025.09.02 22:26:49
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
        int n;
        cin >> n;
        vector<string> a(n),b(n);
        for(int i = 0; i < n; ++i){
            cin >> a[i] >> b[i];
        }
        vector<vector<int>> equal(n,vector<int> (n));
        for(int i = 0; i < n; ++i){
            for(int j = 0; j < n; ++j){
                equal[i][j] = (a[i] == a[j]) | (b[i] == b[j]) ;
            }
        }
        //dp[mask][la] is Can I choose mask with the last chosen is ls
        vector<vector<int>> dp(1 << n,vector<int>(n));
        dp[0] = vector<int> (n,1);

        int ans = 0;
        for(int mask = 0; mask < (1 << n); ++mask){
            for(int i = 0; i < n; ++i){
                if(mask & (1 << i)) //I already have it
                    continue;
                for(int j = 0; j < n; ++j){
                    if(mask & (1 << j) or !mask){
                        if(equal[i][j])
                            dp[mask | (1 << i)][i] |= dp[mask][j];
                    }
                }
            }
            for(int i = 0; i < n; ++i){
                if(dp[mask][i])
                    ans = max(ans,__builtin_popcount(mask));
            }
        }
        cout << n - ans << "\n";
    }
}