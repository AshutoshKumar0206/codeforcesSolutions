#include<bits/stdc++.h> 
using namespace std;
#define ll long long
void solve(){
int n;
cin>>n;
vector<int>v(n);
int One = 0;
for(int i=0; i<n; i++){
    cin>>v[i];
One+=v[i];
if(v[i] == 1){
    v[i] = -1;
}
else{
    v[i] = 1;
}
}
int cnt = 0;
int ans = 0;
for(int i=0; i<n; i++){
    cnt = max(0, cnt+v[i]);
    ans = max(cnt, ans);
}
if(One == n){
    cout<<n-1<<endl;
    return;
}
cout<<One+ans<<endl;
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