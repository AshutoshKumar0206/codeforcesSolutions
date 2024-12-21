#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
int n;
cin>>n;
string s;
cin>>s;
if(n == 2){
    if(s[0] == '0'){
        cout<<s[1]<<endl;
    }
    else{
        cout<<s<<endl;
    }
    return;
}
map<char, ll>mp;
for(int i = 0; i < n; i++){
mp[s[i]]++;
if(mp['0']>=2){
    cout<<0<<endl;
    return;
}
}
vector<vector<ll>>vt(n-1);
for(int i = 0; i < n-1; i++){
    for(int j = 0; j < n; j++){
      if(j == i){
        int val1 = s[i] - '0';
        int val2 = s[i+1] - '0';
        int val = (val1)*10 + val2; 
        vt[i].push_back(val);
        j++;
      }
      else{
        vt[i].push_back(s[j]-'0');
      }
    }
}
ll mini = INT_MAX;
for(int i=0; i<vt.size(); i++){
    for(int j = 0; j < vt[i].size()-1; j++){
        if((vt[i][j] * vt[i][j+1]) <= (vt[i][j] + vt[i][j+1])){
            vt[i][j+1] = vt[i][j] * vt[i][j+1];
        }
        else{
            vt[i][j+1] = vt[i][j] + vt[i][j+1];
        }
    }
            mini = min(mini, vt[i][vt[i].size()-1]); 
}
cout<<mini<<endl;
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