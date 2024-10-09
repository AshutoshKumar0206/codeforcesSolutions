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
sort(v.rbegin(), v.rend());
ll sum = 0;
for(int i=0; i<n; i++){
    if(i%2 == 0){
        if(v[i]%2 == 0){
           sum+=v[i];
        }
    }
    else{
        if(v[i]%2 != 0){
            sum-=v[i];
        }
    }
}
if(sum == 0){
    cout<<"Tie"<<endl;
}
else if(sum < 0){
    cout<<"Bob"<<endl;
}
else{
    cout<<"Alice"<<endl;
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