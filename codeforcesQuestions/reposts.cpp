#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int maxi = INT_MIN;
void DFS(string s, unordered_map<string,list<string>>&adj, unordered_map<string, bool>&vis, int cnt){
    if(adj[s].empty()){
        maxi = max(maxi, cnt);
    }
    vis[s] = true;
    cnt++;
   for(auto neighbor : adj[s]){
    if(!vis[neighbor]){
        DFS(neighbor, adj, vis, cnt);
    }
   }
}
void solve(){
int n;
cin>>n;
string s;
string st;
string str;
unordered_map<string,list<string>>adj;
unordered_map<string, bool>vis;
for(int i=0; i<n; i++){
cin>>s>>st>>str;
transform(s.begin(), s.end(), s.begin(), ::tolower);
transform(str.begin(), str.end(), str.begin(), ::tolower);
adj[str].push_back(s);
}
// int maxi = INT_MIN;
for(auto i:adj["polycarp"]){
    int cnt = 1;
    vis["polycarp"] = true;
    DFS(i, adj, vis, cnt);
    maxi = max(maxi, cnt);
}
cout<<maxi+1<<endl;
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