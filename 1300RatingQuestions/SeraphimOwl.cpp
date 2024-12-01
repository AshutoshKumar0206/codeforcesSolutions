#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
int n,m;
cin>>n>>m;
vector<ll>v(n);
vector<ll>vt(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}
for(int i=0;i<n;i++){
    cin>>vt[i];
}
reverse(v.begin(),v.end());
reverse(vt.begin(),vt.end());
ll pref = 0;
ll b_value_sum = 0;
for(int i = 0; i<n-m; i++){
if(v[i]<vt[i]){
    pref+=b_value_sum;
    pref+=v[i];
    b_value_sum = 0;
}
else{
    b_value_sum += vt[i];
}
}
ll res = 1e18;
for(int i = n-m; i<n; i++){
res = min(res, pref + b_value_sum + v[i]);
b_value_sum += vt[i];
}
cout<<res<<endl;
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