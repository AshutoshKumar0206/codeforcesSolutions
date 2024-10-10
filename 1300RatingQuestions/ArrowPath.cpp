#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool solvePosition(vector<vector<char>>&arr, int n, int i, int j, bool flag, vector<vector<bool>>&vis){
if(i == 1 && j == n-1){
    return true;
}
if(i<0 || i>=2 || j<0 || j>=n || vis[i][j]) return false;

vis[i][j] = true;
if(flag == false){
    return (solvePosition(arr, n, i-1, j, !flag, vis) | solvePosition(arr, n, i, j-1, !flag, vis) | 
    solvePosition(arr, n, i+1, j, !flag, vis) | solvePosition(arr, n, i, j+1, !flag, vis));
}
else if(flag == true){
 if(arr[i][j] == '>') return solvePosition(arr, n, i, j+1, !flag, vis);
 else return solvePosition(arr, n, i, j-1, !flag, vis); 
}
return false;
}
void solve(){
int n;
cin>>n;
vector<vector<char>>arr(2, vector<char>(n));
vector<vector<bool>>vis(2, vector<bool>(n, false));
for(int j = 0; j < n; j++){
    cin>>arr[0][j];
}
for(int j = 0; j < n; j++){
    cin>>arr[1][j];
}
if(solvePosition(arr, n, 0, 0, false, vis) == true){
    cout<<"YES"<<endl;
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