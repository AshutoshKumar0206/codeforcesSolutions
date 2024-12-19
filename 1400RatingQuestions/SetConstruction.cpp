#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
int n;
cin>>n;
vector<vector<char>>v(n, vector<char>(n));
for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
        cin>>v[i][j];
    }
}
unordered_map<int, set<int>>mp;
for(int i = 0; i<n; i++){
    for(int j = 0; j<n; j++){
        if(v[i][j] == '1'){
            mp[j+1].insert(j+1);
            mp[j+1].insert(i+1);
        }
    }
}

for(int i = 1; i<=n; i++){
    if(mp[i].empty()){
        mp[i].insert(i);
    }
}
for(int i = 1; i<=n; i++){
    cout<<mp[i].size()<<" ";
    for(auto j : mp[i]){
        cout<<j<<" ";   
    }cout<<endl;
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