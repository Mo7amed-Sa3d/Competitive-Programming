/**
 *    author:  Mohamed_sa3d
 *    created: 2025.09.03 17:58:30
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
        bool f = 0;
        for(int i = 0; i < n; ++i){
            string s;
            cin >> s;
            f |= (count(s.begin(),s.end(),'1') == 1);
        }
        cout << (f ? "TRIANGLE\n" : "SQUARE\n");
    }
}