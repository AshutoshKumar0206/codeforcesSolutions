#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX
#define less INT_MIN
void solve(){
int n;
cin>>n;
vector<int>v(n);
int odd = 0;
int even = 0;
for(int i=0; i<n; i++){
    cin>>v[i];
    if(v[i]&1)odd++;
    else even++;
}
if(odd%4 == 2){
    cout<<"Bob"<<endl;
}
else if(odd%4 == 3)cout<<"Alice"<<endl;
else if(odd%4 == 0)cout<<"Alice"<<endl;
else{
    if(odd%2 == 1 && even%2 == 0)cout<<"Bob"<<endl;
    else cout<<"Alice"<<endl;
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