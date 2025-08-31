/**
 *    author:  Mohamed_sa3d
 *    created: 2025.08.31 18:21:28
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
        string s;
        cin >> s;
        string c = "codeforces";
        int ans = 0;
        for(int i = 0; i < s.size(); ++i){
            ans += s[i] != c[i];
        }
        cout << ans << "\n";
    }
}