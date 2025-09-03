/**
 *    author:  Mohamed_sa3d
 *    created: 2025.09.03 00:43:39
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
        int n,k;
        string s;
        cin >> n >> k >> s;
        int ans = 0;
        for(int i = 0; i < n; ++i){
            if(s[i] == 'B'){
                ans++;
                i += (k - 1);
            }
        }
        cout << ans << "\n";
    }
}