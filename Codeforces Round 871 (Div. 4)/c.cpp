/**
 *    author:  Mohamed_sa3d
 *    created: 2025.08.31 18:26:17
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
        map<string,int> mp;        
        for(int i = 0; i < n; ++i){
            int x;
            string s;
            cin >> x >> s;
            if(mp.count(s))
                mp[s] = min(mp[s],x);
            else mp[s] = x;
        }
        if((mp.count("01") and mp.count("10")) or mp.count("11")){
            int ans = 1e9;
            if(mp.count("01") and mp.count("10"))
                ans = min(ans,mp["01"] + mp["10"]);
            if(mp.count("11"))
                ans = min(ans,mp["11"]);
            cout << ans << "\n";
        }else cout << "-1\n";
    }
}