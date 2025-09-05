/**
 *    author:  Mohamed_sa3d
 *    created: 2025.09.05 03:18:16
**/
#include "bits/stdc++.h"

using namespace std;

#define ll long long

int32_t main (){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m;
    cin >> n >> m;
    vector<int> a(n + 2);
    for(int i = 0; i < m; ++i){
        int l,r;
        cin >> l >> r;
        a[l]++;
        a[r + 1]--;
    }
    int ans = 0;
    for(int i = 1; i <= n; ++i){
        a[i] += a[i - 1];
        if(a[i] == m)
            ans++;
    }
    cout << ans << "\n";
}