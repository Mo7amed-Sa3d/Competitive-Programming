#include "bits/stdc++.h"

using namespace std;

#define ll long long

int32_t main (){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,k;
    string s;
    cin >> n >> k >> s;
    s[k - 1] = tolower(s[k - 1]);
    cout << s << "\n";
}