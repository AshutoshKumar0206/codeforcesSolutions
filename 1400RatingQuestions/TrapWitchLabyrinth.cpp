#include<bits/stdc++.h>
using namespace std;
#define ll long long
int dfs(vector<vector<char>>&v, vector<vector<int>>&vis, vector<vector<char>>&cnt, int n, int m, int i, int j){
if(i < 0 || j < 0 || i >= n || j >= m){
    return 0;
}
if(cnt[i][j] != -1)return cnt[i][j];
if(vis[i][j])return 1;
vis[i][j] = 1;
if(v[i][j] == '?') return cnt[i][j] = dfs(v,vis,cnt,n,m,i+1,j) || dfs(v,vis,cnt,n,m,i-1,j) || dfs(v,vis,cnt,n,m,i,j-1) || dfs(v,vis,cnt,n, m,i,j+1);
else if(v[i][j] == 'U') return cnt[i][j] = dfs(v,vis,cnt,n,m,i-1,j);
else if(v[i][j] == 'D') return cnt[i][j] = dfs(v,vis,cnt,n,m,i+1,j);
else if(v[i][j] == 'L') return cnt[i][j] = dfs(v,vis,cnt,n,m,i, j-1);
else return cnt[i][j] = dfs(v,vis,cnt,n,m,i, j+1); 
}
void solve(){
int n, m;
cin>>n>>m;
vector<vector<char>>v(n, vector<char>(m));
for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
        cin>>v[i][j];
    }
}
vector<vector<int>>vis(n, vector<int>(m, 0));
vector<vector<char>>cnt(n, vector<char>(m, -1));
for(int i=0; i<n; i++){
    for(int j = 0; j<m; j++){
        if(!vis[i][j]){
        dfs(v, vis, cnt, n, m, i, j);
        }
    }
}
int count = 0;
for(int i=0; i<n; i++){
    for(int j = 0; j<m; j++){
        if(cnt[i][j] == 1){
            count++;
        }
    }
}
cout<<count<<endl;
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