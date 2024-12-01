#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll func(int i){
    ll cnt = 0;
while(i){
    i/=3;
    cnt++;
}
return cnt;
}
void solve(vector<ll>&prefix){
int l, r;
cin>>l>>r;
cout<< prefix[r]-prefix[l-1] + func(l) <<endl;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    int maxi = 2*pow(10,5);
    vector<ll>prefix(maxi, 0);
    prefix[0] = 0;
    for(int i = 1; i<=maxi; i++){
    prefix[i] = prefix[i-1] + func(i);
    }
    while(t--){
    solve(prefix);
    }
    
    return 0;
}