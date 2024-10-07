#include<bits/stdc++.h>
using namespace std;
#define ll long long;
void solve(){
int n;
cin>>n;
vector<long long>v(n);
vector<long long>vt(n);
for(int i=0; i<n; i++){
    cin>>v[i];
    vt[i] = v[i]; 
}
sort(v.begin(), v.end());
for(int i=1; i<n; i++){
vt[i] += vt[i-1];
v[i] += v[i-1];
}
int m;
cin>>m;
while(m--){
    int type, l, r;
    cin>>type>>l>>r;
    if(type == 1){
      if(l-2>=0){
       cout<<vt[r-1]-vt[l-2]<<endl;
        }
      else{
            cout<<vt[r-1]<<endl;
        }
    }
    else if(type == 2){
        if(l-2>=0){
       cout<<v[r-1]-v[l-2]<<endl;
        }
        else{
            cout<<v[r-1]<<endl;
        }
    }
}
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    // int t;
    // cin>>t;
    // while(t--){
    solve();
    // }
    
    return 0;
}