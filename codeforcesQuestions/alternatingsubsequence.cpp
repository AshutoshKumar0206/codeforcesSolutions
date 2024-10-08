#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool sign(int number){
    return number>0;
}
void solve(){
int n;
cin>>n;
vector<ll>v(n);
for(int i=0; i<n; i++){
    cin>>v[i];
}
ll sum = 0;
for(int i=0; i<n; i++){
int j = i;
ll maxi = INT_MIN;
while(j<n && sign(v[i]) == sign(v[j])){
    maxi = max(maxi, v[j]);
    j++;
}
sum += maxi;
i = j-1;
}
cout<<sum<<endl;
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