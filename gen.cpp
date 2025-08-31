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
        int n = rand(2e5,2e5);
        cout << n << "\n";  
        for(int i =0 ; i < n; ++i)
            cout << i + 1 << " "; 
        cout << "\n";    

    }
    
}
    