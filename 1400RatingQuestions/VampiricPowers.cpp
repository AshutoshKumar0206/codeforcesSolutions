#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
int n;
cin>>n;
vector<int>v(n);
for(int i=0; i<n; i++){
    cin>>v[i];
}
const int maxVal = 1<<8;
vector<int>pre(maxVal);
int curr_xor = 0;
int ans = 0;
pre[0] = 1;
for(int i=0; i<n; i++){
curr_xor ^= v[i];
for(int prefix = 0; prefix<maxVal; prefix++){
    if(pre[prefix] == 1){
    ans = max(ans, curr_xor^prefix);
    }
}
pre[curr_xor] = 1;
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