/**
 *    author:  Mohamed_sa3d
 *    created: 2025.09.03 01:00:45
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
        int n,k;
        cin >> n >> k;
        vector<int> a(n),h(n);
        for(auto & x: a)
            cin >> x;
        for(auto &x : h)
            cin >> x;

        vector<int> dev(n - 1);
        for(int i = 0; i < n - 1; ++i){
            dev[i] = (h[i] % h[i + 1] == 0);
            if(i)
                dev[i] += dev[i - 1];
        }

        int ans = 0;
        for(int i = 0; i < n; ++i){
            if(a[i] <= k)
                ans = 1;
        }

        for(int i = 1; i < n; ++i){
            a[i] += a[i - 1];
        }
        auto get_sum = [&](int l,int r){
            return l ? a[r] - a[l - 1] : a[r];
        };
        auto divisible = [&](int l,int r){
            int sz = r - l + 1;
            r--;
            int cnt = l ? dev[r] - dev[l - 1] : dev[r]; 
            return cnt == sz - 1;
        };
        auto can = [&](int sz){
            for(int i = 0; i + sz - 1< n; ++i){
                if(get_sum(i,i + sz - 1) <= k and divisible(i,i + sz - 1))
                    return true;
            }
            return false;
        };
        int l = 2,r = n;
        while(l <= r){
            int mid = (l + r) / 2;
            if(can(mid)){
                l = mid + 1;
                ans = mid;
            }else r = mid - 1;
        }
        cout << ans << "\n";
    }
}
/*
What is the max subarray length sum such that its sum is <= k and 
each number is divisible by the next one in the subarray
*/