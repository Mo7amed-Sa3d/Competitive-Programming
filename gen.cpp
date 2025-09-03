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
        int a = rand(0,100);
        int b = rand(0,100);
        int c = rand(0,100);
        cout << a << " " << b << " " << c << "\n";
    }
    
}
    