/**
 *    author:  Mohamed_sa3d
 *    created: 2025.09.03 03:08:25
**/
#include "bits/stdc++.h"

using namespace std;

#define ll long long

vector<vector<int>> adj;
vector<bool> vis;
vector<int> cycle;
int n,x,y;

void dfs(int u,int p){
    vis[u] = 1;
    for(auto v : adj[u]){
        if(!vis[v]){
            dfs(v,u);
        }
        else if(v != p){
            x = u,y = v;
            break;
        }
    }
}
void dfs2(int u,vector<int> & path){
    path.push_back(u);
    vis[u] = 1;
    if(u == y){
        cycle = path;
    }
    for(auto v : adj[u]){
        if(u == x and v == y)
            continue;
        if(!vis[v]){
            dfs2(v,path);
        }
    }
    path.pop_back();
}

int32_t main (){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int a,b;
        cin >> n >> a >> b;
        --a,--b;
        adj = vector<vector<int>> (n);
        vis = vector<bool> (n);
        cycle.clear();
        vector<int> deg(n);
        for(int i = 0; i < n; ++i){
            int u,v;
            cin >> u >> v;
            --u,--v;
            adj[u].push_back(v);
            adj[v].push_back(u);
            deg[u]++;
            deg[v]++;
        }
        dfs(0,0);
        vis = vector<bool> (n);
        vector<int> _;
        dfs2(x,_);
        if(a == b){
            cout << "NO\n";
            continue;
        }
        if(find(cycle.begin(),cycle.end(),b) != cycle.end()){
            cout << "YES\n";
            continue;
        }
        vector<int> dist(n,1e9);
        auto bfs = [&](int src,bool ret,int nx){
            vis = vector<bool>(n);
            queue<int> q;
            q.push(src);
            dist[src] = 0;
            vis[src] = 1;
            while (!q.empty()){
                int u = q.front();
                q.pop();
                for(auto v : adj[u]){
                    if(!vis[v]){
                        q.push(v);
                        dist[v] = dist[u] + 1;
                        vis[v] = 1;
                    }
                }
            }   
            
            int ans = 1e9,node = -1;
            for(auto x : cycle){
                if(x != src and dist[x] < ans){
                    ans = dist[x];
                    node = x;
                }
            }
            if(ret)
                return node;
            else return dist[nx];    
        };
        
        int v = bfs(b,1,0);
        int dv = dist[v];

        dist = vector<int>(n,1e9);
        
        int dp = bfs(a,0,v);

        cout << (dv < dp ? "YES\n" : "NO\n");
    }
}