#include<bits/stdc++.h>
using namespace std;
#define ll long long
void sumNodes(vector<vector<ll>>&adj, vector<ll>&v, int root, int sum){
if(adj[root][0] == 0 && adj[root][1] == 0){
    v.push_back(sum);
    return;
}
if(adj[root][0] !=0){
    sumNodes(adj, v, adj[root][0], sum+adj[root][2]);
}
if(adj[root][1] !=0){
    sumNodes(adj, v, adj[root][1], sum+adj[root][3]);
}
}
void solve(){
int n;
cin>>n;
string s;
cin>>s;
vector<vector<ll>>adj(n+1);
for(int i = 1; i<=n; i++){
int l, r;
cin>>l>>r;
if(s[i-1] == 'L'){
adj[i] = {l, r, 0, 1};
}
else if(s[i-1] == 'R'){
adj[i] = {l, r, 1, 0};
}
else{
adj[i] = {l, r, 1, 1};
}
}
if(adj[1][0] == 0 && adj[1][1] == 0){
cout<<0<<endl;
}
vector<ll>v;
sumNodes(adj, v, 1, 0);
ll mini = *min_element(v.begin(), v.end());
cout<<mini<<endl;
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