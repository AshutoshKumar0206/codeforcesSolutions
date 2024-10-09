#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
ll n,q,k;
cin>>n>>q>>k;
vector<ll>v(n);
for(int i=0; i<n; i++){
    cin>>v[i];
}


while(q--){
    int l, r;
    cin>>l>>r;
 cout<<k + (v[r-1] - v[l-1] + 1) - 2*1ll*(r - l + 1)<<endl;
}
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