/**
 *    author:  Mohamed_sa3d
 *    created: 2025.08.31 18:46:38
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
        int n,m;
        cin >> n >> m;
        vector<vector<int>> a(n,vector<int>(m));
        for(int i = 0; i < n; ++i)
            for(int j = 0; j < m; ++j)
                cin >> a[i][j];
            
        vector<vector<bool>> vis(n,vector<bool>(m));
        int di[] = {1,-1,0,0};
        int dj[] = {0,0,1,-1};

        auto valid = [&](int i,int j){
            return i >= 0 and j >= 0 and i < n and j < m;
        };
        vector<vector<bool>> inq(n,vector<bool>(m));

        auto bfs = [&](int si,int sj){
            queue<pair<int,int>> q;
            q.emplace(si,sj);
            int cnt = 0;
            while(!q.empty()){
                int i = q.front().first;
                int j = q.front().second;
                q.pop();
                cnt += a[i][j];
                vis[i][j] = 1;                
                for(int k = 0; k < 4; ++k){
                    int ni = di[k] + i,nj = dj[k] + j;
                    if(valid(ni,nj) and a[ni][nj] != 0 and !vis[ni][nj]){
                        if(inq[ni][nj])
                            continue;
                        q.emplace(ni,nj);
                        inq[ni][nj] = 1;
                    }
                }
            }
            return cnt;
        };
        
        int ans = 0;
        for(int i = 0; i < n; ++i){
            for(int j = 0; j < m; ++j){
                if(!vis[i][j] and a[i][j]){
                    ans = max(ans,bfs(i,j));
                }
            }
        }
        cout << ans << "\n";
    }
}