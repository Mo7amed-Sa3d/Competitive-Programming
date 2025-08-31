/**
 *    author:  Mohamed_sa3d
 *    created: 2025.08.31 19:18:25
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
        vector<int> in(n);
        for(int i = 0; i < m; ++i){
            int u,v;
            cin >> u >> v;
            --u,--v;
            in[u]++;
            in[v]++;
        }
        int xy = count(in.begin(),in.end(),1);
        int x = n - xy - 1;
        int y = xy / x;
        assert(xy % x == 0);
        cout << x << " " << y << "\n";
    }
    
}