#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
ll findVal(int node, unordered_map<ll, list<ll>>&adj, vector<int>&v){
ll ans = v[node-1];
ll mini = inf;
if(adj[node].size() == 0){
    return ans;
}
for(auto child : adj[node]){
mini = min(mini, findVal(child, adj, v));
}
if(node == 1){
ans += mini;
return ans;
}
if(mini<ans){  
    return mini;
}
else if(mini>=ans){
    ans = ans+(mini-ans)/2;
    return ans;
}
}

void solve(){
int n;
cin>>n;
vector<int>v(n);
for(int i=0; i<n; i++){
    cin>>v[i];
}
unordered_map<ll, list<ll>>adj;
for(int i = 2; i<=n; i++){
int parent;
cin>>parent;
adj[parent].push_back(i);//parent has the child node as (i)  
}
ll ans = findVal(1, adj, v);
cout<<ans<<endl;
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