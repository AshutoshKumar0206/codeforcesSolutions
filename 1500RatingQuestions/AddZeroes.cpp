#include<bits/stdc++.h>
using namespace std;
#define ll long long
void dfs(ll u, set<ll>&s, map<ll, vector<ll>>&adj){
if(s.find(u) != s.end()){
    return;
}
s.insert(u);
for(auto i:adj[u]){
    dfs(i, s, adj);
}
}
void solve(){
int n;
cin>>n;
vector<ll>v(n);
for(int i=0; i<n; i++){
    cin>>v[i];
}
map<ll, vector<ll>>adj;
for(int i = 1; i<n; i++){   
    adj[v[i] + i].push_back(v[i] + i + i);
}
set<ll>s;
dfs(n, s, adj);
cout<<*s.rbegin()<<endl;
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