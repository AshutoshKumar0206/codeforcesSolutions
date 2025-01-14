#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define inf INT_MAX;
void solve(){
ll n;
cin>>n;
string s;
cin>>s;
vector<vector<ll>>odd_places(n, vector<ll>(26, 0));
vector<vector<ll>>even_places(n, vector<ll>(26, 0));
for(int i=1; i<=n; i++){
         if(i&1)odd_places[i-1][s[i-1]-'a']++;
         else even_places[i-1][s[i-1]-'a']++;
}
for(int i=1; i<n; i++){
    for(int j = 0; j<26; j++){
        odd_places[i][j] += odd_places[i-1][j];
        even_places[i][j] += even_places[i-1][j]; 
    }
}
if(n%2 == 0){
ll sum = accumulate(odd_places[n-1].begin(), odd_places[n-1].end(), 0);
ll val = accumulate(even_places[n-1].begin(), even_places[n-1].end(), 0);
ll maxi = *max_element(odd_places[n-1].begin(), odd_places[n-1].end());
ll maxii = *max_element(even_places[n-1].begin(), even_places[n-1].end());
cout<<sum-maxi+val-maxii<<endl;
}
else{
    int ans = 1;
    ll temp = inf;
    for(int i=0; i<n; i++){
        vector<ll>odd = odd_places[n-1];
        vector<ll>even = even_places[n-1];
        for(int j=0; j<26; j++){
            odd[j]-=odd_places[i][j];
            even[j]-=even_places[i][j];
        }
        if(i-1 >= 0){
            for(int j=0; j<26; j++){
            odd[j] += even_places[i-1][j];
            even[j] += odd_places[i-1][j];
        }    
        }
        ll sum = accumulate(odd.begin(), odd.end(), 0ll);
        ll val = accumulate(even.begin(), even.end(), 0ll);
        ll maxi = *max_element(odd.begin(), odd.end());
        ll maxii = *max_element(even.begin(), even.end());
        temp = min(temp, sum-maxi+val-maxii);
    }
        cout<<ans + temp<<endl;     
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