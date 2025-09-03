/**
 *    author:  Mohamed_sa3d
 *    created: 2025.09.03 00:19:57
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

        cout << (s[0] == 'a' or s[1] == 'b' or s[2] == 'c' ? "YES\n" : "NO\n");
    }
}