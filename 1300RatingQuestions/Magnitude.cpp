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
ll sum = 0, mini = 0;
for(int i=0; i<n; i++){
    sum += v[i];
    mini = min(mini, sum);
}
cout<<sum-2*mini<<endl;
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