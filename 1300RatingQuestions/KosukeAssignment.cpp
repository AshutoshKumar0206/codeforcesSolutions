#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
int n;
cin>>n;
vector<ll>v(n+1);
for(int i =1; i<=n; i++){
    cin>>v[i];
}
vector<ll>dp(n+1, 0);
map<ll,ll>m;
m[0] = 0;
dp[0] = 0;
vector<ll>pr(n+1, 0);
pr[0] = v[1];
for(int i = 1; i<=n; i++){
pr[i] = pr[i-1] + v[i];
}
for(int i =1; i<=n; i++){
dp[i] = dp[i-1];
if(m.find(pr[i])!=m.end()){
    dp[i] = max(dp[i], dp[m[pr[i]]]+1);
}
m[pr[i]] = i;
}
cout<<dp[n]<<endl;
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