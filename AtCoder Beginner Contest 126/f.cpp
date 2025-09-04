/**
 *    author:  Mohamed_sa3d
 *    created: 2025.09.05 01:47:04
**/
#include "bits/stdc++.h"

using namespace std;

#define ll long long

int32_t main (){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int m,k;
    cin >> m >> k;
    if(k >= (1 << m) or (m == 1 and k == 1)){
        cout << "-1\n";
        return 0;
    }
    if(m == 1 and k == 0){
        cout << "0 0 1 1\n";
        return 0;
    }
    cout << k << " ";
    vector<int> v;
    for(int i = 0; i < (1 << m); ++i){
        if(k != i)
            v.emplace_back(i);
    }
    for(auto x : v)
        cout << x << " ";
    cout << k << " ";
    reverse(v.begin(),v.end());
    for(auto x : v)
        cout << x << " ";
    cout << "\n";
}