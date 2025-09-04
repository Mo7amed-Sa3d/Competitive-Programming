/**
 *    author:  Mohamed_sa3d
 *    created: 2025.09.03 23:08:12
**/
#include "bits/stdc++.h"

using namespace std;

#define ll long long

const int inf = 1e9 + 9;

int n;
vector<vector<ll>> adj,dp;
string s;

void dfs(int u){

    if(s[u] == 'P')
        dp[u][0] = 0;
    else if(s[u] == 'S')
        dp[u][1] = 0;
    else dp[u][0] = dp[u][1] = dp[u][2] = 0;

    //Process from bottom 
    for(auto v : adj[u]){
        dfs(v);
        dp[u][0] += min({dp[v][0],dp[v][1] + 1 ,dp[v][2]});
        dp[u][1] += min({dp[v][0] + 1, dp[v][1] ,dp[v][2]});
        dp[u][2] += dp[v][2];
    }
}


int32_t main (){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        cin >> n;
        adj = vector<vector<ll>>(n);
        dp = vector<vector<ll>>(n,vector<ll>(3,inf));
        for(int i = 1; i < n; ++i){
            int p;
            cin >> p;
            --p;
            adj[p].push_back(i);
        }
        cin >> s;
        dfs(0);
        cout << min({dp[0][0],dp[0][1],dp[0][2]}) << "\n";
    }
}