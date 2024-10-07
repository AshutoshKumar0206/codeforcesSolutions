#include<bits/stdc++.h>
using namespace std;
void solve(){
int n;
cin>>n;
int a, b, c;
cin>>a>>b>>c;
string s;
cin>>s;
int cntR = 0;
int cntS = 0;
int cntP = 0;
for(int i = 0; i<s.length(); i++){
if(s[i] == 'P'){
    cntP++;
}
else if(s[i] == 'R'){
    cntR++;
}
else{
    cntS++;
}
}
int ans = min(b, cntR) + min(c, cntP) + min(a, cntS);
if(2*ans >= n){
    cout<<"YES"<<endl;
    string st;
for(int i = 0; i<s.length(); i++){
if(s[i] == 'P' && c > 0){
      st += 'S';
      c--;
}
else if(s[i] == 'R' && b > 0){
st+='P';
b--;
}
else if(s[i] == 'S' && a > 0){
    st+='R';
    a--;
}
else{
st+="_";
}
}
for(int i = 0; i<st.length(); i++){
if(st[i] != '_'){
continue;
}
else if(a>0){
    st[i] = 'R';
    a--;
}
else if(b>0){
    st[i] = 'P';
    b--;
}
else if(c>0){
st[i] = 'S';
c--;
}
}
cout<<st<<endl;
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