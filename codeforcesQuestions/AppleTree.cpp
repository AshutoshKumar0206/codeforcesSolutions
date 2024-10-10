#include<bits/stdc++.h>
using namespace std;
#define ll long long
void dfs(ll v, ll p, unordered_map<ll,vector<ll>>&adj, vector<ll>&cnt){
    if(adj[v].size() == 1 && adj[v][0] == p){
        cnt[v] = 1;
    }
    else{
        for(auto i:adj[v]){
            if(i!=p){
                dfs(i, v, adj, cnt);
                cnt[v] += cnt[i];
            }
        }
    }
}
void solve(){
ll n;
cin>>n;
unordered_map<ll,vector<ll>>adj;
 for (int i = 0; i < n - 1; ++i) {
        ll u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u); 
    }
    vector<ll>cnt(n+1);
    dfs(1, -1, adj, cnt);
    ll q;
    cin>>q;
    while(q--){
        ll x, y;
        cin>>x>>y;
      cout<<cnt[x]*1ll*cnt[y]<<endl;
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
    solve();
    }
    
    return 0;
}