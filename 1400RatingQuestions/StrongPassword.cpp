#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
string s;
cin>>s;
int n;
cin>>n;
string l;
string r;
cin>>l;
cin>>r;
vector<int>v[10];
int m = s.length();
for(int i = 0; i<m; i++){
    v[s[i]-'0'].push_back(i);
}
for(int i = 0; i<10; i++){
    v[i].push_back(m);
}
int check = 0;
int index = -1;
for(int i = 0; i<n; i++){
    int low = (l[i]-'0');
    int high = (r[i]-'0');
    if(check == 1){
       break;
    }
    int newInd = 0;
    for(int j = low; j<=high; j++){
        int ind = upper_bound(v[j].begin(), v[j].end(), index) - v[j].begin();
        if(v[j][ind] == m){
            check = 1;   
        }
        else{   
            newInd = max(newInd, v[j][ind]);
        }
    }
    index = newInd;
}
if(check == 1){
    cout<<"YES"<<endl;
}
else{
cout<<"NO"<<endl;
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