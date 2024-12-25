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
int mini = INT_MAX;
int sec_min = INT_MAX;
int ans = 0;
for(int i = 0; i<n; i++){
if(v[i] < mini){
mini = min(mini, v[i]);
continue;
}
else if(v[i] > mini){
    if(v[i] < sec_min){
        ans++;
    }
    sec_min = min(sec_min, v[i]);
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