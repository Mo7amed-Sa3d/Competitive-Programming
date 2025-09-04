// generating a random sequence of distinct elements
#include <bits/stdc++.h>
using namespace std;

#define ll long long

mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());

ll rand(ll a, ll b) {
    return a + rng() % (b - a + 1);
}

int main(int argc, char* argv[]) {

    int t = 1;
    cout << t << "\n";
    while (t--){
        int n = 7;
        for(int i = 0; i < n; ++i){
            for(int j = 0; j < n; ++j){
                cout << (rand(1,2) % 2 ? 'W' : 'B');
            }
            cout << "\n";
        }
    }
    
}
    