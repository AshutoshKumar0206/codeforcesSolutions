#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
ll n, m;
cin>>n>>m;
unordered_map<ll, vector<ll>>adj;
for(int i=0; i<m; i++){
ll u, v;
cin>>u>>v;
adj[u].push_back(v);
adj[v].push_back(u);
}
ll cnt = 0;
while(true){
    vector<ll>removal_nodes;
    bool flag = false;
    for(int i = 1; i<=n; i++){
        if(adj[i].size() == 1){
            flag = true;
            removal_nodes.push_back(i);
            adj[i].clear();
        }
    }
    if(flag == false){
        break;
    }
    for(int i = 0; i<removal_nodes.size(); i++){
        for(int j = 1; j<=n; j++){
            for(int k = 0; k<adj[j].size(); k++){
                if(adj[j][k] == removal_nodes[i])
               adj[j].erase(adj[j].begin()+k); 
            }
        }
    }
    cnt++;
}
cout<<cnt<<endl;
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