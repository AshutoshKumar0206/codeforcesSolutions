#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
int n,k;
cin>>n>>k;
vector<int>v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}
k = min(k, n);
int lastVal = n-1;
for(int i=0; i<k; i++){
if(v[lastVal] > n){
    cout<<"No"<<endl;
    return;
}
lastVal += n - v[lastVal];
if(lastVal >= n){
    lastVal -= n;
}
}
    cout<<"Yes"<<endl;
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