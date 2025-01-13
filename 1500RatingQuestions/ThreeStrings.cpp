#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
string a, b, c;
cin>>a>>b>>c;
string s = "";
vector<vector<ll>>dp(a.length()+1, vector<ll>(b.length()+1, 0));
for(int i = 0; i<a.length(); i++){
dp[i+1][0] = dp[i][0] + (a[i] != c[i]);
}
for(int j = 0; j<b.length(); j++){
dp[0][j+1] = dp[0][j] + (b[j] != c[j]);
}
for(int i = 1; i<=a.length(); i++){
    for(int j = 1; j<=b.length(); j++){
        dp[i][j] = min(dp[i-1][j] + (a[i-1]!=c[i+j-1]) , dp[i][j-1] + (b[j-1]!=c[i+j-1]));
    }
}
cout<<dp[a.length()][b.length()]<<endl;
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