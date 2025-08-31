/**
 *    author:  Mohamed_sa3d
 *    created: 2025.08.31 18:22:51
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
        int cnt = 0,ans = 0;

        for(int i = 0; i < n; ++i){
            int x;
            cin >> x;
            if(x == 0){
                cnt++;
                ans = max(ans,cnt);
            } else{
                cnt = 0;
            }
        }
        cout << ans << "\n";
    }
}