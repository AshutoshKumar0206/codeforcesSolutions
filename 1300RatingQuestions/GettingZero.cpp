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
int mod = 32768;
for(int i=0; i<n; i++){
   if(v[i]%mod == 0){
    cout<<0<<" ";
   }
   else{
    int arr[16];
    int mini = INT_MAX;
      for(int j = 0; j<=15; j++){
        int c = 0;
        int x = v[i] + j;
        while(x%2 == 0){
            c++;
            x/=2;
        }
        arr[j] = j + 15 - c;
        mini = min(mini, arr[j]);
      }
      cout<<mini<<" ";    
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