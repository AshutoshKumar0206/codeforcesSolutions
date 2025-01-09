#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
ll n, p, k;
cin>>n>>p>>k;
p--;
string s;
cin>>s;
// for(int i = 0; i<n; i++){
//     cin>>s[i];
// }
ll x, y;
cin>>x>>y;
vector<ll>zeros(n, 0);
for(int i = 0; i<n; i++){
    if(s[i] == '0'){
        zeros[i]++;
    }
}
for(int i = n-k-1; i>=0; i--){
zeros[i]+=zeros[i+k];
}
ll ans = INT_MAX;
for(int r = p; r<n; r++){
    ans = min(ans, (((r-p)*1ll*y) + (zeros[r]*1ll*x)));
}
cout<<ans<<"\n";
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