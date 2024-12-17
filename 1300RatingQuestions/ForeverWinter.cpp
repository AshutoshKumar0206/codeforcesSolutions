#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
int n, m;
cin>>n>>m;
unordered_map<int, list<int>>adj;
for(int i = 0; i<m; i++){
    int u, v;
    cin>>u>>v;
    adj[u].push_back(v);
    adj[v].push_back(u);
}
unordered_map<int, int>count;
vector<int>parent(n+1);
for(int i = 1; i<=n; i++){
if(adj[i].size() == 1){
 parent[i] = adj[i].back();
 count[parent[i]]++;
}
}
int first = 0;
int last = 0;
for(auto i : count){
last = i.second;
first++;
}
cout<<first<<" "<<last<<endl;
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