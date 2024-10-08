#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool comparator(ll x, ll y){
return abs(x)>abs(y);
}
void solve(){
int n;
cin>>n;
vector<ll>v(n);
ll maxi = INT_MIN;
for(int i=0; i<n; i++){
    cin>>v[i];
    maxi = max(maxi,v[i]);
}
sort(v.begin(), v.end(), comparator);
if(maxi<0){
    cout<<v[n-1]*v[n-2]*v[n-3]*v[n-4]*v[n-5]<<endl;
    return;
}
else if(maxi == 0){
    cout<<0<<endl;
    return;
}
ll ans = v[0]*v[1]*v[2]*v[3]*v[4];
for(int i = 5; i<n; i++){
for(int j = 0; j<5; j++){
    ll val = v[i];
    for(int k = 0; k<5; k++){
       if(k!=j)val*=v[k];      
    }
    ans = max(val, ans); 
}
}
cout<<ans<<endl;
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