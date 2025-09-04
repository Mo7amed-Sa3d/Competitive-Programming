/**
 *    author:  Mohamed_sa3d
 *    created: 2025.09.05 01:07:22
**/
#include "bits/stdc++.h"

using namespace std;

#define ll long long

class DSU{
private:
    vector<int> par,size;
    int n;
    int groups;
public:
    DSU(int n){
        par = vector<int>(n);
        size = vector<int>(n);
        iota(par.begin(),par.end(),0);
        fill(size.begin(),size.end(),0);
        this->n = n;
        this->groups = n;
    }

    int find_parent(int u){
        if(par[u] == u)
            return u;
        return par[u] = find_parent(par[u]);
    }
    int get_groups(){
        return this->groups;
    }
    void join(int u,int v){
        u = find_parent(u);
        v = find_parent(v);
        if(u != v){
            if(size[u] > size[v])
                swap(u,v);
            par[u] = v;
            size[v] += size[u];
            this->groups--;
        }
    }
};

int32_t main (){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m;
    cin >> n >> m;
    
    DSU dsu(n);
    for(int i = 0; i < m; ++i){
        int x,y,z;
        cin >> x >> y >> z;
        --x,--y;
        dsu.join(x,y);
    }

    cout << dsu.get_groups() << "\n";
}