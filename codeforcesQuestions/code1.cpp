// #include<bits/stdc++.h>
// using namespace std;
// void solve(){//solve it using dp
// string s;
// cin>>s;
// int n = s.length();
// for(int i = 0;i<n; i++){
// if(s[i] == s[i-1]){
//  for(char j = 'a'; j<='z'; j++){
// if(s[i-1] != j && s[i+1] != j){
//     s[i] = j;
//     break;
// }
//  }
// }
// }
// cout<<s<<endl;
// }
// int main(){ 
//     ios::sync_with_stdio(0); 
//     cin.tie(0);
//     int t;
//     cin>>t;
//     while(t--){
//         solve();
//     }
//     return 0;
// }



// q2.)
// #include<bits/stdc++.h>
// using namespace std;
// const int maxii = 3e5+5;
// vector<pair<int,int>>v[maxii];
// vector<bool>vis(maxii);
// vector<int>dist(maxii);
// void dfs(int node, int i){
// vis[node] = true;
// for(int j = 0; j<v[node].size(); j++){
// int u = v[node][j].first, vi = v[node][j].second;
// if(vis[u] == false){
// dist[u] = (vi < i) + dist[node];
// dfs(u, vi);
// }
// } 
// return;
// }
// void solve(){
//     int n;
//   cin>>n;
//  for(int i=1;i<n;i++){
//     int j, k;
//     cin>>j>>k;
//     v[j].push_back({k, i});
//     v[k].push_back({j, i});
//  }
//  for(int i=1;i<=n;i++){
//     vis[i] = false;
//  }
//  dist[1] = 0;
//  dfs(1, n);
//  int maxi = 0;
// for(int i = 1; i<=n; i++){
//     maxi = max(maxi, dist[i]);
// }
// cout<<maxi<<endl;
// for(int i =1; i<=n; i++){
//     v[i].clear();
// }
// }
// int main(){ 
//     ios::sync_with_stdio(0); 
//     cin.tie(0);
//     int t;
//     cin>>t;
//     while(t--){
//         solve();
//     }
//     return 0;
// }