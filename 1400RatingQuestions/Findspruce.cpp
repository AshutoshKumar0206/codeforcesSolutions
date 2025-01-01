#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
int n, m;
cin>>n>>m;
vector<vector<char>>v(n, vector<char>(m));  
vector<vector<int>> dp(n, vector<int>(m, 0));
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>v[i][j];
    }
}
int spruce = 0;
for(int i = n-1; i >=0; i--){
    for(int j = 0; j < m; j++){
        if(v[i][j] == '*'){
        if(i == n-1){
           dp[i][j] = 1;
        }
        else{
           int left = (j>0)? dp[i+1][j-1] : 0;
           int right = (j<m-1)? dp[i+1][j+1] : 0;
           int down =  dp[i+1][j];
           dp[i][j] = 1 + min(left, min(right, down));
        }
        spruce += dp[i][j];
        }
    }
}
cout<<spruce<<endl;
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