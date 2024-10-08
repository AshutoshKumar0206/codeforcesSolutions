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
sort(v.begin(), v.end());
int curr_group_size = 0;
int groups = 0;
for(int i=0; i<n; i++){
curr_group_size++;
if(curr_group_size >= v[i]){
    groups++;
    curr_group_size = 0;
}
}
cout<<groups<<endl;
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