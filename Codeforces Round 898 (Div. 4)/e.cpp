/**
 *    author:  Mohamed_sa3d
 *    created: 2025.09.03 00:48:33
**/
#include "bits/stdc++.h"

using namespace std;

#define ll __int128_t

int32_t main (){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n,x;
        cin >> n >> x;
        vector<int> a(n);
        for(auto & x : a)
            cin >> x;
        
        auto can = [&](ll h){
            ll need = 0;
            for(auto y : a){
                need += max((ll)0,h - y);
            }
            return need <= x;
        };
        ll l = 0, r = 1e18 + 5,ans = 0;
        while(l <= r){
            ll mid = l + (r - l) / 2;
            if(can(mid)){
                l = mid + 1;
                ans = mid;
            }else r = mid - 1;
        }
        cout << (long long)ans << "\n";
    }
}