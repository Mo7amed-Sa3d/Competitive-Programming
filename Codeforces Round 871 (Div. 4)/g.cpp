/**
 *    author:  Mohamed_sa3d
 *    created: 2025.08.31 19:38:54
**/
#include "bits/stdc++.h"

using namespace std;

#define ll long long
#define int ll 
const int N = 2e6 + 6;

int32_t main (){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<vector<ll>> v;
    v.emplace_back();
    v.emplace_back();
    v.back().emplace_back(0);
    v.back().emplace_back(1);
    int prev = 2;
    for(int i = 2;i <= N; i++){
        v.emplace_back();
        v.back().emplace_back(0);
        while(v.back().size() <= prev){
            v.back().emplace_back(i);
            ++i;
        }
        prev++;
        --i;
    }

    auto pre = v;

    for(int i = 1; i < pre.size(); ++i){
        for(int j = 1; j < pre[i].size(); ++j){
            pre[i][j] *= pre[i][j];
        }
        for(int j = 1; j < pre[i].size(); ++j){
            pre[i][j] += pre[i][j-1];
        }
    }
    
    auto get_above = [&](int i,int j){
        int ai = i - 1,aj = j;

        
        pair<int,int> a = {ai,aj};
        pair<int,int> b = {ai,aj - 1};
        
        a.second = min(a.second,(int)v[ai].size() - 1);
        a.second = max(a.second,1ll);
        
        b.second = min(b.second,(int)v[ai].size() - 1);
        b.second = max(b.second,1ll);
        
        return make_pair(b,a);
    };

    auto get_sum = [&](int i,int j,int j2){
        return pre[i][j] - pre[i][j2 - 1];
    };
    int t;
    cin >> t;
    while(t--){

        ll n;
        cin >> n;

        ll idx = 0;
        for(int i = 1; i < v.size(); ++i){
            if(n < v[i][1]){
                idx = i - 1;
                break;
            }
        }
        
        n -= idx * (idx - 1) / 2;
    
        int i = idx,j = n,j2 = n;
        ll ans = get_sum(i,j,j2);

        while(i > 1){
            auto ret1 = get_above(i,j);
            auto ret2 = get_above(i,j2);
            i = ret1.first.first;
            j = ret1.first.second;
            j2 = ret2.second.second;
            assert(j2 >= j);
            ans += get_sum(i,j2,j);
        }
        cout << ans << "\n";
    }
}