#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
int n,x;
cin>>n>>x;
vector<int>v(n);
for(int i=0;i<n;i++) {
    cin>>v[i];
}
vector<ll>maxi(n+1, INT_MIN);
for(int i=0;i<n;i++){
    ll sum = 0;
for(int j = i; j<n; j++){
    sum+=v[j];
    maxi[j-i+1] = max(maxi[j-i+1], sum); 
}
}
vector<ll>ans(n+1);
for(int k = 0; k<=n; k++){
    ll sum = 0;
    for(int i = 1; i<=n; i++){
        sum = max(sum, maxi[i] + (min(k,i) * x));
    }
    ans[k] = sum;
}
for(auto i:ans){
    cout<<i<<" ";
}cout<<endl;
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