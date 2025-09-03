/**
 *    author:  Mohamed_sa3d
 *    created: 2025.09.03 00:29:56
**/
#include "bits/stdc++.h"

using namespace std;

#define ll long long

vector<vector<int>> arr = {
    {1,1,1,1,1,1,1,1,1,1},
    {1,2,2,2,2,2,2,2,2,1},
    {1,2,3,3,3,3,3,3,2,1},
    {1,2,3,4,4,4,4,3,2,1},
    {1,2,3,4,5,5,4,3,2,1},
    {1,2,3,4,5,5,4,3,2,1},
    {1,2,3,4,4,4,4,3,2,1},
    {1,2,3,3,3,3,3,3,2,1},
    {1,2,2,2,2,2,2,2,2,1},
    {1,1,1,1,1,1,1,1,1,1}    
};

int32_t main (){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int ans = 0;
        for(int i = 0; i < 10; ++i){
            for(int j = 0; j < 10; ++j){
                char x;
                cin >> x;
                if(x == 'X')
                    ans += arr[i][j];
            }
        }
        cout << ans << "\n";
    }
}