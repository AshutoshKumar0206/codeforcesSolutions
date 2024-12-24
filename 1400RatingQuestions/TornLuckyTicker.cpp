#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool cmp(string& v1, string &v2){
    return v1.length() < v2.length();
}
void solve(){
ll n;
cin>>n;
vector<string>v(n);
map<pair<ll, ll>, ll>mp;
for(ll i = 0; i<n; i++){
cin>>v[i];
}
sort(v.begin(), v.end(), cmp);
ll ans = n; 
for(ll i = 0; i<n; i++){
 ll s = v[i].length();
 for(ll m = 1; m<=s; m++){
    if((s+m)%2 != 0)continue;
    ll mid = (s+m)/2;
    ll res = 0;
    for(int j = 0; j<mid; j++)res += (v[i][j] - '0');
    for(int j = mid; j<s; j++)res -= (v[i][j] - '0');

    if(res >= 0) ans += mp[{m, res}];
 }
 reverse(v[i].begin(), v[i].end());
  for(ll m = 1; m<=s; m++){
    if((s+m)%2 != 0)continue;
    ll mid = (s+m)/2;
    ll res = 0;
    for(int j = 0; j<mid; j++)res += (v[i][j] - '0');
    for(int j = mid; j<s; j++)res -= (v[i][j] - '0');

    if(res >= 0) ans += mp[{m, res}];
 }
 ll sum = 0;
 for(ll j = 0; j<s; j++)sum += (v[i][j] - '0');
 mp[{s, sum}]++;
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