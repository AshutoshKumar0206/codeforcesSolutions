#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
int n;
cin>>n;
vector<ll>v(n);
ll sum = 0;
for(int i=0; i<n; i++){
    cin>>v[i];
    sum += v[i];
}
double remove = ((double)2*1ll*sum)/(double)n;
if((int)remove < ceil(remove)){
    cout<<0<<endl;
    return;
}
map<ll, ll>mp;
ll cnt = 0;
for(int i=0; i<n; i++){
if(mp.find(remove-v[i])!=mp.end()){
cnt += mp[remove-v[i]];
}
mp[v[i]]++;
}
cout<<cnt<<endl;
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