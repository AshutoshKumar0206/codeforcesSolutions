#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
int n, k;
cin>>n>>k;
string st;
cin>>st;
set<ll>s;
for(int i=0; i<k; i++){
char c;
cin>>c;
s.insert(c);
}
ll ans = 0;
for(int i=0; i<n; i++){
    ll j = i;
    while(j<n && s.find(st[j]) != s.end()){
        j++;
    }
    ll len = j-i;
    ans += len * 1ll * (len + 1)/2;
    i = j;
}
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