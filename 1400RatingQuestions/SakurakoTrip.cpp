#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
int n;
cin>>n;
vector<int>v(n+1);
for(int i=1; i<=n; i++){
    cin>>v[i];
}
for(int i = n/2-1; i>=1; i--){
    if(v[i] == v[i+1] || v[n-i+1] == v[n-i]){
        swap(v[i], v[n-i+1]);
    }
}
int res = 0;
for(int i = 1; i<n; i++){
res += (v[i] == v[i+1]);
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