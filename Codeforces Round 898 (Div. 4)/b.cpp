/**
 *    author:  Mohamed_sa3d
 *    created: 2025.09.03 00:22:25
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
        vector<int> a(n);
        for(auto & x : a){
            cin >> x;
        }
        sort(a.begin(),a.end());
        a[0]++;
        int pr = 1;
        for(auto x : a)
            pr *= x;
        cout << pr << "\n";
    }
}