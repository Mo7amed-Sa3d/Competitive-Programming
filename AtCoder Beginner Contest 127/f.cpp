/**
 *    author:  Mohamed_sa3d
 *    created: 2025.09.05 04:36:22
**/
#include "bits/stdc++.h"

using namespace std;

#define ll long long

int32_t main (){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

       
}

/*
f0(x) = 0;
f1(x) = f0(x) + abs(x - a) + b where x is the value that mimimizes it
f2(x) = f1(x) + abx(x - a) + b

f2(x) = f0(x) + abs(x1 - a) + b + abs(x2 - a) + b;
      = 0     + abs(x1 - a) + b + abs(x2 - a) + b;
    
f3(x) = abs(x3 - a) + abs(x1 - a) + abs(x2 - a) + 3 * b;

it means for each query find x that minizes abs(x - a)
x1 = a
f2(x) = b + abs(x - a)


*/