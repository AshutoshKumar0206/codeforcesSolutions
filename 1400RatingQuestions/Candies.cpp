#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
int n;
cin>>n;
vector<ll>v(n);
for(int i=0; i<n; i++){
    cin>>v[i];
}
int x;
cin>>x;
vector<ll>pref(n);
pref[0] = v[0];
for(int i=1; i<n; i++){
pref[i] = v[i] + pref[i-1];
}
while(x--){
    int l, r;
    cin>>l>>r;
    if(l == 1){
        cout<<(pref[r-1])/10<<endl;
    }
    else{
    cout<<(pref[r-1]-pref[l-2])/10<<endl;
    }
}
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