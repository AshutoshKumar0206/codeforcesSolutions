#include<bits/stdc++.h>
using namespace std;
void solve(){
int n;
cin>>n;
vector<int>v(n);
for(int i=0; i<n; i++){
    cin>>v[i];
}
int m;
cin>>m;
vector<int>vt(m);
for(int i=0; i<m; i++){
    cin>>vt[i];
}
sort(v.begin(), v.end());
sort(vt.begin(), vt.end());
int cnt = 0;
for(int i=0; i<n; i++){
for(int j=0; j<m; j++){
if(abs(v[i]-vt[j]) <= 1){
    vt[j] = INT_MAX;
cnt++;
break;
}
}   
}
cout<<cnt<<endl;
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