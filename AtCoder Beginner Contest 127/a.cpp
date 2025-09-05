/**
 *    author:  Mohamed_sa3d
 *    created: 2025.09.05 03:10:09
**/
#include "bits/stdc++.h"

using namespace std;

#define ll long long

int32_t main (){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b;
    cin >> a >> b;

    if(a >= 13)
        cout << b << "\n";
    else if(a  <= 5)
        cout << "0\n";
    else cout << b / 2 << "\n";
}