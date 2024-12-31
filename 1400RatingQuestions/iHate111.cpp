#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool isAdded(ll n){
   for(int i =0; i<=n/111; i++){
    if((n - 111*i)%11 == 0){
        return true;
    }
   }
   return false;
}
void solve(){
ll n;
cin>>n;

if(isAdded(n)){
    cout<<"YES"<<"\n";
}
else{
    cout<<"NO"<<"\n";
}
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