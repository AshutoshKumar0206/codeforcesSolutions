#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
int n;
cin>>n;
string s;
cin>>s;
int p = 0, q = 1,r = 2;
int cnt = 0;
if(n == 2){
    if(s[0] == s[1]){
       cnt++;
       if(s[0] == 'B'){
       s[1] = 'R';
       }
       else if(s[0] == 'R'){
        s[1] = 'B';
       }
       else{
        s[1] = 'B';
       }
    }
}
else if(n == 3){
 if(s[p] == s[q] && s[q] == s[r]){
    cnt++;
      if(s[p] == 'B'){
       s[q] = 'R';
       }
       else if(s[p] == 'R'){
        s[q] = 'B';
       }
       else{
        s[q] = 'B';
       }
}
else if(s[p] == s[q]){
       cnt++;
      if(s[p] == 'B' && s[r] == 'R'){
       s[q] = 'G';
       }
       else if(s[p] == 'B' && s[r] == 'G'){
        s[q] = 'R';
       }
       else if(s[p] == 'R' && s[r] == 'G'){
        s[q] = 'B';
       }
       else if(s[p] == 'R' && s[r] == 'B'){
        s[q] = 'G';
       }
       else if(s[p] == 'G' && s[r] == 'B'){
        s[q] = 'R';
       }
       else if(s[p] == 'G' && s[r] == 'R'){
        s[q] = 'B';
       }
}
else if(s[q] == s[r]){
       cnt++;
      if(s[q] == 'R'){
       s[r] = 'G';
       }
       else if(s[q] == 'G'){
        s[r] = 'R';
       }
       else if(s[q] == 'B'){
        s[r] = 'R';
       }
}   
}
else if(n>3){
while(r<n){
if(s[p] == s[q] && s[q] == s[r]){
    cnt++;
      if(s[p] == 'B'){
       s[q] = 'R';
       }
       else if(s[p] == 'R'){
        s[q] = 'B';
       }
       else{
        s[q] = 'B';
       }
}
else if(s[p] == s[q]){
       cnt++;
      if(s[p] == 'B' && s[r] == 'R'){
       s[q] = 'G';
       }
       else if(s[p] == 'B' && s[r] == 'G'){
        s[q] = 'R';
       }
       else if(s[p] == 'R' && s[r] == 'G'){
        s[q] = 'B';
       }
       else if(s[p] == 'R' && s[r] == 'B'){
        s[q] = 'G';
       }
       else if(s[p] == 'G' && s[r] == 'B'){
        s[q] = 'R';
       }
       else if(s[p] == 'G' && s[r] == 'R'){
        s[q] = 'B';
       }
}
else if(s[q] == s[r] && r+1 < n){
       cnt++;
      if(s[r+1] == 'R' && s[q] == 'R'){
        s[r] = 'B';
      }
       else if(s[r+1] == 'B' && s[q] == 'B'){
       s[r] = 'R';
       }
        else if(s[r+1] == 'G' && s[q] == 'G'){
       s[r] = 'R';
       }
      else if(s[r+1] == 'B' && s[q] == 'R'){
       s[r] = 'G';
       }
       else if(s[r+1] == 'B' && s[q] == 'G'){
        s[r] = 'R';
       }
       else if(s[r+1] == 'R' && s[q] == 'G'){
        s[r] = 'B';
       }
       else if(s[r+1] == 'R' && s[q] == 'B'){
        s[r] = 'G';
       }
       else if(s[r+1] == 'G' && s[q] == 'B'){
        s[r] = 'R';
       }
       else if(s[r+1] == 'G' && s[q] == 'R'){
        s[r] = 'B';
       }
}
else if(s[q] == s[r]  && r+1 >= n){
       cnt++;
      if(s[q] == 'R'){
       s[r] = 'G';
       }
       else if(s[q] == 'G'){
        s[r] = 'R';
       }
       else if(s[q] == 'B'){
        s[r] = 'R';
       }
}
p+=1, q+=1, r+=1;
}
}
cout<<cnt<<endl;
cout<<s<<endl;
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