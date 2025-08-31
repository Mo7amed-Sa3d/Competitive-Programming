/**
 *    author:  Mohamed_sa3d
 *    created: 2025.08.31 18:36:35
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
        int n,m;
        cin >> n >> m;

        if(n % 3 and n != m){
            cout << "NO\n";
            continue;
        }
    
        queue<int> piles;
        piles.push(n);
        bool f = 0;
        while(!piles.empty()){
            int x = piles.front();
            piles.pop();
            if(x % 3 == 0){
                piles.push(x / 3);
                piles.push(x / 3 * 2);
            }
            if(x == m){
                cout << "YES\n";
                f = 1;
                break;
            }
        }
        if(!f)
            cout << "NO\n";
    }
    
}