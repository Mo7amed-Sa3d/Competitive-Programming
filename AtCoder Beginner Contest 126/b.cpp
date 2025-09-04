#include "bits/stdc++.h"

using namespace std;

#define ll long long

int32_t main (){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    int a = (s[0] - '0') * 10 + (s[1] - '0');
    int b = (s[2] - '0') * 10 + (s[3] - '0');

    if(a > 0 and a <= 12 and b > 0 and b <= 12){
        cout << "AMBIGUOUS\n";
    }else if(a > 0 and a <= 12){
        cout << "MMYY\n";
    }else if(b > 0 and b <= 12){
        cout << "YYMM\n";
    }else {
        cout << "NA\n";
    }
}