#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n, k;
    cin>>n>>k;
    string a, b;
    cin>>a;
    cin>>b;
    map<char, int> freqA, freqB;
    for(auto i:a){
        freqA[i-'a']++;
    }
    for(auto i:b){
        freqB[i-'a']++;
    }
    bool flag = false;
    for(int i=0; i<26; i++){
        if(freqA[i] < freqB[i] || (freqA[i] -= freqB[i]) % k){
            flag = true;
        }
        freqA[i+1] += freqA[i];
    }
    cout<<(flag?"No":"Yes")<<"\n";
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