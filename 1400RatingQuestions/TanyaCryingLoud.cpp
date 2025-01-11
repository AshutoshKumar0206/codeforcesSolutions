#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll findVal(ll n, ll k, ll a, ll b){
if(n<k || k == 1){
    return (n-1)*1ll*a;
}
else if(n%k != 0){
 return findVal(n-n%k, k, a, b) + ((n%k) * 1ll * a);
}
else
   return findVal(n/k, k, a, b) + min(b, (n-(n/k)) * 1ll * a); 
}
void solve(){
ll n, k, a, b;
cin>>n>>k>>a>>b;
ll ans = findVal(n, k, a, b);
cout<<ans<<endl; 
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