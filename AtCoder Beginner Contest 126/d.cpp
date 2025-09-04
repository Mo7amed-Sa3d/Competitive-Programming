#include "bits/stdc++.h"

using namespace std;

#define ll long long

vector<vector<pair<int,int>>> adj;
vector<int> col;

void dfs(int u,int p){
    for(auto [v ,c]: adj[u]){
        if(v != p){
            col[v] = (c & 1 ? col[u] ^ 1 : col[u]);
            dfs(v,u);
        }
    }
}

int32_t main (){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    adj = vector<vector<pair<int,int>>>(n);
    col = vector<int> (n);
    for(int i = 0; i < n - 1; ++i){
        int u,v,c;
        cin >> u >> v >> c;
        --u,--v;
        adj[u].emplace_back(v,c);
        adj[v].emplace_back(u,c);
    }
    dfs(0,0);
    for(int i = 0; i < n; ++i)
        cout << col[i] << "\n";
}