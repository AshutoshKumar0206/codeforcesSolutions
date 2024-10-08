#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
string s;
cin>>s;
int mini = INT_MAX;
int one = 0;
int two = 0;
int three = 0;
bool flag = false;
for(int i=0; i<s.length(); i++){
      if(s[i] == '1')one++;
        else if(s[i] == '2')two++;
        else if(s[i] == '3')three++;
        if(one > 0 && two > 0 && three > 0){
            flag = true;
            break;
        }
} 

if(flag == true){
    int l = 0;
    int r = 0;
    int cnt1 = 0;
    int cnt2 = 0;
    int cnt3 = 0;
while(r<s.length()){
if(s[r] == '1')cnt1++;
else if(s[r] == '2')cnt2++;
else if(s[r] == '3')cnt3++;
if(cnt1 > 0 && cnt2 > 0 && cnt3 > 0){
    mini = min(mini, r-l+1);
    while(cnt1 > 0 && cnt2 > 0 && cnt3 > 0){
        if(s[l] == '1')cnt1--;
        else if(s[l] == '2')cnt2--;
        else if(s[l] == '3')cnt3--;
        l++;
        if(cnt1 > 0 && cnt2 > 0 && cnt3 > 0){
        mini = min(mini, r-l+1);
        }
    }
}
r++;
}
cout<<mini<<endl;
}
else{
cout<<0<<endl;
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