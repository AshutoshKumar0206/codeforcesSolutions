#include<bits/stdc++.h>
using namespace std;
#define ll long long
int val = 0;
void dfs(vector<ll>&vis, unordered_map<ll,list<ll>>&adj, vector<ll>&v, ll node, ll& mini){
   vis[node] = 1;
   mini = min(mini, v[node-1]);
    for(auto i:adj[node]){
        if(!vis[i]){
           dfs(vis, adj, v, i, mini);
        }
    }
    return;
}
void solve(){
ll n,m;
cin>>n>>m;
vector<ll>v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}
vector<ll>vis(n+1);
unordered_map<ll,list<ll>>adj;
while(m--){
    ll x, y;
    cin>>x>>y;
    adj[x].push_back(y);
    adj[y].push_back(x);
}
ll sum = 0;
for(int i = 1; i<=n; i++){
ll mini = INT_MAX;
    if(!vis[i]){
    dfs(vis, adj, v, i, mini);
    sum+=mini;
    }
}
cout<<(ll)sum<<endl;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    // int t;
    // cin>>t;
    // while(t--){
    solve();
    // }
    
    return 0;
}