#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
int n, k, b, s;
cin>>n>>k>>b>>s;
b-=1, s-=1;
vector<pair<int,int>>perm(n);
vector<int>v(n);
for(int i=0; i<n; i++){
cin>>perm[i].first;
perm[i].second = i;
perm[i].first -= 1;
}
for(int i=0; i<n; i++){
    cin>>v[i];
}
ll Sasha_mx = 0;
ll Bodya_mx = 0;
ll Sasha_curr = 0;
ll Bodya_curr = 0;
ll sasha = k;
ll bodya = k;
vector<bool>visS(n);
vector<bool>visB(n);
while(!visS[s] && sasha != 0){
    visS[s] = 1;
Sasha_mx = max(Sasha_mx, Sasha_curr + sasha*1ll*v[s]);
Sasha_curr += v[s];
s = perm[s].first;
sasha--;
}
while(!visB[b] && bodya != 0){
    visB[b] = 1;
Bodya_mx = max(Bodya_mx, Bodya_curr + bodya*1ll*v[b]);
Bodya_curr += v[b];
b = perm[b].first;
bodya--;
}
cout<<(Bodya_mx > Sasha_mx ? "Bodya" : Bodya_mx < Sasha_mx ? "Sasha" : "Draw")<<endl;
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