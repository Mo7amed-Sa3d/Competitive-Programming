/**
 *    author:  Mohamed_sa3d
 *    created: 2025.09.03 17:54:29
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
        int cnt_a = count(s.begin(),s.end(),'A');
        int cnt_B = count(s.begin(),s.end(),'B');
        cout << (cnt_a > cnt_B ? "A" : "B") << "\n";
    }   
}