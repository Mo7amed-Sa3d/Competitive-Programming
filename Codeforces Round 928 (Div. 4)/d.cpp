/**
 *    author:  Mohamed_sa3d
 *    created: 2025.09.03 18:06:19
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
        multiset<int> ms;
        int groups = 0;
        for(int i = 0; i < n; ++i){
            int x;
            cin >> x;
            int comp = ~x;
            comp &= ((1 << 31) - 1);
            if(ms.find(comp) != ms.end()){
                ms.erase(ms.find(comp));
                groups++;
            }else ms.insert(x);
        }
        cout << groups + (int)ms.size() << "\n";
    }
}
