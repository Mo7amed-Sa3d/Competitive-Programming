/**
 *    author:  Mohamed_sa3d
 *    created: 2025.09.03 01:20:48
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
        int n = s.size();
        if(n == 1){
            cout << "0\n";
            continue;
        }
        vector<pair<char,int>> v(1);
        v[0] = make_pair(s[0],1);
        for(int i = 1; i < n; ++i){
            if(s[i] == 'A'){
                if(v.back().first == 'A')
                    v.back().second++;
                else v.emplace_back('A',1);
            }else{
                if(v.back().first == 'A')
                    v.emplace_back('B',1);
                else v.back().second++;    
            }
        }
        int cnta = 0,cntb = 0;
        for(auto [c,x] : v){
            if(c == 'A')
                cnta ++;
            if(c == 'B')
                cntb += x;
        }
        
        int ans = 0;
        for(auto [c,x] : v){
            if(c == 'A')
                ans += x;
        }
        //case AAABAAABAAABAA
        if(cnta > cntb){
            int mn = 1e9 + 7;
            for(auto [c,x] : v){
                if(c == 'A')
                    mn = min(mn,x);
            }
            ans -= mn;
        }
        cout << ans << "\n";
    }
}
/*
AB -> BC

if I have AAAB I can convert them to BCCC
AAAB-> AABC -> ABCC -> BCCC
with #A conins

if I have BAAA I can convert them to CCCB
with #A Coins

BA -> CB
BAAA -> CBAA -> CCBA -> CCCB

The string will be

AAAAA B AAAAA BB AAAAA B AAAAAA

*/