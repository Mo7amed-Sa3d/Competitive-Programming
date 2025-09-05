/**
 *    author:  Mohamed_sa3d
 *    created: 2025.09.05 03:23:12
**/
#include "bits/stdc++.h"

using namespace std;

#define ll long long

int32_t main (){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m;
    cin >> n >> m;
    multiset<int> ms;
    for(int i = 0; i < n; ++i){
        int x;
        cin >> x;
        ms.insert(x);
    }
    vector<pair<int,int>> v(m);
    for(auto &[x,y] : v)
        cin >> y >> x;
    
    sort(v.rbegin(),v.rend());

    for(int i = 0; i < m; ++i){
        int rep = v[i].second,x = v[i].first;
        while(rep and *ms.begin() < x){
            ms.erase(ms.begin());
            ms.insert(x);
            rep--;
        }
    }
    ll sum = 0;
    for(auto x : ms)
        sum += x;
    
    cout << sum << "\n";
}