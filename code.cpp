#include<bits/stdc++.h> 
using namespace std;
#define ll long long
void solve(){
int n,m,k;
cin>>n>>m>>k;
vector<int>v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}
    int inBag = m;
for(int i=0;i<n-1;i++){
    ll next = v[i+1];
    ll curr = v[i];
    ll diff = abs(next - curr);
   if(diff<=k){
     inBag += (curr - max(0ll, next-k));
   }
   else{
    int need = abs(diff - k);
    if(curr > next){
    inBag += (curr - max(0ll, next-k)); 
    }
    else{
       if(inBag >= need){
        inBag -= need;
       }
       else{
        cout<<"NO"<<endl;
        return;
       } 
    }
   }
}
cout<<"YES"<<endl;
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