/**
 *    author:  Mohamed_sa3d
 *    created: 2025.09.05 03:48:43
**/
#include "bits/stdc++.h"

using namespace std;

#define ll long long

const int N = 2e5 + 5;

const int mod = 1e9 + 7;

ll fact[N];

ll mult(ll a, ll b){
    return a * b % mod;
}

ll power(ll b, ll p){
    ll res = 1;
    while(p){
        if(p & 1)
            res = mult(res,b);
        b = mult(b,b);
        p /= 2;
    }
    return res;
}
ll inv(ll x){
    return power(x,mod - 2);
}

ll nCk(ll n, ll k){
    return mult(fact[n],inv(mult(fact[n - k],fact[k])));
}
int32_t main (){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    fact[0] = 1;
    for(int i = 1; i < N; ++i){
        fact[i] = mult(i,fact[i - 1]);
    }

    ll n,m,k;
    cin >> n >> m >> k;

    ll R = 0;
    for(ll i = 0; i < n; ++i){
            R += i * i - (n - i - 1) * i;
    }
    R %= mod;
    R = mult(R,m * m % mod);

    ll C = 0;
    for(ll i = 0; i < m; ++i){
            C += i * i - (m - i - 1) * i;
        
    }
    C %= mod;
    C = mult(C,n * n % mod);
    ll d = R + C % mod;
    ll ans = mult(nCk(n * m - 2,k - 2),d);
    
    cout << ans << "\n";
}