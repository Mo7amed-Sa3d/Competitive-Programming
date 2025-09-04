/**
 *    author:  Mohamed_sa3d
 *    created: 2025.09.03 18:00:50
**/
#include "bits/stdc++.h"

using namespace std;

#define ll long long

const int N = 2e5 + 5;

int sum_digits(int n){
    int ret = 0;
    while(n){
        ret += (n % 10);
        n /= 10;
    }
    return ret;
}

int32_t main (){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> ans(N);
    for(int i = 1; i < N; ++i){
        ans[i] = ans[i - 1] + sum_digits(i);
    }
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << ans[n] << "\n";
    }
}